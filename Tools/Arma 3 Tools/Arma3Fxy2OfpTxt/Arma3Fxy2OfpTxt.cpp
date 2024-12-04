// This file is basing on convert_fxy.cpp by Faguss (https://ofp-faguss.com/files/convert_fxy.7z). Great thanks to Faguss

// This project can lightly convert Arma 3 fxy to OFP txt which can be convert to OFP fxy by Faguss convert_fxy tool
// There're unknown short numbers in Arma 3 fxy data structure. Not sure how they're used and how they can work in OFP

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>
#include <cstdlib>

//https://community.bistudio.com/wiki/FXY_File_Format
struct FxyEntry
{
	unsigned short CharCode;
	unsigned short X, Y;
	unsigned short Width, Height;
	unsigned short unknownNumber[6];
};

struct FxyPageHead
{
	unsigned short PaaFileNumber;
	unsigned short unknownNumber[6];
	unsigned short PageSize;
	unsigned short unknownTail;
};

char* number_with_space(char *string, unsigned short number, bool add_space)
{
	sprintf(string, "%u", number);

	if (add_space)
		if (number < 10)
			strcat(string, "  ");
		else
			if (number < 100)
				strcat(string, " ");

	return string;
}


int main(int argc, char *argv[])
{
	if (argc < 2) {
		printf("No filename given");
		return 1;
	}

	const int max_filename          = 512;
	char filename_new[max_filename] = "";

	char *path = argv[1];
	FILE *file = fopen(path, "rb");

	if (!file) {
		perror("");
		return 2;
	}

	fseek(file, 0, SEEK_END);
	int file_size = ftell(file);
	fseek(file, 0, SEEK_SET);

	char *filename = strrchr(path, '\\');

	if (filename == NULL)
		filename = path;
	else
		filename++;

	{
		strncpy(filename_new, filename, max_filename-8);

		if (strlen(filename) >= max_filename-8)
			strcat(filename_new, ".fxy.txt");
		else
			strcat(filename_new, ".txt");
	}

	FILE *file_new = fopen(filename_new, "wb");

	if (!file_new) {
		perror("");
		return 3;
	}

	bool first_item      = true;
	char line[512]       = "";
	char description[16] = "";
	char str_number[16]  = "";

	// Verify if ArmA 3 fxy
	int header = 0;
	fread(&header, 4, 1, file);
	if (header != 0x6F464942)
	{
		printf("Not ArmA fxy");
		return 4;
	}
	fread(&header, 4, 1, file);
	if (header != 0x102)
	{
		printf("Not ArmA 3 fxy");
		return 5;
	}
	// fseek(file, header==0x6F464942 ? 8 : 0, SEEK_SET);

	FxyEntry letter;
	FxyPageHead fph;

	constexpr unsigned short range = 65535;
	constexpr unsigned short asciiRg = 223;

	int PageNumber = 0;
	bool readPageHead = true;
	int letterIdx = 0;

	while(ftell(file)<file_size && !ferror(file)) {
		if (readPageHead)
		{
			fread(&fph, sizeof(fph), 1, file);
			readPageHead = false;
			letterIdx = 0;
		}

		{
			fread(&letter, sizeof(letter), 1, file);

			letter.CharCode -= 32;

			if (letter.CharCode <= range) {
				switch(letter.CharCode) {
					case 0   : strcpy(description, "space"); break;
					case 97  : strcpy(description, "empty"); break;
					case 99  : strcpy(description, "f with hook"); break;
					case 104 : strcpy(description, "accent"); break;
					case 112 : strcpy(description, "empty"); break;
					case 120 : strcpy(description, "small tilde"); break;
					case 128 : strcpy(description, "non-breaking space"); break;
					default  : sprintf(description, "%c", letter.CharCode+32);
				}

				if (first_item)
					first_item = false;
				else
					fprintf(file_new, "\r\n");

				fprintf(file_new, "class CharCode%s {", number_with_space(str_number, letter.CharCode, 1));

				fprintf(file_new, "%s=%s;", "PaaFileNumber", number_with_space(str_number, fph.PaaFileNumber, false));
				fprintf(file_new, " ");

				fprintf(file_new, "%s=%s;", "x", number_with_space(str_number, letter.X, true));
				fprintf(file_new, " ");
				fprintf(file_new, "%s=%s;", "y", number_with_space(str_number, letter.Y, true));
				fprintf(file_new, " ");
				fprintf(file_new, "%s=%s;", "w", number_with_space(str_number, letter.Width, true));
				fprintf(file_new, " ");
				fprintf(file_new, "%s=%s;", "h", number_with_space(str_number, letter.Height, true));

				fprintf(file_new, "};");
				if (letter.CharCode <= asciiRg)
					fprintf(file_new, "\t// %s", description);
			}
		}

		++letterIdx;
		if (letterIdx == fph.PageSize)
		{
			readPageHead = true;
		}
	}

	fclose(file_new);
	fclose(file);
	return 0;
}
