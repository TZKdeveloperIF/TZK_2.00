// remove ending 0 in decimal
// adjust '{' position
// fill ';' in the end of line

// 2.01 remove Six GroupColor and add Six GroupName
// 2.01 modifies almost all East Soldiers speaker
// 2.01 move Women subclass from West to East, and add Women subclass for Guer
// 2.01 make official islands' town name supports stringtable
// 2.01 added nogova

class CfgWorlds {
	access = 1;
	eastSign = "east_01.paa";
	westSign = "west_01.paa";
	eastFlag = "rus_vlajka.pac";
	westFlag = "usa_vlajka.pac";
	guerrilaSign = "guer_01.paa";
	guerrilaFlag = "guer_01.paa";
	class GroupNameList {
		letters[] = {"Alpha","Bravo","Charlie","Delta","Echo","Foxtrot","Golf","Hotel","Kilo"};
	};
	class GroupNames {
		class Alpha {
			name = "$STR_CFG_GRPNAMES_ALPHA";
			image = "a.paa";
		};
		class Bravo {
			name = "$STR_CFG_GRPNAMES_BRAVO";
			image = "b.paa";
		};
		class Charlie {
			name = "$STR_CFG_GRPNAMES_CHARLIE";
			image = "c.paa";
		};
		class Delta {
			name = "$STR_CFG_GRPNAMES_DELTA";
			image = "d.paa";
		};
		class Echo {
			name = "$STR_CFG_GRPNAMES_ECHO";
			image = "e.paa";
		};
		class Foxtrot {
			name = "$STR_CFG_GRPNAMES_FOXTROT";
			image = "f.paa";
		};
		class Golf {
			name = "$STR_CFG_GRPNAMES_GOLF";
			image = "g.paa";
		};
		class Hotel {
			name = "$STR_CFG_GRPNAMES_HOTEL";
			image = "h.paa";
		};
		class November {
			name = "$STR_CFG_GRPNAMES_NOVEMBER";
			image = "a.paa";
		};
		class Kilo {
			name = "$STR_CFG_GRPNAMES_KILO";
			image = "a.paa";
		};
		class Yankee {
			name = "$STR_CFG_GRPNAMES_YANKEE";
			image = "a.paa";
		};
		class Zulu {
			name = "$STR_CFG_GRPNAMES_ZULU";
			image = "a.paa";
		};
		class Two {
			name = "$STR_CFG_GRPNAMES_TWO";
			image = "a.paa";
		};
		class Three {
			name = "$STR_CFG_GRPNAMES_THREE";
			image = "a.paa";
		};
		class Buffalo {
			name = "$STR_CFG_GRPNAMES_BUFFALO";
			image = "a.paa";
		};
		class Guardian {
			name = "$STR_CFG_GRPNAMES_GUARDIAN";
			image = "a.paa";
		};
		class Convoy {
			name = "$STR_CFG_GRPNAMES_CONVOY";
			image = "a.paa";
		};
		class Fox {
			name = "$STR_CFG_GRPNAMES_FOX";
			image = "a.paa";
		};
	};
	class GroupColorList {
		colors[] = {"GroupColor1","GroupColor2","GroupColor3","GroupColor4","GroupColor5","GroupColor6","GroupColor7"};
	};
	class GroupColors {
		class GroupColor1 {
			name = "$STR_CFG_GRPCOL_BLACK";
			image = "black.paa";
		};
		class GroupColor2 {
			name = "$STR_CFG_GRPCOL_RED";
			image = "red.paa";
		};
		class GroupColor3 {
			name = "$STR_CFG_GRPCOL_GREEN";
			image = "green.paa";
		};
		class GroupColor4 {
			name = "$STR_CFG_GRPCOL_BLUE";
			image = "blue.paa";
		};
		class GroupColor5 {
			name = "$STR_CFG_GRPCOL_YELLOW";
			image = "yellow.paa";
		};
		class GroupColor6 {
			name = "$STR_CFG_GRPCOL_ORANGE";
			image = "orange.paa";
		};
		class GroupColor7 {
			name = "$STR_CFG_GRPCOL_PINK";
			image = "pink.paa";
		};
		class GroupColor0 {
			name = "";
			image = "";
		};
		class Six {
			name = "$STR_CFG_GRPNAMES_SIX";
			image = "a.paa";
		};
	};
	class East {
		access = 0;
		class Soldiers {
			class TimofeiProdunov {
				name = "Timofei Produnov";
				face = "Face52";
				glasses = "Sunglasses";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class MaksimBychovskay {
				name = "Maksim Bychovskay";
				face = "Face48";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.070935;
				description = "";
			};
			class GennadiPakhomov {
				name = "Gennadi Pakhomov";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.020398;
				description = "";
			};
			class SergeiChernovol {
				name = "Sergei Chernovol";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class VladimirSpaseniev {
				name = "Vladimir Spaseniev";
				face = "Face44";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.035809;
				description = "";
			};
			class DimitriDrygin {
				name = "Dimitri Drygin";
				face = "Face52";
				glasses = "Sunglasses";
				speaker = "Adam";
				pitch = 0.968085;
				description = "";
			};
			class DenisTabanov {
				name = "Denis Tabanov";
				face = "Face48";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class LeonidRostovtzeff {
				name = "Leonid Rostovtzeff";
				face = "Face52";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.992816;
				description = "";
			};
			class IvanIltchenko {
				name = "Ivan Iltchenko";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.075873;
				description = "";
				face = "Face52";
			};
			class ValeriyPintusevich {
				name = "Valeriy Pintusevich";
				face = "Face52";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class IliaBiriukov {
				name = "Ilia Biriukov";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.906775;
				description = "";
			};
			class IvanZinoviev {
				name = "Ivan Zinoviev";
				face = "Face51";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.069849;
				description = "";
			};
			class LevMandelstam {
				name = "Lev Mandelstam";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class StanislavPopov {
				name = "Stanislav Popov";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.961334;
				description = "";
			};
			class MichailRzaev {
				name = "Michail Rzaev";
				face = "Face51";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.927991;
				description = "";
			};
			class IvanDavydov {
				name = "Ivan Davydov";
				face = "Face48";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class IvanGaznayev {
				name = "Ivan Gaznayev";
				face = "Face52";
				glasses = "Spectacles";
				speaker = "Dan";
				pitch = 0.995935;
				description = "";
			};
			class IvanPlushenko {
				name = "Ivan Plushenko";
				face = "Face44";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.934857;
				description = "";
			};
			class AlekseiPatsayev {
				name = "Aleksei Patsayev";
				face = "Face50";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class AndreiDubnikov {
				name = "Andrei Dubnikov";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.039191;
				description = "";
			};
			class VladimirMendeleev {
				name = "Vladimir Mendeleev";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.034619;
				description = "";
				face = "Face51";
			};
			class SergeiYefrimov {
				name = "Sergei Yefrimov";
				face = "Face45";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class MichailPamyatnikh {
				name = "Michail Pamyatnikh";
				face = "Face47";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.051733;
				description = "";
			};
			class IvanSheptekit {
				name = "Ivan Sheptekit";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.050909;
				description = "";
			};
			class SergeiBobrikov {
				name = "Sergei Bobrikov";
				face = "Face48";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class ViktorRostropovich {
				name = "Viktor Rostropovich";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.9216;
				description = "";
			};
			class GennadiBure {
				name = "Gennadi Bure";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.927014;
				description = "";
			};
			class MaksimTemirkanov {
				name = "Maksim Temirkanov";
				face = "Face50";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class IvanRybkin {
				name = "Ivan Rybkin";
				face = "Face44";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.070251;
				description = "";
			};
			class TimofeiUvarov {
				name = "Timofei Uvarov";
				face = "Face47";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.945367;
				description = "";
			};
			class BorisKokorev {
				name = "Boris Kokorev";
				face = "Face48";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class AnatoliBeregovoi {
				name = "Anatoli Beregovoi";
				face = "Face51";
				glasses = "None";
				speaker = "John";
				pitch = 1.001306;
				description = "";
			};
			class VasiliyZhirinovsky {
				name = "Vasiliy Zhirinovsky";
				face = "Face46";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.900208;
				description = "";
			};
			class NicolaiGordievsky {
				name = "Nicolai Gordievsky";
				face = "Face47";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class SergeiPobedonostev {
				name = "Sergei Pobedonostev";
				face = "Face52";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.963452;
				description = "";
			};
			class PavelBrilev {
				name = "Pavel Brilev";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.052496;
				description = "";
				face = "Face46";
			};
			class YevgeniyNevolin {
				name = "Yevgeniy Nevolin";
				face = "Face48";
				glasses = "Spectacles";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class SergeiBobylev {
				name = "Sergei Bobylev";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.057965;
				description = "";
				face = "Face50";
			};
			class LeonidYuran {
				name = "Leonid Yuran";
				face = "Face52";
				glasses = "Sunglasses";
				speaker = "Peter";
				pitch = 1.041327;
				description = "";
			};
			class FyodorKalawinsky {
				name = "Fyodor Kalawinsky";
				face = "Face50";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class VasiliyGoncharenko {
				name = "Vasiliy Goncharenko";
				face = "Face51";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.036945;
				description = "";
			};
			class SergeiSamarin {
				name = "Sergei Samarin";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.093756;
				description = "";
				face = "Face52";
			};
			class VasiliyPrivalov {
				name = "Vasiliy Privalov";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class SergeiNakhimov {
				name = "Sergei Nakhimov";
				face = "Face45";
				glasses = "Spectacles";
				speaker = "Jonah";
				pitch = 0.924249;
				description = "";
			};
			class PavelChazov {
				name = "Pavel Chazov";
				face = "Face45";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.914447;
				description = "";
			};
			class ViktorZinovieff {
				name = "Viktor Zinovieff";
				face = "Face47";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class NicolaiTyurin {
				name = "Nicolai Tyurin";
				face = "Face47";
				glasses = "Sunglasses";
				speaker = "Adam";
				pitch = 1.021643;
				description = "";
			};
			class SergeiPorzezinski {
				name = "Sergei Porzezinski";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.906311;
				description = "";
				face = "Face44";
			};
			class BorisMaigourov {
				name = "Boris Maigourov";
				glasses = "Spectacles";
				speaker = "Tom";
				pitch = 1;
				description = "";
				face = "Face52";
			};
			class IvanVaelbe {
				name = ", an, Vaelbe?";
				face = "Face46";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.994629;
				description = "";
			};
			class ProkopiSmettanin {
				name = "Prokopi Smettanin";
				face = "Face44";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.040533;
				description = "";
			};
			class AleksandrGratchev {
				name = "Aleksandr Gratchev";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class TimofeiPotemkin {
				name = "Timofei Potemkin";
				face = "Face44";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.973584;
				description = "";
			};
			class AlekseiKondrationok {
				name = "Aleksei Kondrationok";
				face = "Face52";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.993524;
				description = "";
			};
			class VasiliyKupetsky {
				name = "Vasiliy Kupetsky";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
				face = "Face50";
			};
			class SergeiDolgopolov {
				name = "Sergei Dolgopolov";
				face = "Face51";
				glasses = "Spectacles";
				speaker = "Dan";
				pitch = 0.907574;
				description = "";
			};
			class GeorgiMaisky {
				name = "Georgi Maisky";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.951184;
				description = "";
			};
			class AnatoliPankratov {
				name = "Anatoli Pankratov";
				face = "Face44";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class ViktorShiryayev {
				name = "Viktor Shiryayev";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.099695;
				description = "";
			};
			class YefremLvov {
				name = "Yefrem Lvov";
				face = "Face51";
				glasses = "Spectacles";
				speaker = "Peter";
				pitch = 1.019958;
				description = "";
			};
			class SergeiBykovsky {
				name = "Sergei Bykovsky";
				face = "Face50";
				glasses = "Sunglasses";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class SergeiKarelin {
				name = "Sergei Karelin";
				face = "Face51";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.015704;
				description = "";
			};
			class IvanMalikov {
				name = "Ivan Malikov";
				face = "Face44";
				glasses = "Spectacles";
				speaker = "John";
				pitch = 1.059412;
				description = "";
			};
			class SergeiGagarin {
				name = "Sergei Gagarin";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class StepanSvatkowski {
				name = "Stepan Svatkowski";
				face = "Face45";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 0.900574;
				description = "";
			};
			class ProkopiRyndenko {
				name = "Prokopi Ryndenko";
				face = "Face45";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.934863;
				description = "";
			};
			class ProkopiDemochev {
				name = "Prokopi Demochev";
				face = "Face50";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class AleksandrKrylov {
				name = "Aleksandr Krylov";
				face = "Face46";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.027411;
				description = "";
			};
			class MichailVoikevich {
				name = "Michail Voikevich";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.906537;
				description = "";
			};
			class AlekseiKhohklov {
				name = "Aleksei Khohklov";
				face = "Face48";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class ViktorKshessinsk {
				name = "Viktor Kshessinsk";
				face = "Face52";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.00517;
				description = "";
			};
			class PavelDemine {
				name = "Pavel Demine";
				face = "Face45";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.018561;
				description = "";
			};
			class LevJakov {
				name = "Lev Jakov";
				face = "Face47";
				glasses = "Spectacles";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class TimofeiCzartorysk {
				name = "Timofei Czartorysk";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.93255;
				description = "";
				face = "Face50";
			};
			class YuriyKrivelyov {
				name = "Yuriy Krivelyov";
				face = "Face48";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.029517;
				description = "";
			};
			class YuriyVorotaev {
				name = "Yuriy Vorotaev";
				face = "Face47";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class SergeiNenov {
				name = "Sergei Nenov";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.941449;
				description = "";
			};
			class VasiliyChichagov {
				name = "Vasiliy Chichagov";
				face = "Face44";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.023968;
				description = "";
			};
			class IvanBzowski {
				name = "Ivan Bzowski";
				face = "Face46";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class VladimirVorotaev {
				name = "Vladimir Vorotaev";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.063776;
				description = "";
				face = "Face50";
			};
			class PavelMazipov {
				name = "Pavel Mazipov";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.999377;
				description = "";
			};
			class VasiliyJeloudov {
				name = "Vasiliy Jeloudov";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
				face = "Face50";
			};
			class PavelShekodanov {
				name = "Pavel Shekodanov";
				face = "Face52";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.025867;
				description = "";
			};
			class GeorgiKomorov {
				name = "Georgi Komorov";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.048804;
				description = "";
			};
			class DenisBratus {
				name = "Denis Bratus";
				glasses = "Spectacles";
				speaker = "Dan";
				pitch = 1;
				description = "";
				face = "Face48";
			};
			class GeorgiOmelchenko {
				name = "Georgi Omelchenko";
				face = "Face45";
				glasses = "None";
				speaker = "John";
				pitch = 0.945007;
				description = "";
			};
			class NikitaShvanov {
				name = "Nikita Shvanov";
				face = "Face48";
				glasses = "Sunglasses";
				speaker = "Tom";
				pitch = 0.952313;
				description = "";
			};
			class DimitriKorshanenko {
				name = "Dimitri Korshanenko";
				face = "Face48";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class MichailShirokai {
				name = "Michail Shirokai";
				face = "Face50";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.946075;
				description = "";
			};
			class StanislavSergeyev {
				name = "Stanislav Sergeyev";
				face = "Face50";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.958826;
				description = "";
			};
			class AlekseiRashchupkin {
				name = "Aleksei Rashchupkin";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class IvanSlatkin {
				name = "Ivan Slatkin";
				face = "Face52";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1.006897;
				description = "";
			};
			class AleksandrSautin {
				name = "Aleksandr Sautin";
				face = "Face48";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.984186;
				description = "";
			};
			class FyodorIsyanov {
				name = "Fyodor Isyanov";
				face = "Face46";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class MichailChernisov {
				name = "Michail Chernisov";
				face = "Face47";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.054791;
				description = "";
			};
			class PavelSmetanine {
				name = "Pavel Smetanine";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 0.967358;
				description = "";
				face = "Face48";
			};
			class IvanTranderkov {
				name = "Ivan Tranderkov";
				face = "Face44";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class SergeiTrefiolov {
				name = "Sergei Trefiolov";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.090784;
				description = "";
				face = "Face51";
			};
			class VasiliyKondratenko {
				name = "Vasiliy Kondratenko";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.000391;
				description = "";
			};
			class MichailSolovyev {
				name = "Michail Solovyev";
				face = "Face51";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class SergeiSlatkin {
				name = "Sergei Slatkin";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.951202;
				description = "";
				face = "Face45";
			};
			class MichailAntyuhin {
				name = "Michail Antyuhin";
				face = "Face52";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.002033;
				description = "";
			};
			class SergeiBeri {
				name = "Sergei Beri";
				face = "Face47";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class SergeiDesny {
				name = "Sergei Desny";
				face = "Face45";
				glasses = "None";
				speaker = "John";
				pitch = 1.071014;
				description = "";
			};
			class ProkopiAnissin {
				name = "Prokopi Anissin";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.045459;
				description = "";
			};
			class IvanNosov {
				name = "Ivan Nosov";
				face = "Face51";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class DimitriYeltsin {
				name = "Dimitri Yeltsin";
				face = "Face48";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.954315;
				description = "";
			};
			class PavelZinovieff {
				name = "Pavel Zinovieff";
				face = "Face46";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.064526;
				description = "";
			};
			class YuriyZelenskay {
				name = "Yuriy Zelenskay";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
				face = "Face46";
			};
			class MichailZenchikov {
				name = "Michail Zenchikov";
				face = "Face47";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.040302;
				description = "";
			};
			class AntonTchepikov {
				name = "Anton Tchepikov";
				face = "Face47";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.944849;
				description = "";
			};
			class DenisIvelitsch {
				name = "Denis Ivelitsch";
				face = "Face50";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class AnatoliKokorev {
				name = "Anatoli Kokorev";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.05918;
				description = "";
				face = "Face52";
			};
			class LevKasparkov {
				name = "Lev Kasparkov";
				face = "Face51";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.971503;
				description = "";
			};
			class VladimirKhohklov {
				name = "Vladimir Khohklov";
				face = "Face51";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class StepanKudreyavtsev {
				name = "Stepan Kudreyavtsev";
				face = "Face44";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.027051;
				description = "";
			};
			class IvanFibingerov {
				name = "Ivan Fibingerov";
				glasses = "None";
				speaker = "John";
				pitch = 1.064337;
				description = "";
				face = "Face48";
			};
			class VasiliySemiriag {
				name = "Vasiliy Semiriag";
				face = "Face51";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class PavelRakov {
				name = "Pavel Rakov";
				face = "Face47";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.936139;
				description = "";
			};
			class AleksandrKulikovskay {
				name = "Aleksandr Kulikovskay";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.034558;
				description = "";
				face = "Face45";
			};
			class IliaChahine {
				name = "Ilia Chahine";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class SergeiPankratev {
				name = "Sergei Pankratev";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.061188;
				description = "";
				face = "Face51";
			};
			class VladimirKrishtoforich {
				name = "Vladimir Krishtoforich";
				face = "Face52";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.031103;
				description = "";
			};
			class IvanVlascenko {
				name = "Ivan Vlascenko";
				face = "Face44";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class IvanKarpol {
				name = "Ivan Karpol";
				face = "Face46";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.088892;
				description = "";
			};
			class AnatoliPletrev {
				name = "Anatoli Pletrev";
				face = "Face52";
				glasses = "Spectacles";
				speaker = "Ted";
				pitch = 1.093121;
				description = "";
			};
			class PavelVenclov {
				name = "Pavel Venclov";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
				face = "Face52";
			};
			class PavelKolyvanov {
				name = "Pavel Kolyvanov";
				face = "Face48";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.061725;
				description = "";
			};
			class AleksandrMarkov {
				name = "Aleksandr Markov";
				face = "Face50";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.073999;
				description = "";
			};
			class FyodorKnivelyov {
				name = "Fyodor Knivelyov";
				face = "Face48";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class DimitriGorbenko {
				name = "Dimitri Gorbenko";
				face = "Face44";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.948993;
				description = "";
			};
			class IvanMolodin {
				name = "Ivan Molodin";
				face = "Face46";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.90036;
				description = "";
			};
			class PavelMasterkov {
				name = "Pavel Masterkov";
				face = "Face48";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class PavelDyakov {
				name = "Pavel Dyakov";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.006085;
				description = "";
			};
			class MichailMahayev {
				name = "Michail Mahayev";
				face = "Face44";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.91142;
				description = "";
			};
			class BorisFibingerov {
				name = "Boris Fibingerov";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class PavelYumashev {
				name = "Pavel Yumashev";
				face = "Face50";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.07785;
				description = "";
			};
			class TimofeiKochuokov {
				name = "Timofei Kochuokov";
				face = "Face50";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.904828;
				description = "";
			};
			class AlekseiRokhlin {
				name = "Aleksei Rokhlin";
				face = "Face45";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class NikitaChernavin {
				name = "Nikita Chernavin";
				face = "Face45";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.063123;
				description = "";
			};
			class IvanGabrelovic {
				name = "Ivan Gabrelovic";
				face = "Face47";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.064288;
				description = "";
			};
			class GeorgiDemeter {
				name = "Georgi Demeter";
				face = "Face50";
				glasses = "Sunglasses";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class StepanStrizhakov {
				name = "Stepan Strizhakov";
				face = "Face51";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.039728;
				description = "";
			};
			class IvanKoptev {
				name = "Ivan Koptev";
				face = "Face51";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.002216;
				description = "";
			};
			class VasiliyBerezovsky {
				name = "Vasiliy Berezovsky";
				face = "Face44";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class NicolaiPorzezinski {
				name = "Nicolai Porzezinski";
				face = "Face51";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.032013;
				description = "";
			};
			class IvanChernyovskay {
				name = "Ivan Chernyovskay";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.029462;
				description = "";
				face = "Face50";
			};
			class FyodorProkourorov {
				name = "Fyodor Prokourorov";
				face = "Face47";
				glasses = "Sunglasses";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class AndreiTamirov {
				name = "Andrei Tamirov";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.942322;
				description = "";
			};
			class ValeriyKirov {
				name = "Valeriy Kirov";
				face = "Face46";
				glasses = "None";
				speaker = "John";
				pitch = 1.050964;
				description = "";
			};
			class YevgeniyChahine {
				name = "Yevgeniy Chahine";
				face = "Face44";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class SergeiGrusov {
				name = "Sergei Grusov";
				face = "Face45";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.090265;
				description = "";
			};
			class DimitriAntipov {
				name = "Dimitri Antipov";
				face = "Face50";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.949963;
				description = "";
			};
			class AntonChernovol {
				name = "Anton Chernovol";
				face = "Face46";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class AlekseiKondrashov {
				name = "Aleksei Kondrashov";
				face = "Face47";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.988702;
				description = "";
			};
			class BorisAlyabyev {
				name = "Boris Alyabyev";
				face = "Face44";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.061633;
				description = "";
			};
			class TimofeiNovosi {
				name = "Timofei Novosi";
				face = "Face47";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class MichailVyshinsky {
				name = "Michail Vyshinsky";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.947369;
				description = "";
			};
			class IvanKarenin {
				name = "Ivan Karenin";
				face = "Face52";
				glasses = "Sunglasses";
				speaker = "Rob";
				pitch = 1.020947;
				description = "";
			};
			class ProkopiZbruyev {
				name = "Prokopi Zbruyev";
				face = "Face51";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class VasiliyKliugin {
				name = "Vasiliy Kliugin";
				face = "Face47";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.010651;
				description = "";
			};
			class SergeiKondrashov {
				name = "Sergei Kondrashov";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.933441;
				description = "";
			};
			class DimitriValeev {
				name = "Dimitri Valeev";
				face = "Face48";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class GeorgiDolgikh {
				name = "Georgi Dolgikh";
				face = "Face45";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.007758;
				description = "";
			};
			class SergeiStanchinsky {
				name = "Sergei Stanchinsky";
				face = "Face51";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.065277;
				description = "";
			};
			class ValeriyNelyubov {
				name = "Valeriy Nelyubov";
				face = "Face44";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class IvanDolukhanov {
				name = "Ivan Dolukhanov";
				face = "Face46";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.904718;
				description = "";
			};
			class YevgeniySpiakov {
				name = "Yevgeniy Spiakov";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.090088;
				description = "";
			};
			class VladimirLigachev {
				name = "Vladimir Ligachev";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class PavelMandelstam {
				name = "Pavel Mandelstam";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.038226;
				description = "";
			};
			class StepanLutrov {
				name = "Stepan Lutrov";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.007452;
				description = "";
			};
			class StanislavPlekhanov {
				name = "Stanislav Plekhanov";
				face = "Face51";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class VasiliyPoushkin {
				name = "Vasiliy Poushkin";
				face = "Face46";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.941772;
				description = "";
			};
			class AntonKatko {
				name = "Anton Katko";
				face = "Face46";
				glasses = "None";
				speaker = "John";
				pitch = 0.911743;
				description = "";
			};
			class MichailSemiriag {
				name = "Michail Semiriag";
				face = "Face50";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class IvanBazhukov {
				name = "Ivan Bazhukov";
				face = "Face47";
				glasses = "None";
				speaker = "John";
				pitch = 0.975708;
				description = "";
			};
			class ProkopiSanhusky {
				name = "Prokopi Sanhusky";
				face = "Face47";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.002441;
				description = "";
			};
			class StepanTchesnov {
				name = "Stepan Tchesnov";
				face = "Face52";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class MichailRost {
				name = "Michail Rost";
				face = "Face46";
				glasses = "Spectacles";
				speaker = "Adam";
				pitch = 0.98847;
				description = "";
			};
			class AndreiRozhdestvensky {
				name = "Andrei Rozhdestvensky";
				face = "Face47";
				glasses = "None";
				speaker = "John";
				pitch = 0.902423;
				description = "";
			};
			class PavelSharivker {
				name = "Pavel Sharivker";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class IvanBershadensky {
				name = "Ivan Bershadensky";
				face = "Face50";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.935889;
				description = "";
			};
			class IvanDolgikh {
				name = "Ivan Dolgikh";
				face = "Face47";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.950403;
				description = "";
			};
			class GennadiBounine {
				name = "Gennadi Bounine";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class LeonidKurennoy {
				name = "Leonid Kurennoy";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.973175;
				description = "";
			};
			class VasiliyGlebov {
				name = "Vasiliy Glebov";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.034369;
				description = "";
			};
			class MichailGurov {
				name = "Michail Gurov";
				face = "Face44";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class IliaUdovin {
				name = "Ilia Udovin";
				face = "Face50";
				glasses = "None";
				speaker = "John";
				pitch = 1.048871;
				description = "";
			};
			class GeorgiGromyko {
				name = "Georgi Gromyko";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.932275;
				description = "";
			};
			class SergeiRebikov {
				name = "Sergei Rebikov";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
				face = "Face52";
			};
			class VasiliyZubov {
				name = "Vasiliy Zubov";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.050439;
				description = "";
			};
			class FyodorPrjevalski {
				name = "Fyodor Prjevalski";
				face = "Face44";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.986139;
				description = "";
			};
			class IvanTarasov {
				name = "Ivan Tarasov";
				face = "Face47";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class PavelShiryayev {
				name = "Pavel Shiryayev";
				face = "Face47";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.925726;
				description = "";
			};
			class IvanShalimov {
				name = "Ivan Shalimov";
				face = "Face51";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 0.919147;
				description = "";
			};
			class AndreiKomyagin {
				name = "Andrei Komyagin";
				face = "Face48";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class IvanMorgunov {
				name = "Ivan Morgunov";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.942944;
				description = "";
			};
			class MaksimVostrikov {
				name = "Maksim Vostrikov";
				face = "Face51";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.033069;
				description = "";
			};
			class ValeriyIvelitsch {
				name = "Valeriy Ivelitsch";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class DimitriYefrimov {
				name = "Dimitri Yefrimov";
				face = "Face52";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.014154;
				description = "";
			};
			class IvanLebedyenko {
				name = "Ivan Lebedyenko";
				face = "Face48";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.931146;
				description = "";
			};
			class IvanTchesnov {
				name = "Ivan Tchesnov";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
				face = "Face52";
			};
			class AntonBalanchine {
				name = "Anton Balanchine";
				face = "Face52";
				glasses = "Spectacles";
				speaker = "Tom";
				pitch = 0.93576;
				description = "";
			};
			class IvanGuleghin {
				name = "Ivan Guleghin";
				face = "Face50";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.079297;
				description = "";
			};
			class Yevgeniylitvak {
				name = "Yevgeniy litvak";
				face = "Face45";
				glasses = "Sunglasses";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class NicolaiKayakov {
				name = "Nicolai Kayakov";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.904962;
				description = "";
			};
			class ValeriyVezirov {
				name = "Valeriy Vezirov";
				face = "Face45";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.058368;
				description = "";
			};
			class SergeiGuseinov {
				name = "Sergei Guseinov";
				face = "Face45";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class SergeiAlliluyev {
				name = "Sergei Alliluyev";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.052216;
				description = "";
			};
			class ViktorBakhvalov {
				name = "Viktor Bakhvalov";
				face = "Face44";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.995825;
				description = "";
			};
			class MaksimBaronov {
				name = "Maksim Baronov";
				face = "Face52";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class AlekseiChistiakov {
				name = "Aleksei Chistiakov";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.09007;
				description = "";
			};
			class ValeriySevnik {
				name = "Valeriy Sevnik";
				face = "Face45";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.901227;
				description = "";
			};
			class DimitriNosov {
				name = "Dimitri Nosov";
				face = "Face45";
				glasses = "Sunglasses";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class MichailSudakov {
				name = "Michail Sudakov";
				face = "Face44";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.968109;
				description = "";
			};
			class MichailSinaisky {
				name = "Michail Sinaisky";
				face = "Face52";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.030487;
				description = "";
			};
			class GeorgiGolubev {
				name = "Georgi Golubev";
				face = "Face46";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class PavelFaustin {
				name = "Pavel Faustin";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.978497;
				description = "";
			};
			class TimofeiShalimov {
				name = "Timofei Shalimov";
				face = "Face51";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.951917;
				description = "";
			};
			class ProkopiGusev {
				name = "Prokopi Gusev";
				face = "Face44";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class DimitriKalawinsky {
				name = "Dimitri Kalawinsky";
				face = "Face47";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.905493;
				description = "";
			};
			class NicolaiLebziak {
				name = "Nicolai Lebziak";
				face = "Face45";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.085669;
				description = "";
			};
			class DimitriGusyev {
				name = "Dimitri Gusyev";
				face = "Face46";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class IvanKhudorozkin {
				name = "Ivan Khudorozkin";
				face = "Face44";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.084613;
				description = "";
			};
			class DimitriYuran {
				name = "Dimitri Yuran";
				face = "Face44";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.979309;
				description = "";
			};
			class SergeiMorozov {
				name = "Sergei Morozov";
				face = "Face44";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class VasiliyChernyovskay {
				name = "Vasiliy Chernyovskay";
				face = "Face44";
				glasses = "Spectacles";
				speaker = "Peter";
				pitch = 0.948126;
				description = "";
			};
			class IvanKudreyavtsev {
				name = "Ivan Kudreyavtsev";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.079279;
				description = "";
			};
			class DimitriSemago {
				name = "Dimitri Semago";
				face = "Face44";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class PavelTumanov {
				name = "Pavel Tumanov";
				face = "Face52";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.982697;
				description = "";
			};
			class IvanLobov {
				name = "Ivan Lobov";
				face = "Face48";
				glasses = "Sunglasses";
				speaker = "Jonah";
				pitch = 0.946112;
				description = "";
			};
			class DimitriShayduko {
				name = "Dimitri Shayduko";
				face = "Face44";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class LevSipyengin {
				name = "Lev Sipyengin";
				face = "Face51";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.952588;
				description = "";
			};
			class MichailVaelbe {
				name = ", chail, Vaelbe?";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.007739;
				description = "";
			};
			class ValeriyKarpol {
				name = "Valeriy Karpol";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class AndreiSytsov {
				name = "Andrei Sytsov";
				face = "Face48";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.920087;
				description = "";
			};
			class MaksimAgletdinov {
				name = "Maksim Agletdinov";
				face = "Face46";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.913196;
				description = "";
			};
			class VladimirLupandin {
				name = "Vladimir Lupandin";
				face = "Face45";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class SergeiGaznayev {
				name = "Sergei Gaznayev";
				face = "Face51";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.917419;
				description = "";
			};
			class LeonidLegotine {
				name = "Leonid Legotine";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.996588;
				description = "";
				face = "Face45";
			};
			class DimitriKupetsky {
				name = "Dimitri Kupetsky";
				face = "Face52";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class SergeiBrechkovsky {
				name = "Sergei Brechkovsky";
				face = "Face45";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.097406;
				description = "";
			};
			class MichailKatzev {
				name = "Michail Katzev";
				face = "Face52";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.977234;
				description = "";
			};
			class FyodorBerzin {
				name = "Fyodor Berzin";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
				face = "Face51";
			};
			class AleksandrDekanozov {
				name = "Aleksandr Dekanozov";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.099432;
				description = "";
			};
			class NikitaRakov {
				name = "Nikita Rakov";
				face = "Face48";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.079413;
				description = "";
			};
			class PavelTukhbatulin {
				name = "Pavel Tukhbatulin";
				face = "Face44";
				glasses = "Sunglasses";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class PavelZbruyev {
				name = "Pavel Zbruyev";
				face = "Face51";
				glasses = "Sunglasses";
				speaker = "Rob";
				pitch = 0.997504;
				description = "";
			};
			class YefremVezirov {
				name = "Yefrem Vezirov";
				face = "Face46";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.065594;
				description = "";
			};
			class PavelZasekin {
				name = "Pavel Zasekin";
				face = "Face51";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class NikitaYevteushenko {
				name = "Nikita Yevteushenko";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.024451;
				description = "";
			};
			class AntonMindlin {
				name = "Anton Mindlin";
				glasses = "None";
				speaker = "John";
				pitch = 0.955029;
				description = "";
				face = "Face46";
			};
			class ProkopiKondrashchenko {
				name = "Prokopi Kondrashchenko";
				face = "Face46";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class GeorgiTokarev {
				name = "Georgi Tokarev";
				face = "Face51";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.042413;
				description = "";
			};
			class MichailYevteushenko {
				name = "Michail Yevteushenko";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.008118;
				description = "";
			};
			class VasiliySazhin {
				name = "Vasiliy Sazhin";
				face = "Face52";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class SergeiZbruev {
				name = "Sergei Zbruev";
				face = "Face46";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.070569;
				description = "";
			};
			class VasiliyAntsyforov {
				name = "Vasiliy Antsyforov";
				face = "Face46";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.032703;
				description = "";
			};
			class MichailShubukin {
				name = "Michail Shubukin";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class ViktorYeltsin {
				name = "Viktor Yeltsin";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.9802;
				description = "";
			};
			class StepanNaumov {
				name = "Stepan Naumov";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.937402;
				description = "";
			};
			class Prokopilitvak {
				name = "Prokopi litvak";
				face = "Face45";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class VasiliyBushmanov {
				name = "Vasiliy Bushmanov";
				face = "Face47";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1.068628;
				description = "";
			};
			class GeorgiKrylov {
				name = "Georgi Krylov";
				face = "Face52";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.92536;
				description = "";
			};
			class SergeiBelenki {
				name = "Sergei Belenki";
				face = "Face48";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class PavelBaronov {
				name = "Pavel Baronov";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.081213;
				description = "";
				face = "Face52";
			};
			class VasiliyNizovtsev {
				name = "Vasiliy Nizovtsev";
				face = "Face46";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.052209;
				description = "";
			};
			class IliaRosikhin {
				name = "Ilia Rosikhin";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
				face = "Face44";
			};
			class DimitriPlatov {
				name = "Dimitri Platov";
				face = "Face44";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.097485;
				description = "";
			};
			class SergeiTyukhay {
				name = "Sergei Tyukhay";
				face = "Face46";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.019684;
				description = "";
			};
			class MichailMalchugin {
				name = "Michail Malchugin";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class MichailWinogradski {
				name = "Michail Winogradski";
				face = "Face46";
				glasses = "None";
				speaker = "John";
				pitch = 1.099982;
				description = "";
			};
			class SergeiFibingerov {
				name = "Sergei Fibingerov";
				face = "Face52";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.95993;
				description = "";
			};
			class ViktorTrandenkov {
				name = "Viktor Trandenkov";
				face = "Face52";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class Dimitrilitvak {
				name = "Dimitri litvak";
				face = "Face47";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.016296;
				description = "";
			};
			class GennadiMiasnikov {
				name = "Gennadi Miasnikov";
				face = "Face44";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.981073;
				description = "";
			};
			class MaksimKulik {
				name = "Maksim Kulik";
				face = "Face46";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class DenisGromyko {
				name = "Denis Gromyko";
				face = "Face44";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.08587;
				description = "";
			};
			class NikitaKatko {
				name = "Nikita Katko";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.08313;
				description = "";
				face = "Face48";
			};
			class IvanChekhol {
				name = "Ivan Chekhol";
				face = "Face46";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class MaksimBiriukov {
				name = "Maksim Biriukov";
				face = "Face52";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.077142;
				description = "";
			};
			class StanislavLavrin {
				name = "Stanislav Lavrin";
				face = "Face52";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.089496;
				description = "";
			};
			class PavelKolotch {
				name = "Pavel Kolotch";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
				face = "Face51";
			};
			class AleksandrPeskow {
				name = "Aleksandr Peskow";
				face = "Face45";
				glasses = "Sunglasses";
				speaker = "Rob";
				pitch = 1.072772;
				description = "";
			};
			class ValeriyTchepikov {
				name = "Valeriy Tchepikov";
				face = "Face48";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.978912;
				description = "";
			};
			class SergeiVoropaev {
				name = "Sergei Voropaev";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class SergeiAndropov {
				name = "Sergei Andropov";
				face = "Face50";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.951233;
				description = "";
			};
			class IvanChubais {
				name = "Ivan Chubais";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.054309;
				description = "";
			};
			class TimofeiRosikhin {
				name = "Timofei Rosikhin";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class AndreiYumashev {
				name = "Andrei Yumashev";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.959882;
				description = "";
			};
			class SergeiBurlachenko {
				name = "Sergei Burlachenko";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.95683;
				description = "";
			};
			class DenisKautsky {
				name = "Denis Kautsky";
				face = "Face46";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class LevVezirov {
				name = "Lev Vezirov";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.039838;
				description = "";
			};
			class TimofeiOvsiannikov {
				name = "Timofei Ovsiannikov";
				face = "Face51";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.911029;
				description = "";
			};
			class MaksimNizovtsev {
				name = "Maksim Nizovtsev";
				face = "Face46";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class BorisSimutenkov {
				name = "Boris Simutenkov";
				face = "Face44";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.98266;
				description = "";
			};
			class PavelGalipov {
				name = "Pavel Galipov";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.972333;
				description = "";
			};
			class PavelSafin {
				name = "Pavel Safin";
				face = "Face52";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class FyodorGromyko {
				name = "Fyodor Gromyko";
				face = "Face48";
				glasses = "Sunglasses";
				speaker = "Adam";
				pitch = 0.930756;
				description = "";
			};
			class StepanYakolev {
				name = "Stepan Yakolev";
				face = "Face50";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.000147;
				description = "";
			};
			class FyodorGataullin {
				name = "Fyodor Gataullin";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class AleksandrBeketov {
				name = "Aleksandr Beketov";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.991016;
				description = "";
			};
			class VasiliyKissin {
				name = "Vasiliy Kissin";
				face = "Face48";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.00578;
				description = "";
			};
			class VasiliyRukovskay {
				name = "Vasiliy Rukovskay";
				face = "Face52";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class VasiliyNedzelski {
				name = "Vasiliy Nedzelski";
				face = "Face44";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.995746;
				description = "";
			};
			class IvanSipyengin {
				name = "Ivan Sipyengin";
				face = "Face46";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.951404;
				description = "";
			};
			class IliaStarovoitov {
				name = "Ilia Starovoitov";
				face = "Face50";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class PavelNelyubov {
				name = "Pavel Nelyubov";
				face = "Face46";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.063458;
				description = "";
			};
			class TimofeiZadorozhnyi {
				name = "Timofei Zadorozhnyi";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.976453;
				description = "";
				face = "Face46";
			};
			class SergeiSimutenkov {
				name = "Sergei Simutenkov";
				face = "Face51";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class MichailZadorozhnyi {
				name = "Michail Zadorozhnyi";
				face = "Face44";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.974591;
				description = "";
			};
			class DimitriTsibliyev {
				name = "Dimitri Tsibliyev";
				face = "Face50";
				glasses = "None";
				speaker = "John";
				pitch = 0.973639;
				description = "";
			};
			class DimitriMorozov {
				name = "Dimitri Morozov";
				face = "Face50";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class SergeiPamyatnikh {
				name = "Sergei Pamyatnikh";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.91651;
				description = "";
				face = "Face51";
			};
			class NikitaSanhusky {
				name = "Nikita Sanhusky";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.000147;
				description = "";
			};
			class MichailOfonasev {
				name = "Michail Ofonasev";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
				face = "Face52";
			};
			class DimitriZhivanevskay {
				name = "Dimitri Zhivanevskay";
				face = "Face47";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.092041;
				description = "";
			};
			class VasiliyChugainov {
				name = "Vasiliy Chugainov";
				face = "Face52";
				glasses = "None";
				speaker = "John";
				pitch = 1.020996;
				description = "";
			};
			class VasiliyOrtoff {
				name = "Vasiliy Ortoff";
				face = "Face51";
				glasses = "Spectacles";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class PavelKochetkov {
				name = "Pavel Kochetkov";
				face = "Face46";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.041345;
				description = "";
			};
			class PavelBartnev {
				name = "Pavel Bartnev";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.990491;
				description = "";
				face = "Face45";
			};
			class AntonYiyakov {
				name = "Anton Yiyakov";
				face = "Face48";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class StepanYanovsky {
				name = "Stepan Yanovsky";
				face = "Face45";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.983142;
				description = "";
			};
			class VasiliyZegouniov {
				name = "Vasiliy Zegouniov";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.011133;
				description = "";
			};
			class DenisMoldovan {
				name = "Denis Moldovan";
				face = "Face51";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class LeonidSemago {
				name = "Leonid Semago";
				face = "Face44";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.096259;
				description = "";
			};
			class NikitaPankratov {
				name = "Nikita Pankratov";
				face = "Face44";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.994348;
				description = "";
			};
			class IvanBakhvalov {
				name = "Ivan Bakhvalov";
				face = "Face46";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class IvanMatulik {
				name = "Ivan Matulik";
				face = "Face48";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.978735;
				description = "";
			};
			class IvanGlazunov {
				name = "Ivan Glazunov";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.069775;
				description = "";
				face = "Face44";
			};
			class DimitriGurevich {
				name = "Dimitri Gurevich";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
				face = "Face44";
			};
			class StepanGuleghin {
				name = "Stepan Guleghin";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.097382;
				description = "";
				face = "Face45";
			};
			class VasiliyChernovol {
				name = "Vasiliy Chernovol";
				face = "Face45";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.983405;
				description = "";
			};
			class IvanErikeev {
				name = "Ivan Erikeev";
				face = "Face45";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class GeorgiLebedyenko {
				name = "Georgi Lebedyenko";
				face = "Face50";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.015979;
				description = "";
			};
			class YuriyGromyko {
				name = "Yuriy Gromyko";
				face = "Face48";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.952679;
				description = "";
			};
			class VladimirGromab {
				name = "Vladimir Gromab";
				face = "Face45";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class MichailBlodnieks {
				name = "Michail Blodnieks";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.044232;
				description = "";
			};
			class VasiliyChernitsky {
				name = "Vasiliy Chernitsky";
				face = "Face51";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.95976;
				description = "";
			};
			class AndreiYemelyanev {
				name = "Andrei Yemelyanev";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class SergeiGolovanov {
				name = "Sergei Golovanov";
				face = "Face45";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.089893;
				description = "";
			};
			class BorisLebedev {
				name = "Boris Lebedev";
				face = "Face44";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.062512;
				description = "";
			};
			class VasiliyRagulin {
				name = "Vasiliy Ragulin";
				face = "Face47";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class VasiliyKuzmenko {
				name = "Vasiliy Kuzmenko";
				face = "Face47";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.980737;
				description = "";
			};
			class AleksandrZadorozhnyi {
				name = "Aleksandr Zadorozhnyi";
				face = "Face50";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.968109;
				description = "";
			};
			class VasiliyGrinkov {
				name = "Vasiliy Grinkov";
				face = "Face46";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class MichailChebykim {
				name = "Michail Chebykim";
				face = "Face48";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.943048;
				description = "";
			};
			class VasiliyShcherbin {
				name = "Vasiliy Shcherbin";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.931488;
				description = "";
			};
			class IvanOvsiannikov {
				name = "Ivan Ovsiannikov";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class FyodorAlenichev {
				name = "Fyodor Alenichev";
				face = "Face45";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.948621;
				description = "";
			};
			class VasiliyGrachev {
				name = "Vasiliy Grachev";
				face = "Face47";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.925909;
				description = "";
			};
			class FyodorGolovanov {
				name = "Fyodor Golovanov";
				face = "Face52";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class PavelNasenko {
				name = "Pavel Nasenko";
				face = "Face50";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.91748;
				description = "";
			};
			class IvanRomanovros {
				name = "Ivan Romanovros";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.064508;
				description = "";
			};
			class MichailBolkonsky {
				name = "Michail Bolkonsky";
				face = "Face52";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class DimitriYevdokimov {
				name = "Dimitri Yevdokimov";
				face = "Face47";
				glasses = "None";
				speaker = "John";
				pitch = 1.09472;
				description = "";
			};
			class StepanPervoi {
				name = "Stepan Pervoi";
				face = "Face44";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.052197;
				description = "";
			};
			class AlekseiGoguniv {
				name = "Aleksei Goguniv";
				face = "Face44";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class PavelPatsayev {
				name = "Pavel Patsayev";
				face = "Face48";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.010266;
				description = "";
			};
			class SergeiStaradumov {
				name = "Sergei Staradumov";
				face = "Face48";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.933405;
				description = "";
			};
			class SergeiLeschov {
				name = "Sergei Leschov";
				face = "Face52";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class StanislavSotnikov {
				name = "Stanislav Sotnikov";
				face = "Face48";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.072437;
				description = "";
			};
			class StepanKomorov {
				name = "Stepan Komorov";
				face = "Face47";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.972015;
				description = "";
			};
			class ValeriySmirnov {
				name = "Valeriy Smirnov";
				face = "Face44";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class IvanArsov {
				name = "Ivan Arsov";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.020764;
				description = "";
			};
			class VladimirIsyanov {
				name = "Vladimir Isyanov";
				face = "Face45";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.001398;
				description = "";
			};
			class SergeiDzhamgerchinov {
				name = "Sergei Dzhamgerchinov";
				face = "Face44";
				glasses = "Spectacles";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class DimitriKatko {
				name = "Dimitri Katko";
				face = "Face45";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.032861;
				description = "";
			};
			class ViktorDavydov {
				name = "Viktor Davydov";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.031622;
				description = "";
			};
			class IliaDolgorouki {
				name = "Ilia Dolgorouki";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class BorisZasekin {
				name = "Boris Zasekin";
				face = "Face52";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.082697;
				description = "";
			};
			class GennadiBashmet {
				name = "Gennadi Bashmet";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.961426;
				description = "";
			};
			class SergeiDemichev {
				name = "Sergei Demichev";
				face = "Face46";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class VasiliyGrishkuv {
				name = "Vasiliy Grishkuv";
				face = "Face50";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.969019;
				description = "";
			};
			class FyodorNevskaj {
				name = "Fyodor Nevskaj";
				face = "Face45";
				glasses = "Sunglasses";
				speaker = "Patrick";
				pitch = 1.050269;
				description = "";
			};
			class BorisChaikovskay {
				name = "Boris Chaikovskay";
				face = "Face52";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class IvanKarklins {
				name = "Ivan Karklins";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.936981;
				description = "";
			};
			class AnatoliBarabanschikov {
				name = "Anatoli Barabanschikov";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.921826;
				description = "";
			};
			class YuriyAndropov {
				name = "Yuriy Andropov";
				face = "Face44";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class AleksandrSadykov {
				name = "Aleksandr Sadykov";
				face = "Face47";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.050153;
				description = "";
			};
			class AnatoliVoropaev {
				name = "Anatoli Voropaev";
				face = "Face48";
				glasses = "None";
				speaker = "John";
				pitch = 1.017255;
				description = "";
			};
			class YevgeniyKrylov {
				name = "Yevgeniy Krylov";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
				face = "Face44";
			};
			class MichailParshin {
				name = "Michail Parshin";
				face = "Face48";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.010126;
				description = "";
			};
			class IliaBarshai {
				name = "Ilia Barshai";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.938324;
				description = "";
				face = "Face50";
			};
			class DimitriMishin {
				name = "Dimitri Mishin";
				face = "Face52";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class MaksimZimyatov {
				name = "Maksim Zimyatov";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.993536;
				description = "";
				face = "Face44";
			};
			class PavelSemago {
				name = "Pavel Semago";
				face = "Face48";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.075391;
				description = "";
			};
			class SergeiMiasnikov {
				name = "Sergei Miasnikov";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
				face = "Face50";
			};
			class VladimirVitkowskii {
				name = "Vladimir Vitkowskii";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.021985;
				description = "";
			};
			class SergeiTretyak {
				name = "Sergei Tretyak";
				face = "Face52";
				glasses = "Spectacles";
				speaker = "John";
				pitch = 1.013214;
				description = "";
			};
			class StepanPasunin {
				name = "Stepan Pasunin";
				face = "Face47";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class MichailBanketik {
				name = "Michail Banketik";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.973181;
				description = "";
				face = "Face47";
			};
			class IvanZbruyev {
				name = "Ivan Zbruyev";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.996374;
				description = "";
			};
			class IvanChesnokov {
				name = "Ivan Chesnokov";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class ViktorOnton {
				name = "Viktor Onton";
				face = "Face48";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.05481;
				description = "";
			};
			class MichailKozyrev {
				name = "Michail Kozyrev";
				face = "Face48";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.024384;
				description = "";
			};
			class MaksimLoginov {
				name = "Maksim Loginov";
				face = "Face46";
				glasses = "Sunglasses";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class VasiliyItsov {
				name = "Vasiliy Itsov";
				face = "Face46";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.013391;
				description = "";
			};
			class PavelShakirov {
				name = "Pavel Shakirov";
				face = "Face52";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.075946;
				description = "";
			};
			class SergeiBochkarer {
				name = "Sergei Bochkarer";
				face = "Face48";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class GeorgiChernavin {
				name = "Georgi Chernavin";
				face = "Face45";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.927905;
				description = "";
			};
			class ProkopiWakin {
				name = "Prokopi Wakin";
				face = "Face50";
				glasses = "Sunglasses";
				speaker = "Adam";
				pitch = 1.029364;
				description = "";
			};
			class StepanPorkhomovskiy {
				name = "Stepan Porkhomovskiy";
				face = "Face52";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class AntonDolukhanov {
				name = "Anton Dolukhanov";
				face = "Face47";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.938037;
				description = "";
			};
			class IliaZhdanov {
				name = "Ilia Zhdanov";
				face = "Face47";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.990582;
				description = "";
			};
			class ViktorRybin {
				name = "Viktor Rybin";
				face = "Face46";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class BorisTurov {
				name = "Boris Turov";
				face = "Face52";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.961224;
				description = "";
			};
			class NikitaPopov {
				name = "Nikita Popov";
				face = "Face47";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.060376;
				description = "";
			};
			class PavelRomasko {
				name = "Pavel Romasko";
				face = "Face48";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class VasiliyRomasko {
				name = "Vasiliy Romasko";
				face = "Face44";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.952045;
				description = "";
			};
			class AlekseiDemirchan {
				name = "Aleksei Demirchan";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.096497;
				description = "";
				face = "Face47";
			};
			class IvanGataullin {
				name = "Ivan Gataullin";
				face = "Face52";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class PavelYusupov {
				name = "Pavel Yusupov";
				face = "Face45";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.00423;
				description = "";
			};
			class SergeiEltsov {
				name = "Sergei Eltsov";
				face = "Face47";
				glasses = "Sunglasses";
				speaker = "Rob";
				pitch = 1.004388;
				description = "";
			};
			class DimitriPlotinikov {
				name = "Dimitri Plotinikov";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class FyodorLeschev {
				name = "Fyodor Leschev";
				face = "Face51";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.970996;
				description = "";
			};
			class SergeiLyakhov {
				name = "Sergei Lyakhov";
				face = "Face44";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.901202;
				description = "";
			};
			class NikitaBezborodov {
				name = "Nikita Bezborodov";
				face = "Face52";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class VasiliyMostovoi {
				name = "Vasiliy Mostovoi";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.077893;
				description = "";
			};
			class IvanDuchovny {
				name = "Ivan Duchovny";
				face = "Face51";
				glasses = "Sunglasses";
				speaker = "Dan";
				pitch = 1.055872;
				description = "";
			};
			class YuriyProkin {
				name = "Yuriy Prokin";
				face = "Face47";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class MichailPurishkevitch {
				name = "Michail Purishkevitch";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.959857;
				description = "";
			};
			class StanislavSkobelov {
				name = "Stanislav Skobelov";
				face = "Face46";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.93623;
				description = "";
			};
			class ValeriyIgnatov {
				name = "Valeriy Ignatov";
				face = "Face44";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class ViktorMarusev {
				name = "Viktor Marusev";
				face = "Face48";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.928516;
				description = "";
			};
			class VasiliyChernisov {
				name = "Vasiliy Chernisov";
				face = "Face48";
				glasses = "Spectacles";
				speaker = "Dan";
				pitch = 0.904315;
				description = "";
			};
			class VasiliyGapon {
				name = "Vasiliy Gapon";
				face = "Face52";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class GennadiGavrilenko {
				name = "Gennadi Gavrilenko";
				face = "Face46";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.937762;
				description = "";
			};
			class VasiliyLyapunov {
				name = "Vasiliy Lyapunov";
				face = "Face46";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.038306;
				description = "";
			};
			class LevPrivalov {
				name = "Lev Privalov";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
				face = "Face47";
			};
			class NicolaiSonkin {
				name = "Nicolai Sonkin";
				face = "Face48";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.063873;
				description = "";
			};
			class BorisSharivker {
				name = "Boris Sharivker";
				face = "Face45";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1.003455;
				description = "";
			};
			class PavelKuzenkov {
				name = "Pavel Kuzenkov";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
				face = "Face52";
			};
			class NikitaRossovskay {
				name = "Nikita Rossovskay";
				face = "Face52";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.937512;
				description = "";
			};
			class TimofeiZhuvov {
				name = "Timofei Zhuvov";
				face = "Face45";
				glasses = "None";
				speaker = "John";
				pitch = 1.013031;
				description = "";
			};
			class MaksimTokarev {
				name = "Maksim Tokarev";
				glasses = "Spectacles";
				speaker = "Dan";
				pitch = 1;
				description = "";
				face = "Face50";
			};
			class VasiliyMarchenko {
				name = "Vasiliy Marchenko";
				face = "Face44";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.904065;
				description = "";
			};
			class ViktorButyrskay {
				name = "Viktor Butyrskay";
				face = "Face50";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.098846;
				description = "";
			};
			class YefremMendeleev {
				name = "Yefrem Mendeleev";
				face = "Face52";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class IvanBanketik {
				name = "Ivan Banketik";
				face = "Face48";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.963214;
				description = "";
			};
			class SergeiPudovkin {
				name = "Sergei Pudovkin";
				face = "Face52";
				glasses = "Sunglasses";
				speaker = "John";
				pitch = 1.044;
				description = "";
			};
			class AlekseiKarelin {
				name = "Aleksei Karelin";
				face = "Face52";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class SergeiKovlun {
				name = "Sergei Kovlun";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.919733;
				description = "";
				face = "Face46";
			};
			class PavelOleksandr {
				name = "Pavel Oleksandr";
				face = "Face51";
				glasses = "None";
				speaker = "John";
				pitch = 0.937457;
				description = "";
			};
			class IvanShkadov {
				name = "Ivan Shkadov";
				face = "Face52";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class PavelRokhlin {
				name = "Pavel Rokhlin";
				face = "Face47";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.955273;
				description = "";
			};
			class AleksandrOleksandr {
				name = "Aleksandr Oleksandr";
				face = "Face46";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.933179;
				description = "";
			};
			class StanislavOstrogorsky {
				name = "Stanislav Ostrogorsky";
				face = "Face46";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class PavelLazutkin {
				name = "Pavel Lazutkin";
				face = "Face52";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.011322;
				description = "";
			};
			class TimofeiKondrashchenko {
				name = "Timofei Kondrashchenko";
				face = "Face46";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.038623;
				description = "";
			};
			class NicolaiSautin {
				name = "Nicolai Sautin";
				face = "Face44";
				glasses = "Sunglasses";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class AntonSanhusky {
				name = "Anton Sanhusky";
				face = "Face45";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.044299;
				description = "";
			};
			class AntonMarkov {
				name = "Anton Markov";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.001715;
				description = "";
			};
			class LevGolubkhov {
				name = "Lev Golubkhov";
				face = "Face52";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class SergeiBeregovoi {
				name = "Sergei Beregovoi";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.94458;
				description = "";
				face = "Face50";
			};
			class SergeiMoskalets {
				name = "Sergei Moskalets";
				face = "Face52";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.915228;
				description = "";
			};
			class SergeiMurin {
				name = "Sergei Murin";
				face = "Face48";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class IvanChernavin {
				name = "Ivan Chernavin";
				face = "Face52";
				glasses = "None";
				speaker = "John";
				pitch = 0.957965;
				description = "";
			};
			class AleksandrKonoroz {
				name = "Aleksandr Konoroz";
				face = "Face46";
				glasses = "Sunglasses";
				speaker = "Jonah";
				pitch = 0.995837;
				description = "";
			};
			class AntonVolosheninov {
				name = "Anton Volosheninov";
				face = "Face46";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class SergeiSuperanskai {
				name = "Sergei Superanskai";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.094342;
				description = "";
			};
			class VasiliyBocharkov {
				name = "Vasiliy Bocharkov";
				face = "Face51";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.981824;
				description = "";
			};
			class SergeiDuchovny {
				name = "Sergei Duchovny";
				face = "Face51";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class DimitriDemeter {
				name = "Dimitri Demeter";
				face = "Face46";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.017426;
				description = "";
			};
			class MichailIpatiev {
				name = "Michail Ipatiev";
				glasses = "Sunglasses";
				speaker = "Rob";
				pitch = 0.930249;
				description = "";
				face = "Face47";
			};
			class IliaRumiantsev {
				name = "Ilia Rumiantsev";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class IvanAisenyev {
				name = "Ivan Aisenyev";
				face = "Face50";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.084027;
				description = "";
			};
			class GennadiDemochev {
				name = "Gennadi Demochev";
				face = "Face50";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.042609;
				description = "";
			};
			class BorisIvanski {
				name = "Boris Ivanski";
				face = "Face50";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class ViktorKoptev {
				name = "Viktor Koptev";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.055438;
				description = "";
			};
			class BorisSuperanskai {
				name = "Boris Superanskai";
				face = "Face46";
				glasses = "None";
				speaker = "John";
				pitch = 1.08631;
				description = "";
			};
			class PavelTsilevich {
				name = "Pavel Tsilevich";
				face = "Face48";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class BorisLavrov {
				name = "Boris Lavrov";
				face = "Face48";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.069464;
				description = "";
			};
			class VasiliyDolukhanov {
				name = "Vasiliy Dolukhanov";
				face = "Face52";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.947034;
				description = "";
			};
			class IvanChaikovskay {
				name = "Ivan Chaikovskay";
				face = "Face44";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class DimitriKulikovskay {
				name = "Dimitri Kulikovskay";
				face = "Face46";
				glasses = "None";
				speaker = "John";
				pitch = 0.989618;
				description = "";
			};
			class DenisOstrogorsky {
				name = "Denis Ostrogorsky";
				face = "Face51";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.915064;
				description = "";
			};
			class IvanShulgin {
				name = "Ivan Shulgin";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
				face = "Face51";
			};
			class TimofeiAlenichev {
				name = "Timofei Alenichev";
				face = "Face50";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.915399;
				description = "";
			};
			class PavelBukolov {
				name = "Pavel Bukolov";
				face = "Face50";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.939435;
				description = "";
			};
			class IvanLazutkin {
				name = "Ivan Lazutkin";
				face = "Face45";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class MaksimKhotliykov {
				name = "Maksim Khotliykov";
				face = "Face50";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.956555;
				description = "";
			};
			class MichailMekhdiev {
				name = "Michail Mekhdiev";
				face = "Face46";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.933667;
				description = "";
			};
			class IvanTitovich {
				name = "Ivan Titovich";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class VladimirPencherjevsky {
				name = "Vladimir Pencherjevsky";
				face = "Face52";
				glasses = "Spectacles";
				speaker = "Greg";
				pitch = 1.042657;
				description = "";
			};
			class IvanGorchakov {
				name = "Ivan Gorchakov";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.093561;
				description = "";
			};
			class DimitriNakhimov {
				name = "Dimitri Nakhimov";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class MichailYagudin {
				name = "Michail Yagudin";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.953143;
				description = "";
				face = "Face51";
			};
			class PavelSokov {
				name = "Pavel Sokov";
				face = "Face48";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.94809;
				description = "";
			};
			class StanislavShayduko {
				name = "Stanislav Shayduko";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class VasiliyIvelitsch {
				name = "Vasiliy Ivelitsch";
				face = "Face50";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.966077;
				description = "";
			};
			class GennadiVostrikov {
				name = "Gennadi Vostrikov";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.927142;
				description = "";
			};
		};
	};
	class West {
		class Soldiers {
			class MikeHirasaki {
				name = "Mike Hirasaki";
				face = "Face39";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class BobbyBruning {
				name = "Bobby Bruning";
				face = "Face38";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.983057;
				description = "";
			};
			class JamesPound {
				name = "James Pound";
				face = "Face31";
				glasses = "None";
				speaker = "John";
				pitch = 0.912097;
				description = "";
			};
			class JimSelf {
				name = "Jim Self";
				face = "Face26";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class GregByrd {
				name = "Greg Byrd";
				face = "Face31";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.014648;
				description = "";
			};
			class GeorgeDabak {
				name = "George Dabak";
				face = "Face25";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.034992;
				description = "";
			};
			class HarrySissman {
				name = "Harry Sissman";
				face = "Face49";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class ChrisMarie {
				name = "Chris Marie";
				face = "Face51";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.943158;
				description = "";
			};
			class JackChern {
				name = "Jack Chern";
				face = "Face45";
				glasses = "None";
				speaker = "John";
				pitch = 1.081006;
				description = "";
			};
			class GeorgeConnell {
				name = "George Connell";
				face = "Face38";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class RyanCarreira {
				name = "Ryan Carreira";
				face = "Face36";
				glasses = "None";
				speaker = "John";
				pitch = 0.977344;
				description = "";
			};
			class AdamShillingsburg {
				name = "Adam Shillingsburg";
				face = "Face39";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.942108;
				description = "";
			};
			class BillDana {
				name = "Bill Dana";
				face = "Face26";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class PatrickHutchinson {
				name = "Patrick Hutchinson";
				face = "Face20";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.984503;
				description = "";
			};
			class JackHarding {
				name = "Jack Harding";
				face = "Face49";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.941168;
				description = "";
			};
			class LarryNielsen {
				name = "Larry Nielsen";
				face = "Face26";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class DonMcMahan {
				name = "Don McMahan";
				face = "Face34";
				glasses = "Spectacles";
				speaker = "Tom";
				pitch = 1.0034;
				description = "";
			};
			class RobChurch {
				name = "Rob Church";
				face = "Face12";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.933728;
				description = "";
			};
			class MikeFine {
				name = "Mike Fine";
				face = "Face37";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class GeorgeMilstead {
				name = "George Milstead";
				face = "Face26";
				glasses = "Spectacles";
				speaker = "Tom";
				pitch = 1.063916;
				description = "";
			};
			class ChuckWendt {
				name = "Chuck Wendt";
				face = "Face20";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.03894;
				description = "";
			};
			class MarkByrd {
				name = "Mark Byrd";
				face = "Face28";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class RobManning {
				name = "Rob Manning";
				face = "Face46";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.979541;
				description = "";
			};
			class ThomasLove {
				name = "Thomas Love";
				face = "Face20";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.0258;
				description = "";
			};
			class PaulHolder {
				name = "Paul Holder";
				face = "Face43";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class PeterGoff {
				name = "Peter Goff";
				face = "Face31";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.025116;
				description = "";
			};
			class BruceVan {
				name = "Bruce Van";
				face = "Face42";
				glasses = "Spectacles";
				speaker = "Greg";
				pitch = 1.090338;
				description = "";
			};
			class JoeKramer {
				name = "Joe Kramer";
				face = "Face4";
				glasses = "Sunglasses";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JohnKargatis {
				name = "John Kargatis";
				face = "Face10";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.04057;
				description = "";
			};
			class BillGifford {
				name = "Bill Gifford";
				face = "Face37";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.928259;
				description = "";
			};
			class KenGainer {
				name = "Ken Gainer";
				face = "Face34";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class ChrisLoughridge {
				name = "Chris Loughridge";
				face = "Face48";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1.04425;
				description = "";
			};
			class ScottAkin {
				name = "Scott Akin";
				face = "Face2";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.051678;
				description = "";
			};
			class DaveAthanas {
				name = "Dave Athanas";
				face = "Face34";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class DanArbore {
				name = "Dan Arbore";
				face = "Face42";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.969897;
				description = "";
			};
			class BobbyBuhler {
				name = "Bobby Buhler";
				face = "Face30";
				glasses = "None";
				speaker = "John";
				pitch = 0.975214;
				description = "";
			};
			class JohnMcKinley {
				name = "John McKinley";
				face = "Face25";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class JamesByers {
				name = "James Byers";
				face = "Face36";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.067877;
				description = "";
			};
			class ThomasBuhler {
				name = "Thomas Buhler";
				face = "Face11";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.083771;
				description = "";
			};
			class VictorBirdwell {
				name = "Victor Birdwell";
				face = "Face43";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class SteveMcGoldrick {
				name = "Steve McGoldrick";
				face = "Face31";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.98678;
				description = "";
			};
			class AndyWells {
				name = "Andy Wells";
				face = "Face8";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.995837;
				description = "";
			};
			class PaulSullivan {
				name = "Paul Sullivan";
				face = "Face30";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class LarryVick {
				name = "Larry Vick";
				face = "Face9";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.06023;
				description = "";
			};
			class PaulMullins {
				name = "Paul Mullins";
				face = "Face39";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.992468;
				description = "";
			};
			class AdanHirsh {
				name = "Adan Hirsh";
				face = "Face35";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class AdrianGray {
				name = "Adrian Gray";
				face = "Face34";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.95191;
				description = "";
			};
			class JimKimmel {
				name = "Jim Kimmel";
				face = "Face34";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.914502;
				description = "";
			};
			class DaveGainer {
				name = "Dave Gainer";
				face = "Face36";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class FrankKasbekar {
				name = "Frank Kasbekar";
				face = "Face49";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.065497;
				description = "";
			};
			class PatrickHolt {
				name = "Patrick Holt";
				face = "Face4";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.962878;
				description = "";
			};
			class JackMcGuire {
				name = "Jack McGuire";
				face = "Face51";
				glasses = "Sunglasses";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class ThomasDryver {
				name = "Thomas Dryver";
				face = "Face41";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.998315;
				description = "";
			};
			class JohnHellums {
				name = "John Hellums";
				face = "Face52";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.954016;
				description = "";
			};
			class GeorgeArntzen {
				name = "George Arntzen";
				face = "Face26";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JimHocker {
				name = "Jim Hocker";
				face = "Face32";
				glasses = "None";
				speaker = "John";
				pitch = 0.943872;
				description = "";
			};
			class ThomasSwindell {
				name = "Thomas Swindell";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.000482;
				description = "";
				face = "Face2";
			};
			class ChuckTatum {
				name = "Chuck Tatum";
				face = "Face25";
				glasses = "Spectacles";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class RyanMoore {
				name = "Ryan Moore";
				face = "Face31";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.912738;
				description = "";
			};
			class PatrickBrubaker {
				name = "Patrick Brubaker";
				face = "Face35";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.069507;
				description = "";
			};
			class ThomasGeorge {
				name = "Thomas George";
				face = "Face38";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class RichardCarmichael {
				name = "Richard Carmichael";
				face = "Face47";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.019489;
				description = "";
			};
			class GaryHaines {
				name = "Gary Haines";
				face = "Face25";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.931262;
				description = "";
			};
			class SamNolan {
				name = "Sam Nolan";
				face = "Face4";
				glasses = "Sunglasses";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class StevenWagner {
				name = "Steven Wagner";
				face = "Face11";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.05473;
				description = "";
			};
			class DavidManning {
				name = "David Manning";
				face = "Face12";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.095728;
				description = "";
			};
			class BillShidle {
				name = "Bill Shidle";
				face = "Face8";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class RobertSteele {
				name = "Robert Steele";
				face = "Face31";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.928119;
				description = "";
			};
			class PeterBlomkalns {
				name = "Peter Blomkalns";
				face = "Face42";
				glasses = "None";
				speaker = "John";
				pitch = 1.097302;
				description = "";
			};
			class KeithFerrer {
				name = "Keith Ferrer";
				face = "Face51";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class TomGamse {
				name = "Tom Gamse";
				face = "Face48";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.007581;
				description = "";
			};
			class JohnLitvak {
				name = "John Litvak";
				face = "Face28";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.076849;
				description = "";
			};
			class BarryLatchford {
				name = "Barry Latchford";
				face = "Face19";
				glasses = "Sunglasses";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class DerekBerry {
				name = "Derek Berry";
				face = "Face29";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.012793;
				description = "";
			};
			class ClayRogers {
				name = "Clay Rogers";
				face = "Face46";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.960321;
				description = "";
			};
			class ScotChristensen {
				name = "Scot Christensen";
				face = "Face30";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class GarySolon {
				name = "Gary Solon";
				face = "Face36";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.915009;
				description = "";
			};
			class PatrickDenison {
				name = "Patrick Denison";
				face = "Face49";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.049347;
				description = "";
			};
			class AllenCrestani {
				name = "Allen Crestani";
				face = "Face45";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JohnDanenhauer {
				name = "John Danenhauer";
				face = "Face12";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.957867;
				description = "";
			};
			class AndyGaleazzi {
				name = "Andy Galeazzi";
				face = "Face48";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.055243;
				description = "";
			};
			class DuaneBailliet {
				name = "Duane Bailliet";
				face = "Face30";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class BobbyHuffman {
				name = "Bobby Huffman";
				face = "Face49";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.098077;
				description = "";
			};
			class BrettSwint {
				name = "Brett Swint";
				face = "Face41";
				glasses = "None";
				speaker = "John";
				pitch = 0.989105;
				description = "";
			};
			class DaveHendricks {
				name = "Dave Hendricks";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class RickFawcett {
				name = "Rick Fawcett";
				face = "Face49";
				glasses = "Sunglasses";
				speaker = "Patrick";
				pitch = 0.969458;
				description = "";
			};
			class JasonDaugherty {
				name = "Jason Daugherty";
				face = "Face34";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 0.935053;
				description = "";
			};
			class BradleyHerman {
				name = "Bradley Herman";
				face = "Face43";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JackBoucher {
				name = "Jack Boucher";
				face = "Face39";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.026917;
				description = "";
			};
			class DavidYeamans {
				name = "David Yeamans";
				face = "Face41";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.928845;
				description = "";
			};
			class BrendanElias {
				name = "Brendan Elias";
				face = "Face11";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class PatrickCyprus {
				name = "Patrick Cyprus";
				face = "Face20";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.937103;
				description = "";
			};
			class VictorDowd {
				name = "Victor Dowd";
				face = "Face4";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.007275;
				description = "";
			};
			class ThomasDooley {
				name = "Thomas Dooley";
				face = "Face52";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class ArtHansen {
				name = "Art Hansen";
				face = "Face29";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.078259;
				description = "";
			};
			class JayMcElfresh {
				name = "Jay McElfresh";
				face = "Face25";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.964594;
				description = "";
			};
			class BryanRay {
				name = "Bryan Ray";
				face = "Face29";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class KevinPrice {
				name = "Kevin Price";
				face = "Face51";
				glasses = "Sunglasses";
				speaker = "Dan";
				pitch = 0.963654;
				description = "";
			};
			class AdrianRittenbach {
				name = "Adrian Rittenbach";
				face = "Face12";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.063861;
				description = "";
			};
			class BillGranlund {
				name = "Bill Granlund";
				face = "Face25";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class BillWatters {
				name = "Bill Watters";
				face = "Face4";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.971545;
				description = "";
			};
			class RossDakoulas {
				name = "Ross Dakoulas";
				face = "Face44";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.036108;
				description = "";
			};
			class MikeTowns {
				name = "Mike Towns";
				face = "Face39";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JeffFuentes {
				name = "Jeff Fuentes";
				face = "Face43";
				glasses = "None";
				speaker = "John";
				pitch = 0.974097;
				description = "";
			};
			class CraigRuhlin {
				name = "Craig Ruhlin";
				face = "Face38";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.926959;
				description = "";
			};
			class BrettCousins {
				name = "Brett Cousins";
				face = "Face46";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class BrettFergusson {
				name = "Brett Fergusson";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.012463;
				description = "";
			};
			class RicardoMoyer {
				name = "Ricardo Moyer";
				face = "Face42";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.967511;
				description = "";
			};
			class PeterLong {
				name = "Peter Long";
				face = "Face35";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class ScotBook {
				name = "Scot Book";
				face = "Face50";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.938336;
				description = "";
			};
			class JohnMoreno {
				name = "John Moreno";
				face = "Face31";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.950739;
				description = "";
			};
			class NatElliston {
				name = "Nat Elliston";
				face = "Face2";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class DennyHerrera {
				name = "Denny Herrera";
				face = "Face4";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.952069;
				description = "";
			};
			class PhillipBoucher {
				name = "Phillip Boucher";
				face = "Face28";
				glasses = "Spectacles";
				speaker = "Dan";
				pitch = 0.961639;
				description = "";
			};
			class GeneLoughridge {
				name = "Gene Loughridge";
				face = "Face52";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class DanHood {
				name = "Dan Hood";
				face = "Face49";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.940991;
				description = "";
			};
			class DanCopeland {
				name = "Dan Copeland";
				face = "Face2";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.910846;
				description = "";
			};
			class JohnFreymann {
				name = "John Freymann";
				face = "Face36";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class RubenLanier {
				name = "Ruben Lanier";
				face = "Face49";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.993921;
				description = "";
			};
			class AdamLopez {
				name = "Adam Lopez";
				face = "Face30";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.013232;
				description = "";
			};
			class DougTaslimi {
				name = "Doug Taslimi";
				face = "Face51";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class BrendanBrockmoller {
				name = "Brendan Brockmoller";
				face = "Face4";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.015521;
				description = "";
			};
			class ToddTanner {
				name = "Todd Tanner";
				face = "Face51";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.90127;
				description = "";
			};
			class StevenBoucher {
				name = "Steven Boucher";
				face = "Face52";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class RyanHeidel {
				name = "Ryan Heidel";
				face = "Face32";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.085132;
				description = "";
			};
			class ToddPickett {
				name = "Todd Pickett";
				face = "Face46";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.928949;
				description = "";
			};
			class JackHammer {
				name = "Jack Hammer";
				face = "Face9";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class JimEtezadi {
				name = "Jim Etezadi";
				face = "Face41";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.988116;
				description = "";
			};
			class ChuckSpruell {
				name = "Chuck Spruell";
				face = "Face34";
				glasses = "None";
				speaker = "John";
				pitch = 0.961774;
				description = "";
			};
			class BenjaminShami {
				name = "Benjamin Shami";
				face = "Face10";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class AdrianYeamans {
				name = "Adrian Yeamans";
				face = "Face20";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.950262;
				description = "";
			};
			class JeremyMoore {
				name = "Jeremy Moore";
				face = "Face34";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.028986;
				description = "";
			};
			class JeremySteinhour {
				name = "Jeremy Steinhour";
				face = "Face45";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class AdrianMallinson {
				name = "Adrian Mallinson";
				face = "Face42";
				glasses = "Sunglasses";
				speaker = "Tom";
				pitch = 1.068347;
				description = "";
			};
			class DennisReed {
				name = "Dennis Reed";
				face = "Face51";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.06048;
				description = "";
			};
			class SeanJuette {
				name = "Sean Juette";
				face = "Face42";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class BobbyAdler {
				name = "Bobby Adler";
				face = "Face35";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.908899;
				description = "";
			};
			class BillCampbell {
				name = "Bill Campbell";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.933221;
				description = "";
				face = "Face12";
			};
			class BrettVaranasi {
				name = "Brett Varanasi";
				face = "Face30";
				glasses = "Spectacles";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class FredDeaton {
				name = "Fred Deaton";
				face = "Face28";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.016138;
				description = "";
			};
			class JeffBirdwell {
				name = "Jeff Birdwell";
				face = "Face30";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.019757;
				description = "";
			};
			class AnthonyKamberova {
				name = "Anthony Kamberova";
				face = "Face52";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class VictorNoonan {
				name = "Victor Noonan";
				face = "Face39";
				glasses = "None";
				speaker = "John";
				pitch = 1.062036;
				description = "";
			};
			class MarcLanier {
				name = "Marc Lanier";
				face = "Face28";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.088147;
				description = "";
			};
			class BrianBeeghly {
				name = "Brian Beeghly";
				face = "Face37";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class EugeneLloyd {
				name = "Eugene Lloyd";
				face = "Face42";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.945709;
				description = "";
			};
			class JohnMcGuire {
				name = "John McGuire";
				face = "Face32";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.92771;
				description = "";
			};
			class VictorKoutras {
				name = "Victor Koutras";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class TomJaranson {
				name = "Tom Jaranson";
				face = "Face4";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.925818;
				description = "";
			};
			class WalterDeMoss {
				name = "Walter DeMoss";
				face = "Face10";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.016425;
				description = "";
			};
			class MikeMonk {
				name = "Mike Monk";
				face = "Face36";
				glasses = "Sunglasses";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class RickMurphey {
				name = "Rick Murphey";
				face = "Face49";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.091797;
				description = "";
			};
			class PeterLassiter {
				name = "Peter Lassiter";
				face = "Face20";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.011334;
				description = "";
			};
			class MikeKimmel {
				name = "Mike Kimmel";
				face = "Face20";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class RodKimmel {
				name = "Rod Kimmel";
				face = "Face38";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.948035;
				description = "";
			};
			class JonathanCallahan {
				name = "Jonathan Callahan";
				face = "Face28";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.983582;
				description = "";
			};
			class JasonCrouse {
				name = "Jason Crouse";
				face = "Face2";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class BillLangston {
				name = "Bill Langston";
				face = "Face37";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.063055;
				description = "";
			};
			class BobbyPounds {
				name = "Bobby Pounds";
				face = "Face12";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.065509;
				description = "";
			};
			class BillBlair {
				name = "Bill Blair";
				face = "Face4";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class BobbyCarreira {
				name = "Bobby Carreira";
				face = "Face31";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.083575;
				description = "";
			};
			class JeffFaye {
				name = "Jeff Faye";
				face = "Face4";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.001959;
				description = "";
			};
			class WalterFredericks {
				name = "Walter Fredericks";
				face = "Face46";
				glasses = "Spectacles";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class DanWilburn {
				name = "Dan Wilburn";
				face = "Face37";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.900482;
				description = "";
			};
			class GeorgeBreyer {
				name = "George Breyer";
				face = "Face42";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.912634;
				description = "";
			};
			class AdamDryver {
				name = "Adam Dryver";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JackBoyles {
				name = "Jack Boyles";
				face = "Face38";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.078052;
				description = "";
			};
			class MikeDuckworth {
				name = "Mike Duckworth";
				face = "Face26";
				glasses = "None";
				speaker = "John";
				pitch = 0.990485;
				description = "";
			};
			class FrankSunshine {
				name = "Frank Sunshine";
				face = "Face31";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JackSachs {
				name = "Jack Sachs";
				face = "Face25";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.926013;
				description = "";
			};
			class JonathanThurman {
				name = "Jonathan Thurman";
				face = "Face8";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.048999;
				description = "";
			};
			class BarryMarshall {
				name = "Barry Marshall";
				face = "Face41";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class BobbyHaushalter {
				name = "Bobby Haushalter";
				face = "Face19";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.011261;
				description = "";
			};
			class RichardGerbode {
				name = "Richard Gerbode";
				face = "Face35";
				glasses = "Spectacles";
				speaker = "Peter";
				pitch = 0.940454;
				description = "";
			};
			class AdrianRuhlin {
				name = "Adrian Ruhlin";
				face = "Face51";
				glasses = "Sunglasses";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class MarkBlume {
				name = "Mark Blume";
				face = "Face25";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.928345;
				description = "";
			};
			class CraigStone {
				name = "Craig Stone";
				face = "Face28";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.978876;
				description = "";
			};
			class RyanGrinstein {
				name = "Ryan Grinstein";
				face = "Face28";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class RaymondHendricks {
				name = "Raymond Hendricks";
				face = "Face20";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.931122;
				description = "";
			};
			class MichaelSwales {
				name = "Michael Swales";
				face = "Face30";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.025244;
				description = "";
			};
			class JackEplett {
				name = "Jack Eplett";
				face = "Face31";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class StuartGreenwood {
				name = "Stuart Greenwood";
				face = "Face12";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.018732;
				description = "";
			};
			class AdrianKendrick {
				name = "Adrian Kendrick";
				face = "Face30";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.901135;
				description = "";
			};
			class JohnSunshine {
				name = "John Sunshine";
				face = "Face29";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class BillCartwright {
				name = "Bill Cartwright";
				face = "Face26";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.010779;
				description = "";
			};
			class BarryCrain {
				name = "Barry Crain";
				face = "Face39";
				glasses = "Spectacles";
				speaker = "Greg";
				pitch = 1.016699;
				description = "";
			};
			class PeterTyree {
				name = "Peter Tyree";
				face = "Face46";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class JackBowman {
				name = "Jack Bowman";
				face = "Face8";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.076239;
				description = "";
			};
			class JeffElijah {
				name = "Jeff Elijah";
				face = "Face36";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.066022;
				description = "";
			};
			class AlanWendt {
				name = "Alan Wendt";
				face = "Face32";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class MatthewKielt {
				name = "Matthew Kielt";
				face = "Face41";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.946979;
				description = "";
			};
			class PatrickGaleazzi {
				name = "Patrick Galeazzi";
				face = "Face48";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.004871;
				description = "";
			};
			class RichardMackey {
				name = "Richard Mackey";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1;
				description = "";
				face = "Face47";
			};
			class AlexKargatis {
				name = "Alex Kargatis";
				face = "Face34";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.969543;
				description = "";
			};
			class RandyAtkinson {
				name = "Randy Atkinson";
				face = "Face9";
				glasses = "Spectacles";
				speaker = "Greg";
				pitch = 0.907953;
				description = "";
			};
			class RossSouthworth {
				name = "Ross Southworth";
				face = "Face42";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class TomPorter {
				name = "Tom Porter";
				face = "Face47";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.996289;
				description = "";
			};
			class BobbyBall {
				name = "Bobby Ball";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.066693;
				description = "";
			};
			class PatrickMcKinley {
				name = "Patrick McKinley";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
				face = "Face12";
			};
			class DanCabrera {
				name = "Dan Cabrera";
				face = "Face32";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.908972;
				description = "";
			};
			class HarryHartz {
				name = "Harry Hartz";
				face = "Face9";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.027582;
				description = "";
			};
			class TedBass {
				name = "Ted Bass";
				face = "Face11";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class RaymondMonk {
				name = "Raymond Monk";
				face = "Face28";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.986377;
				description = "";
			};
			class PeterBates {
				name = "Peter Bates";
				face = "Face38";
				glasses = "None";
				speaker = "John";
				pitch = 0.927112;
				description = "";
			};
			class DanPoklepovic {
				name = "Dan Poklepovic";
				face = "Face2";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class DennisZeldin {
				name = "Dennis Zeldin";
				face = "Face12";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.084436;
				description = "";
			};
			class GeorgeCowsar {
				name = "George Cowsar";
				face = "Face39";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.914056;
				description = "";
			};
			class ArtMull {
				name = "Art Mull";
				face = "Face43";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class WadeTate {
				name = "Wade Tate";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.044244;
				description = "";
				face = "Face43";
			};
			class RyanMcKinley {
				name = "Ryan McKinley";
				face = "Face28";
				glasses = "Sunglasses";
				speaker = "Rob";
				pitch = 1.08432;
				description = "";
			};
			class CoreySammartino {
				name = "Corey Sammartino";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class EricSeay {
				name = "Eric Seay";
				face = "Face9";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.93009;
				description = "";
			};
			class AndyGreenslade {
				name = "Andy Greenslade";
				face = "Face28";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.952093;
				description = "";
			};
			class DarrenKapetanovic {
				name = "Darren Kapetanovic";
				face = "Face29";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class AaronScheer {
				name = "Aaron Scheer";
				face = "Face49";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.074652;
				description = "";
			};
			class EvanKlein {
				name = "Evan Klein";
				face = "Face39";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.967926;
				description = "";
			};
			class BrianFargason {
				name = "Brian Fargason";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class RicardoWardle {
				name = "Ricardo Wardle";
				face = "Face11";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.097827;
				description = "";
			};
			class DennisMunn {
				name = "Dennis Munn";
				face = "Face8";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.017639;
				description = "";
			};
			class DennyCorbett {
				name = "Denny Corbett";
				face = "Face4";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class RodTerk {
				name = "Rod Terk";
				face = "Face4";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.05741;
				description = "";
			};
			class DarrenEmerson {
				name = "Darren Emerson";
				face = "Face42";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.089667;
				description = "";
			};
			class HarryCarr {
				name = "Harry Carr";
				face = "Face25";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class ClayOverley {
				name = "Clay Overley";
				face = "Face32";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.937494;
				description = "";
			};
			class PatrickAveritt {
				name = "Patrick Averitt";
				face = "Face12";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.992963;
				description = "";
			};
			class JeffTrevino {
				name = "Jeff Trevino";
				face = "Face29";
				glasses = "Sunglasses";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class HarryElders {
				name = "Harry Elders";
				face = "Face41";
				glasses = "Sunglasses";
				speaker = "Greg";
				pitch = 1.087274;
				description = "";
			};
			class LoganMcCrary {
				name = "Logan McCrary";
				face = "Face30";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.953516;
				description = "";
			};
			class AdamKopnicky {
				name = "Adam Kopnicky";
				face = "Face48";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class MatthewBriggs {
				name = "Matthew Briggs";
				face = "Face44";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.03728;
				description = "";
			};
			class GregEstades {
				name = "Greg Estades";
				face = "Face39";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.075189;
				description = "";
			};
			class JoelPounds {
				name = "Joel Pounds";
				face = "Face36";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class DavidStobb {
				name = "David Stobb";
				face = "Face35";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.06441;
				description = "";
			};
			class ChuckMueller {
				name = "Chuck Mueller";
				face = "Face44";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.953967;
				description = "";
			};
			class HarryFederle {
				name = "Harry Federle";
				face = "Face9";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class AlanSolomon {
				name = "Alan Solomon";
				face = "Face39";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.008234;
				description = "";
			};
			class ToddBarnes {
				name = "Todd Barnes";
				face = "Face48";
				glasses = "Spectacles";
				speaker = "Jonah";
				pitch = 1.093121;
				description = "";
			};
			class FredKunitz {
				name = "Fred Kunitz";
				face = "Face49";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JohnHaines {
				name = "John Haines";
				face = "Face39";
				glasses = "Spectacles";
				speaker = "Adam";
				pitch = 0.968176;
				description = "";
			};
			class ScottKirkpatrick {
				name = "Scott Kirkpatrick";
				face = "Face31";
				glasses = "None";
				speaker = "John";
				pitch = 1.045538;
				description = "";
			};
			class DavidJacobs {
				name = "David Jacobs";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class BillAskew {
				name = "Bill Askew";
				face = "Face4";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.964478;
				description = "";
			};
			class TimMcDonald {
				name = "Tim McDonald";
				face = "Face2";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1.038751;
				description = "";
			};
			class PhillipDeigaard {
				name = "Phillip Deigaard";
				face = "Face34";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class BarryGayman {
				name = "Barry Gayman";
				face = "Face49";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.019855;
				description = "";
			};
			class TimHawley {
				name = "Tim Hawley";
				face = "Face29";
				glasses = "None";
				speaker = "John";
				pitch = 1.098547;
				description = "";
			};
			class BradleyLock {
				name = "Bradley Lock";
				face = "Face37";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class DougFrantom {
				name = "Doug Frantom";
				face = "Face44";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.990485;
				description = "";
			};
			class EvanFargason {
				name = "Evan Fargason";
				face = "Face4";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.063019;
				description = "";
			};
			class BryanGillingham {
				name = "Bryan Gillingham";
				face = "Face26";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class ToddHenry {
				name = "Todd Henry";
				face = "Face29";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.934052;
				description = "";
			};
			class HarryDeMoss {
				name = "Harry DeMoss";
				face = "Face42";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.983234;
				description = "";
			};
			class RobEstades {
				name = "Rob Estades";
				face = "Face29";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class RussellCatlett {
				name = "Russell Catlett";
				face = "Face31";
				glasses = "Spectacles";
				speaker = "Peter";
				pitch = 0.983954;
				description = "";
			};
			class BruceTate {
				name = "Bruce Tate";
				face = "Face2";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.049854;
				description = "";
			};
			class JeffBerger {
				name = "Jeff Berger";
				face = "Face42";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class RobertHuston {
				name = "Robert Huston";
				face = "Face4";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.989795;
				description = "";
			};
			class TroyMurry {
				name = "Troy Murry";
				face = "Face26";
				glasses = "Spectacles";
				speaker = "Patrick";
				pitch = 1.011169;
				description = "";
			};
			class TomGillespie {
				name = "Tom Gillespie";
				face = "Face38";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class DuaneBergman {
				name = "Duane Bergman";
				face = "Face4";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.04953;
				description = "";
			};
			class DavidTyler {
				name = "David Tyler";
				face = "Face37";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.069885;
				description = "";
			};
			class ShaunSutton {
				name = "Shaun Sutton";
				face = "Face38";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JosephDelaney {
				name = "Joseph Delaney";
				face = "Face10";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.03775;
				description = "";
			};
			class DavidCraven {
				name = "David Craven";
				face = "Face12";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.030804;
				description = "";
			};
			class DennisDorsey {
				name = "Dennis Dorsey";
				face = "Face39";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class HunterChance {
				name = "Hunter Chance";
				face = "Face52";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.084546;
				description = "";
			};
			class EugeneSonneborn {
				name = "Eugene Sonneborn";
				face = "Face38";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.978363;
				description = "";
			};
			class BarrySachitano {
				name = "Barry Sachitano";
				face = "Face31";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class BillKipp {
				name = "Bill Kipp";
				face = "Face36";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.081793;
				description = "";
			};
			class ScottBerry {
				name = "Scott Berry";
				face = "Face42";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.00592;
				description = "";
			};
			class MikeSchaefer {
				name = "Mike Schaefer";
				face = "Face25";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class JeremyLudtke {
				name = "Jeremy Ludtke";
				face = "Face49";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.90116;
				description = "";
			};
			class IvanPoklepovic {
				name = "Ivan Poklepovic";
				face = "Face36";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.035962;
				description = "";
			};
			class AlejandroListon {
				name = "Alejandro Liston";
				face = "Face46";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class DuaneFreymann {
				name = "Duane Freymann";
				face = "Face9";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.909821;
				description = "";
			};
			class ToddReitmeier {
				name = "Todd Reitmeier";
				face = "Face25";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.923419;
				description = "";
			};
			class EricDavis {
				name = "Eric Davis";
				face = "Face11";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class SeanPippenger {
				name = "Sean Pippenger";
				face = "Face31";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.919916;
				description = "";
			};
			class DaveTruchard {
				name = "Dave Truchard";
				face = "Face41";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.084979;
				description = "";
			};
			class AlanHalladay {
				name = "Alan Halladay";
				face = "Face51";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class HarryVanderzanden {
				name = "Harry Vanderzanden";
				face = "Face31";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.911475;
				description = "";
			};
			class BillBuck {
				name = "Bill Buck";
				face = "Face48";
				glasses = "Sunglasses";
				speaker = "Rob";
				pitch = 0.989062;
				description = "";
			};
			class FredAskew {
				name = "Fred Askew";
				face = "Face35";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class DougKicinski {
				name = "Doug Kicinski";
				face = "Face31";
				glasses = "None";
				speaker = "John";
				pitch = 0.919073;
				description = "";
			};
			class JamesLacy {
				name = "James Lacy";
				face = "Face4";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.000208;
				description = "";
			};
			class BrettRowatt {
				name = "Brett Rowatt";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class BenMaxwell {
				name = "Ben Maxwell";
				face = "Face42";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.081116;
				description = "";
			};
			class NathanReeves {
				name = "Nathan Reeves";
				face = "Face11";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.072461;
				description = "";
			};
			class AlejandroGlaze {
				name = "Alejandro Glaze";
				face = "Face9";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class SteveStewart {
				name = "Steve Stewart";
				face = "Face10";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 0.983478;
				description = "";
			};
			class JeffWhitaker {
				name = "Jeff Whitaker";
				face = "Face49";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.955328;
				description = "";
			};
			class DaveStaebel {
				name = "Dave Staebel";
				face = "Face8";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class PerryBrumley {
				name = "Perry Brumley";
				face = "Face19";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.02428;
				description = "";
			};
			class DuaneArbore {
				name = "Duane Arbore";
				face = "Face43";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.985205;
				description = "";
			};
			class JeremyHolloman {
				name = "Jeremy Holloman";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
				face = "Face49";
			};
			class IvanDanenhauer {
				name = "Ivan Danenhauer";
				face = "Face28";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.925781;
				description = "";
			};
			class EvanRawles {
				name = "Evan Rawles";
				face = "Face29";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.910883;
				description = "";
			};
			class PatrickNorris {
				name = "Patrick Norris";
				face = "Face11";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class PeterLee {
				name = "Peter Lee";
				face = "Face52";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.912384;
				description = "";
			};
			class MarcMunn {
				name = "Marc Munn";
				face = "Face32";
				glasses = "Spectacles";
				speaker = "Adam";
				pitch = 1.067822;
				description = "";
			};
			class ScottGreenslade {
				name = "Scott Greenslade";
				face = "Face43";
				glasses = "Sunglasses";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class TimCarter {
				name = "Tim Carter";
				face = "Face25";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.9065;
				description = "";
			};
			class BrendanCarmichael {
				name = "Brendan Carmichael";
				face = "Face32";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.970752;
				description = "";
			};
			class DennisMcClure {
				name = "Dennis McClure";
				face = "Face4";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class DavePickett {
				name = "Dave Pickett";
				face = "Face37";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.005719;
				description = "";
			};
			class GeorgeKelly {
				name = "George Kelly";
				face = "Face44";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.021991;
				description = "";
			};
			class DennisHawkins {
				name = "Dennis Hawkins";
				face = "Face26";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class AaronHolstein {
				name = "Aaron Holstein";
				face = "Face12";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.02503;
				description = "";
			};
			class DennyVarman {
				name = "Denny Varman";
				face = "Face35";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.980194;
				description = "";
			};
			class JoeStuckey {
				name = "Joe Stuckey";
				face = "Face26";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class TobyRodriguez {
				name = "Toby Rodriguez";
				face = "Face10";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.900494;
				description = "";
			};
			class ChadFuller {
				name = "Chad Fuller";
				face = "Face20";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.011224;
				description = "";
			};
			class TimSolon {
				name = "Tim Solon";
				face = "Face38";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class JackPhilippe {
				name = "Jack Philippe";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.011902;
				description = "";
			};
			class ClayCusey {
				name = "Clay Cusey";
				face = "Face25";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.924805;
				description = "";
			};
			class SamPlatzek {
				name = "Sam Platzek";
				face = "Face49";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class DanBardsley {
				name = "Dan Bardsley";
				face = "Face42";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.984955;
				description = "";
			};
			class JosephPenisson {
				name = "Joseph Penisson";
				face = "Face48";
				glasses = "Sunglasses";
				speaker = "Jonah";
				pitch = 1.072076;
				description = "";
			};
			class MatthewWagner {
				name = "Matthew Wagner";
				face = "Face28";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class BillMinard {
				name = "Bill Minard";
				face = "Face52";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.98175;
				description = "";
			};
			class AndyGuyton {
				name = "Andy Guyton";
				face = "Face29";
				glasses = "Sunglasses";
				speaker = "Ted";
				pitch = 0.974463;
				description = "";
			};
			class JayHenry {
				name = "Jay Henry";
				face = "Face10";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class HarryBrown {
				name = "Harry Brown";
				face = "Face49";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.960584;
				description = "";
			};
			class LarryMunn {
				name = "Larry Munn";
				face = "Face42";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.902649;
				description = "";
			};
			class FredKamberova {
				name = "Fred Kamberova";
				face = "Face32";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class HarryBaggerly {
				name = "Harry Baggerly";
				face = "Face9";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.939423;
				description = "";
			};
			class WayneTolle {
				name = "Wayne Tolle";
				face = "Face42";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.956897;
				description = "";
			};
			class JackSachitano {
				name = "Jack Sachitano";
				face = "Face38";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class RossArenson {
				name = "Ross Arenson";
				face = "Face39";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.950714;
				description = "";
			};
			class CraigDeHart {
				name = "Craig DeHart";
				face = "Face20";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.976257;
				description = "";
			};
			class BenChabot {
				name = "Ben Chabot";
				face = "Face4";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class DanWise {
				name = "Dan Wise";
				face = "Face34";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.012689;
				description = "";
			};
			class TedHindman {
				name = "Ted Hindman";
				face = "Face32";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.006195;
				description = "";
			};
			class PatrickMontgomery {
				name = "Patrick Montgomery";
				face = "Face29";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class BrianKirkland {
				name = "Brian Kirkland";
				face = "Face4";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.940912;
				description = "";
			};
			class ClayHalladay {
				name = "Clay Halladay";
				face = "Face19";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.998846;
				description = "";
			};
			class AlejandroStratmann {
				name = "Alejandro Stratmann";
				face = "Face49";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class EricCrain {
				name = "Eric Crain";
				face = "Face25";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.974127;
				description = "";
			};
			class JeremyBarnes {
				name = "Jeremy Barnes";
				face = "Face9";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.99422;
				description = "";
			};
			class HenryCoram {
				name = "Henry Coram";
				face = "Face32";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class StephenCort {
				name = "Stephen Cort";
				face = "Face8";
				glasses = "Sunglasses";
				speaker = "Jonah";
				pitch = 1.062091;
				description = "";
			};
			class DavidPolk {
				name = "David Polk";
				face = "Face26";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.083716;
				description = "";
			};
			class DennisPond {
				name = "Dennis Pond";
				face = "Face46";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class RichardReynolds {
				name = "Richard Reynolds";
				face = "Face8";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.042053;
				description = "";
			};
			class JosephGreenslade {
				name = "Joseph Greenslade";
				face = "Face44";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.004364;
				description = "";
			};
			class ShaunTaylor {
				name = "Shaun Taylor";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JeffGjertsen {
				name = "Jeff Gjertsen";
				face = "Face45";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.085254;
				description = "";
			};
			class MikeWright {
				name = "Mike Wright";
				face = "Face48";
				glasses = "None";
				speaker = "John";
				pitch = 1.063458;
				description = "";
			};
			class ClayLatchford {
				name = "Clay Latchford";
				face = "Face39";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class AdrianKatz {
				name = "Adrian Katz";
				face = "Face28";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.046045;
				description = "";
			};
			class MarkMinkoff {
				name = "Mark Minkoff";
				face = "Face37";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.976202;
				description = "";
			};
			class NathanLangston {
				name = "Nathan Langston";
				face = "Face32";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class JayElms {
				name = "Jay Elms";
				face = "Face28";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.949152;
				description = "";
			};
			class RichardRoper {
				name = "Richard Roper";
				face = "Face19";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.934949;
				description = "";
			};
			class DougEtezadi {
				name = "Doug Etezadi";
				face = "Face10";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class BrettSchafer {
				name = "Brett Schafer";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.956738;
				description = "";
				face = "Face42";
			};
			class AllenBird {
				name = "Allen Bird";
				face = "Face20";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.06192;
				description = "";
			};
			class GordonMcGarr {
				name = "Gordon McGarr";
				face = "Face38";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class JackConway {
				name = "Jack Conway";
				face = "Face43";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.915588;
				description = "";
			};
			class PeterPorter {
				name = "Peter Porter";
				face = "Face31";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.046136;
				description = "";
			};
			class JimOvercash {
				name = "Jim Overcash";
				face = "Face25";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JeffArenson {
				name = "Jeff Arenson";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.977515;
				description = "";
				face = "Face50";
			};
			class AlejandroDaly {
				name = "Alejandro Daly";
				face = "Face47";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.021277;
				description = "";
			};
			class TomThurman {
				name = "Tom Thurman";
				face = "Face49";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class BarryPounds {
				name = "Barry Pounds";
				face = "Face35";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.084735;
				description = "";
			};
			class AlexElias {
				name = "Alex Elias";
				face = "Face51";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.944977;
				description = "";
			};
			class RodCurrie {
				name = "Rod Currie";
				face = "Face28";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class TobyFoulston {
				name = "Toby Foulston";
				face = "Face32";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.055365;
				description = "";
			};
			class HarrySouthworth {
				name = "Harry Southworth";
				face = "Face10";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.080927;
				description = "";
			};
			class GeorgeCrouse {
				name = "George Crouse";
				face = "Face11";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class JoelByon {
				name = "Joel Byon";
				face = "Face2";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.058838;
				description = "";
			};
			class JamieSwaim {
				name = "Jamie Swaim";
				face = "Face39";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.939606;
				description = "";
			};
			class AdamSonneborn {
				name = "Adam Sonneborn";
				face = "Face19";
				glasses = "Spectacles";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class RicardoLeBlanc {
				name = "Ricardo LeBlanc";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.045837;
				description = "";
				face = "Face31";
			};
			class JeffreyAlexander {
				name = "Jeffrey Alexander";
				face = "Face32";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.995343;
				description = "";
			};
			class ChrisGlaze {
				name = "Chris Glaze";
				face = "Face30";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class MikeHenson {
				name = "Mike Henson";
				face = "Face51";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 0.997424;
				description = "";
			};
			class WalterHaggard {
				name = "Walter Haggard";
				face = "Face28";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.037433;
				description = "";
			};
			class TimOlson {
				name = "Tim Olson";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class WayneManthos {
				name = "Wayne Manthos";
				face = "Face34";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.042261;
				description = "";
			};
			class MattChapman {
				name = "Matt Chapman";
				face = "Face43";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.915289;
				description = "";
			};
			class FrankBates {
				name = "Frank Bates";
				face = "Face42";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class AndrewWhite {
				name = "Andrew White";
				face = "Face20";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.096118;
				description = "";
			};
			class BobbyWebber {
				name = "Bobby Webber";
				face = "Face38";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.984747;
				description = "";
			};
			class DerekKlamczynski {
				name = "Derek Klamczynski";
				face = "Face29";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class AlejandroWalton {
				name = "Alejandro Walton";
				face = "Face47";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.944598;
				description = "";
			};
			class WaynePercer {
				name = "Wayne Percer";
				face = "Face50";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.958166;
				description = "";
			};
			class ClayBass {
				name = "Clay Bass";
				face = "Face2";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class StevenLatchford {
				name = "Steven Latchford";
				face = "Face37";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.947089;
				description = "";
			};
			class GregDyson {
				name = "Greg Dyson";
				face = "Face10";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.082404;
				description = "";
			};
			class AnthonyWinger {
				name = "Anthony Winger";
				face = "Face4";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class DarrenApplegate {
				name = "Darren Applegate";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.935944;
				description = "";
				face = "Face45";
			};
			class CarlosLaValle {
				name = "Carlos LaValle";
				face = "Face50";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.041779;
				description = "";
			};
			class RaymondGriffin {
				name = "Raymond Griffin";
				face = "Face39";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class DavidSyzdek {
				name = "David Syzdek";
				face = "Face44";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.909222;
				description = "";
			};
			class JosephFederle {
				name = "Joseph Federle";
				face = "Face34";
				glasses = "Spectacles";
				speaker = "Greg";
				pitch = 0.910876;
				description = "";
			};
			class RaymondKoutras {
				name = "Raymond Koutras";
				face = "Face25";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class ShaunRittenbach {
				name = "Shaun Rittenbach";
				face = "Face47";
				glasses = "Spectacles";
				speaker = "Adam";
				pitch = 1.031201;
				description = "";
			};
			class PeterHarper {
				name = "Peter Harper";
				face = "Face46";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.972107;
				description = "";
			};
			class PeterElias {
				name = "Peter Elias";
				face = "Face26";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class CoreyTruchard {
				name = "Corey Truchard";
				face = "Face11";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.974628;
				description = "";
			};
			class GordonHeidel {
				name = "Gordon Heidel";
				glasses = "None";
				speaker = "John";
				pitch = 0.933105;
				description = "";
				face = "Face48";
			};
			class JustinClasen {
				name = "Justin Clasen";
				face = "Face48";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class JimGarverick {
				name = "Jim Garverick";
				face = "Face20";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.92525;
				description = "";
			};
			class BarryBrubaker {
				name = "Barry Brubaker";
				face = "Face42";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.900281;
				description = "";
			};
			class JohnHouston {
				name = "John Houston";
				glasses = "Spectacles";
				speaker = "Greg";
				pitch = 1;
				description = "";
				face = "Face30";
			};
			class TimCheville {
				name = "Tim Cheville";
				face = "Face36";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.042236;
				description = "";
			};
			class RaymondPercer {
				name = "Raymond Percer";
				face = "Face31";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.99986;
				description = "";
			};
			class DanBickford {
				name = "Dan Bickford";
				face = "Face35";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class HarryNugent {
				name = "Harry Nugent";
				face = "Face38";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.91142;
				description = "";
			};
			class KevinDowling {
				name = "Kevin Dowling";
				face = "Face44";
				glasses = "None";
				speaker = "John";
				pitch = 1.061359;
				description = "";
			};
			class HarryKoutras {
				name = "Harry Koutras";
				face = "Face32";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class JustinHuston {
				name = "Justin Huston";
				face = "Face38";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.999963;
				description = "";
			};
			class DanHenson {
				name = "Dan Henson";
				face = "Face49";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.911383;
				description = "";
			};
			class PatrickCarmichael {
				name = "Patrick Carmichael";
				face = "Face9";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class KevinHurley {
				name = "Kevin Hurley";
				face = "Face42";
				glasses = "Spectacles";
				speaker = "Greg";
				pitch = 0.956091;
				description = "";
			};
			class HenrySteele {
				name = "Henry Steele";
				face = "Face32";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.057575;
				description = "";
			};
			class JohnHaygood {
				name = "John Haygood";
				face = "Face30";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class KeithShifley {
				name = "Keith Shifley";
				face = "Face29";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.916693;
				description = "";
			};
			class NathanWyatt {
				name = "Nathan Wyatt";
				face = "Face51";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.953265;
				description = "";
			};
			class GeneCox {
				name = "Gene Cox";
				face = "Face37";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class DonNockton {
				name = "Don Nockton";
				face = "Face52";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.942468;
				description = "";
			};
			class DavidRyan {
				name = "David Ryan";
				face = "Face11";
				glasses = "Sunglasses";
				speaker = "Adam";
				pitch = 0.971112;
				description = "";
			};
			class BillStewart {
				name = "Bill Stewart";
				face = "Face2";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JeremyWilliams {
				name = "Jeremy Williams";
				face = "Face35";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.93609;
				description = "";
			};
			class PerryBeusse {
				name = "Perry Beusse";
				face = "Face19";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.992389;
				description = "";
			};
			class TroyLawera {
				name = "Troy Lawera";
				face = "Face51";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class BillCaffey {
				name = "Bill Caffey";
				face = "Face49";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.026843;
				description = "";
			};
			class JackSteinke {
				name = "Jack Steinke";
				face = "Face31";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.944458;
				description = "";
			};
			class JohnLove {
				name = "John Love";
				face = "Face45";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class DerekCowsar {
				name = "Derek Cowsar";
				face = "Face31";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.934027;
				description = "";
			};
			class RobertWilburn {
				name = "Robert Wilburn";
				face = "Face39";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.065662;
				description = "";
			};
			class DerekPatton {
				name = "Derek Patton";
				face = "Face25";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JeffMinnotte {
				name = "Jeff Minnotte";
				face = "Face47";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.988544;
				description = "";
			};
			class NatLangston {
				name = "Nat Langston";
				face = "Face35";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.088251;
				description = "";
			};
			class JoeBrockman {
				name = "Joe Brockman";
				face = "Face10";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class MatthewMcCarthy {
				name = "Matthew McCarthy";
				face = "Face34";
				glasses = "Sunglasses";
				speaker = "Peter";
				pitch = 1.05625;
				description = "";
			};
			class TomSutton {
				name = "Tom Sutton";
				face = "Face34";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.986609;
				description = "";
			};
			class RubenDerr {
				name = "Ruben Derr";
				face = "Face32";
				glasses = "Spectacles";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class GordonMillard {
				name = "Gordon Millard";
				face = "Face26";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.980902;
				description = "";
			};
			class BradleyKastensmidt {
				name = "Bradley Kastensmidt";
				face = "Face2";
				glasses = "Spectacles";
				speaker = "Patrick";
				pitch = 0.983698;
				description = "";
			};
			class TomHerrera {
				name = "Tom Herrera";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
				face = "Face19";
			};
			class WayneBanks {
				name = "Wayne Banks";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.983978;
				description = "";
				face = "Face31";
			};
			class LoganLarsen {
				name = "Logan Larsen";
				face = "Face30";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.999304;
				description = "";
			};
			class JohnFrey {
				name = "John Frey";
				face = "Face31";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class RobertLeslie {
				name = "Robert Leslie";
				face = "Face2";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.099939;
				description = "";
			};
			class CraigMcFarland {
				name = "Craig McFarland";
				face = "Face35";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.056567;
				description = "";
			};
			class RogerCaffrey {
				name = "Roger Caffrey";
				face = "Face30";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class TroyBarnwell {
				name = "Troy Barnwell";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.018976;
				description = "";
			};
			class RubenFossati {
				name = "Ruben Fossati";
				face = "Face8";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.971484;
				description = "";
			};
			class JackHouse {
				name = "Jack House";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class GeorgeCummings {
				name = "George Cummings";
				face = "Face42";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.019598;
				description = "";
			};
			class HunterYeamans {
				name = "Hunter Yeamans";
				face = "Face32";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.015857;
				description = "";
			};
			class WayneKastensmidt {
				name = "Wayne Kastensmidt";
				face = "Face38";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class JosephCatlett {
				name = "Joseph Catlett";
				face = "Face25";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.073151;
				description = "";
			};
			class JohnConway {
				name = "John Conway";
				face = "Face10";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.967718;
				description = "";
			};
			class MikeFisher {
				name = "Mike Fisher";
				face = "Face36";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class MarcBrady {
				name = "Marc Brady";
				face = "Face45";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.003894;
				description = "";
			};
			class EdwardYen {
				name = "Edward Yen";
				face = "Face42";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 0.910712;
				description = "";
			};
			class RobDanenhauer {
				name = "Rob Danenhauer";
				face = "Face41";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class BobbyHudgings {
				name = "Bobby Hudgings";
				face = "Face36";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.921008;
				description = "";
			};
			class DonSouthworth {
				name = "Don Southworth";
				face = "Face47";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.967657;
				description = "";
			};
			class BradSachs {
				name = "Brad Sachs";
				face = "Face50";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class JohnGeorge {
				name = "John George";
				face = "Face38";
				glasses = "None";
				speaker = "John";
				pitch = 0.954687;
				description = "";
			};
			class EricFaye {
				name = "Eric Faye";
				face = "Face37";
				glasses = "Spectacles";
				speaker = "Patrick";
				pitch = 1.086755;
				description = "";
			};
			class VictorTyler {
				name = "Victor Tyler";
				face = "Face32";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class AlejandroKielt {
				name = "Alejandro Kielt";
				face = "Face38";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.03642;
				description = "";
			};
			class MikeChurch {
				name = "Mike Church";
				face = "Face26";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.033063;
				description = "";
			};
			class MikeMcDonald {
				name = "Mike McDonald";
				face = "Face10";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class BillAlexander {
				name = "Bill Alexander";
				face = "Face12";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.061041;
				description = "";
			};
			class GregDunham {
				name = "Greg Dunham";
				face = "Face9";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.997827;
				description = "";
			};
			class DanLamb {
				name = "Dan Lamb";
				face = "Face28";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class KevinCates {
				name = "Kevin Cates";
				face = "Face20";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.019116;
				description = "";
			};
			class ClayDanenhauer {
				name = "Clay Danenhauer";
				face = "Face39";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.049011;
				description = "";
			};
			class LarryDees {
				name = "Larry Dees";
				face = "Face11";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class PatrickGeorge {
				name = "Patrick George";
				face = "Face32";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.943677;
				description = "";
			};
			class DanielWooten {
				name = "Daniel Wooten";
				face = "Face32";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.952716;
				description = "";
			};
			class TomWard {
				name = "Tom Ward";
				face = "Face35";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class AdamHouston {
				name = "Adam Houston";
				face = "Face2";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.074463;
				description = "";
			};
			class PatrickMaxwell {
				name = "Patrick Maxwell";
				face = "Face41";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.080048;
				description = "";
			};
			class ArthurSymonds {
				name = "Arthur Symonds";
				face = "Face50";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class TomMallinson {
				name = "Tom Mallinson";
				face = "Face51";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.970062;
				description = "";
			};
			class MatthewDodson {
				name = "Matthew Dodson";
				face = "Face35";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.936139;
				description = "";
			};
			class GeorgeBoyles {
				name = "George Boyles";
				face = "Face35";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class PeterSims {
				name = "Peter Sims";
				face = "Face35";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.095245;
				description = "";
			};
			class JohnMcMath {
				name = "John McMath";
				face = "Face28";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.097955;
				description = "";
			};
			class SamBricout {
				name = "Sam Bricout";
				face = "Face39";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class DarrenSouthworth {
				name = "Darren Southworth";
				face = "Face46";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.096905;
				description = "";
			};
			class TomHale {
				name = "Tom Hale";
				face = "Face26";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.028418;
				description = "";
			};
			class GeorgeCusey {
				name = "George Cusey";
				face = "Face26";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class NathanReddy {
				name = "Nathan Reddy";
				face = "Face28";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.015942;
				description = "";
			};
			class DavidHill {
				name = "David Hill";
				face = "Face26";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.059387;
				description = "";
			};
			class TomShaw {
				name = "Tom Shaw";
				face = "Face36";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class BradBrockman {
				name = "Brad Brockman";
				face = "Face30";
				glasses = "Sunglasses";
				speaker = "Dan";
				pitch = 0.98288;
				description = "";
			};
			class KeithMunn {
				name = "Keith Munn";
				face = "Face9";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.073816;
				description = "";
			};
			class BenjaminWeinheimer {
				name = "Benjamin Weinheimer";
				face = "Face52";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class ChadOConnell {
				name = "Chad O'Connell";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.032794;
				description = "";
			};
			class AllenHale {
				name = "Allen Hale";
				face = "Face19";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.910223;
				description = "";
			};
		};
	};
	class Guerrila {
		class Soldiers {
			class AntoninMrkacek {
				name = "Antonin Mrkacek";
				face = "Face6";
				speaker = "Marc";
				pitch = 0.906018;
				glasses = "None";
			};
			class FrantisekAisman {
				name = "Frantisek Aisman";
				face = "Face34";
				speaker = "Peter";
				pitch = 1.024652;
				glasses = "None";
			};
			class JaroslavMidliar {
				name = "Jaroslav Midliar";
				face = "Face45";
				speaker = "Patrick";
				pitch = 1.063013;
				glasses = "None";
			};
			class MilosBratranek {
				name = "Milos Bratranek";
				face = "Face18";
				speaker = "Adam";
				pitch = 0.987585;
				glasses = "None";
			};
			class FrantisekJazik {
				name = "Frantisek Jazik";
				face = "Face9";
				speaker = "Rich";
				pitch = 0.931415;
				glasses = "None";
			};
			class MiroslavAdolf {
				name = "Miroslav Adolf";
				face = "Face37";
				speaker = "Adam";
				pitch = 0.926459;
				glasses = "None";
			};
			class BohumilStejkoza {
				name = "Bohumil Stejkoza";
				face = "Face41";
				speaker = "Peter";
				pitch = 1.07016;
				glasses = "Spectacles";
			};
			class LambertRykr {
				name = "Lambert Rykr";
				face = "Face44";
				speaker = "Rich";
				pitch = 1.097369;
				glasses = "None";
			};
			class JaroslavStehule {
				name = "Jaroslav Stehule";
				face = "Face36";
				speaker = "George";
				pitch = 0.905646;
				glasses = "None";
			};
			class JaroslavBoubravsky {
				name = "Jaroslav Boubravsky";
				face = "Face52";
				speaker = "Paul";
				pitch = 0.959839;
				glasses = "None";
			};
			class DrahomirTafat {
				name = "Drahomir Tafat";
				face = "Face51";
				speaker = "Rob";
				pitch = 1.07926;
				glasses = "Spectacles";
			};
			class JiriNedbalek {
				name = "Jiri Nedbalek";
				face = "Face18";
				speaker = "Tom";
				pitch = 1.098737;
				glasses = "None";
			};
			class MichalPokorny {
				name = "Michal Pokorny";
				face = "Face44";
				speaker = "Adam";
				pitch = 1.022314;
				glasses = "None";
			};
			class AntoninAndert {
				name = "Antonin Andert";
				face = "Face44";
				speaker = "Paul";
				pitch = 1.03941;
				glasses = "None";
			};
			class PavelHoudek {
				name = "Pavel Houdek";
				face = "Face47";
				speaker = "Paul";
				pitch = 1.020227;
				glasses = "Spectacles";
			};
			class BohumilNadhera {
				name = "Bohumil Nadhera";
				face = "Face42";
				speaker = "Patrick";
				pitch = 0.909338;
				glasses = "None";
			};
			class VladimirKlimes {
				name = "Vladimir Klimes";
				face = "Face13";
				speaker = "Greg";
				pitch = 0.95954;
				glasses = "None";
			};
			class FrantisekMuff {
				name = "Frantisek Muff";
				face = "Default";
				speaker = "Rob";
				pitch = 1.003693;
				glasses = "Spectacles";
			};
			class JanStoss {
				name = "Jan Stoss";
				face = "Face16";
				speaker = "Marc";
				pitch = 1.03396;
				glasses = "None";
			};
			class JanKozman {
				name = "Jan Kozman";
				face = "Face29";
				speaker = "Dan";
				pitch = 0.903625;
				glasses = "Sunglasses";
			};
			class VladimirAlba {
				name = "Vladimir Alba";
				face = "Face3";
				speaker = "Patrick";
				pitch = 0.941858;
				glasses = "None";
			};
			class MiroslavSteimar {
				name = "Miroslav Steimar";
				face = "Default";
				speaker = "Rich";
				pitch = 1.048151;
				glasses = "None";
			};
			class PetrViduna {
				name = "Petr Viduna";
				face = "Face48";
				speaker = "Jonah";
				pitch = 1.030035;
				glasses = "None";
			};
			class TomasCizner {
				name = "Tomas Cizner";
				face = "Face1";
				speaker = "Paul";
				pitch = 0.925403;
				glasses = "None";
			};
			class JaromirMurtinger {
				name = "Jaromir Murtinger";
				face = "Face35";
				speaker = "Ted";
				pitch = 0.936664;
				glasses = "Sunglasses";
			};
			class VladimirNedelijak {
				name = "Vladimir Nedelijak";
				face = "Face44";
				speaker = "George";
				pitch = 0.996198;
				glasses = "None";
			};
			class LadislavFeiler {
				name = "Ladislav Feiler";
				face = "Face45";
				speaker = "Patrick";
				pitch = 1.040173;
				glasses = "None";
			};
			class JiriGeringer {
				name = "Jiri Geringer";
				face = "Face31";
				speaker = "Tom";
				pitch = 1.055481;
				glasses = "None";
			};
			class EdvardAbrham {
				name = "Edvard Abrham";
				face = "Face38";
				speaker = "Paul";
				pitch = 1.067529;
				glasses = "None";
			};
			class KarelCiper {
				name = "Karel Ciper";
				face = "Face28";
				speaker = "Patrick";
				pitch = 0.918469;
				glasses = "None";
			};
			class FrantisekNykl {
				name = "Frantisek Nykl";
				face = "Face11";
				speaker = "Rich";
				pitch = 1.058148;
				glasses = "None";
			};
			class IvanMurtin {
				name = "Ivan Murtin";
				face = "Face36";
				speaker = "Rob";
				pitch = 1.045612;
				glasses = "None";
			};
			class DanielFoltynek {
				name = "Daniel Foltynek";
				face = "Face35";
				speaker = "John";
				pitch = 0.999255;
				glasses = "None";
			};
			class OldrichNavalkovsky {
				name = "Oldrich Navalkovsky";
				face = "Face3";
				speaker = "Tom";
				pitch = 0.945477;
				glasses = "None";
			};
			class JaroslavSic {
				name = "Jaroslav Sic";
				face = "Face11";
				speaker = "Paul";
				pitch = 0.971393;
				glasses = "None";
			};
			class JiriCinybulk {
				name = "Jiri Cinybulk";
				face = "Face41";
				speaker = "Peter";
				pitch = 0.902484;
				glasses = "None";
			};
			class PetrMykytyn {
				name = "Petr Mykytyn";
				face = "Default";
				speaker = "Rich";
				pitch = 0.939783;
				glasses = "None";
			};
			class JaroslavSibrina {
				name = "Jaroslav Sibrina";
				face = "Face52";
				speaker = "Paul";
				pitch = 1.038269;
				glasses = "None";
			};
			class MartinBartos {
				name = "Martin Bartos";
				face = "Face13";
				speaker = "Greg";
				pitch = 0.959003;
				glasses = "None";
			};
			class KarelAdamovic {
				name = "Karel Adamovic";
				face = "Face34";
				speaker = "Rob";
				pitch = 0.98656;
				glasses = "None";
			};
			class JaroslavKozohorsky {
				name = "Jaroslav Kozohorsky";
				face = "Face24";
				speaker = "Adam";
				pitch = 0.918677;
				glasses = "None";
			};
			class FrantisekCicha {
				name = "Frantisek Cicha";
				face = "Face44";
				speaker = "Dan";
				pitch = 0.984589;
				glasses = "None";
			};
			class MiroslavBrepta {
				name = "Miroslav Brepta";
				face = "Face26";
				speaker = "Greg";
				pitch = 1.063586;
				glasses = "None";
			};
			class VaclavSchybal {
				name = "Vaclav Schybal";
				face = "Face13";
				speaker = "Jonah";
				pitch = 1.083667;
				glasses = "None";
			};
			class ArpadSilvestr {
				name = "Arpad Silvestr";
				face = "Face33";
				speaker = "Tom";
				pitch = 1.061884;
				glasses = "Spectacles";
			};
			class JosefSima {
				name = "Josef Sima";
				face = "Face24";
				speaker = "George";
				pitch = 0.980872;
				glasses = "None";
			};
			class MiroslavNebesar {
				name = "Miroslav Nebesar";
				face = "Face30";
				speaker = "Rob";
				pitch = 0.927789;
				glasses = "None";
			};
			class MilanFehr {
				name = "Milan Fehr";
				face = "Face9";
				speaker = "Rob";
				pitch = 1.004639;
				glasses = "None";
			};
			class AntoninStanislavcik {
				name = "Antonin Stanislavcik";
				face = "Face12";
				speaker = "Patrick";
				pitch = 0.927527;
				glasses = "None";
			};
			class JonasDavid {
				name = "Jonas David";
				face = "Face29";
				speaker = "Patrick";
				pitch = 1.070697;
				glasses = "None";
			};
			class AlesBrejla {
				name = "Ales Brejla";
				face = "Face45";
				speaker = "Paul";
				pitch = 0.918866;
				glasses = "None";
			};
			class KarelSlavik {
				name = "Karel Slavik";
				face = "Face47";
				speaker = "Jonah";
				pitch = 0.962109;
				glasses = "None";
			};
			class AloisMyslivecek {
				name = "Alois Myslivecek";
				face = "Face1";
				speaker = "Adam";
				pitch = 1.041937;
				glasses = "None";
			};
			class JaroslavNadenik {
				name = "Jaroslav Nadenik";
				face = "Face52";
				speaker = "Rich";
				pitch = 0.918005;
				glasses = "None";
			};
			class MarekNos {
				name = "Marek Nos";
				face = "Face52";
				speaker = "Paul";
				pitch = 1.013464;
				glasses = "None";
			};
			class BohumilNakladal {
				name = "Bohumil Nakladal";
				face = "Face38";
				speaker = "Jonah";
				pitch = 0.935028;
				glasses = "None";
			};
			class DominikJung {
				name = "Dominik Jung";
				face = "Face29";
				speaker = "Ted";
				pitch = 1.067499;
				glasses = "None";
			};
			class MilanCibik {
				name = "Milan Cibik";
				face = "Face9";
				speaker = "John";
				pitch = 0.952429;
				glasses = "None";
			};
			class ChotimirDobner {
				name = "Chotimir Dobner";
				face = "Face11";
				speaker = "Patrick";
				pitch = 0.967126;
				glasses = "None";
			};
			class MilosVanko {
				name = "Milos Vanko";
				face = "Face3";
				speaker = "Jonah";
				pitch = 1.048102;
				glasses = "None";
			};
			class VratislavDajnar {
				name = "Vratislav Dajnar";
				face = "Face31";
				speaker = "George";
				pitch = 0.99035;
				glasses = "None";
			};
			class AntoninConk {
				name = "Antonin Conk";
				face = "Face20";
				speaker = "George";
				pitch = 0.988184;
				glasses = "None";
			};
			class ArnostNedela {
				name = "Arnost Nedela";
				face = "Face28";
				speaker = "Patrick";
				pitch = 1.09917;
				glasses = "None";
			};
			class JanBrhel {
				name = "Jan Brhel";
				face = "Face49";
				speaker = "John";
				pitch = 0.972345;
				glasses = "None";
			};
			class BohuslavNaprstek {
				name = "Bohuslav Naprstek";
				face = "Face24";
				speaker = "Ted";
				pitch = 0.986212;
				glasses = "None";
			};
			class PremekSimaichl {
				name = "Premek Simaichl";
				face = "Default";
				speaker = "Peter";
				pitch = 1.061243;
				glasses = "None";
			};
			class ArnostAlince {
				name = "Arnost Alince";
				face = "Face15";
				speaker = "Rob";
				pitch = 1.044312;
				glasses = "None";
			};
			class AntoninBrhlik {
				name = "Antonin Brhlik";
				face = "Face9";
				speaker = "George";
				pitch = 0.980243;
				glasses = "None";
			};
			class BohumirJurek {
				name = "Bohumir Jurek";
				face = "Face13";
				speaker = "John";
				pitch = 1.028571;
				glasses = "None";
			};
			class JosefDmejchal {
				name = "Josef Dmejchal";
				face = "Default";
				speaker = "Rich";
				pitch = 0.920386;
				glasses = "None";
			};
			class PetrJavurek {
				name = "Petr Javurek";
				face = "Face20";
				speaker = "John";
				pitch = 1.002344;
				glasses = "None";
			};
			class MartinKloucek {
				name = "Martin Kloucek";
				face = "Face36";
				speaker = "Paul";
				pitch = 0.924207;
				glasses = "None";
			};
			class BranislavIvanko {
				name = "Branislav Ivanko";
				face = "Face49";
				speaker = "John";
				pitch = 1.032025;
				glasses = "None";
			};
			class MilanSibr {
				name = "Milan Sibr";
				face = "Face40";
				speaker = "Rob";
				pitch = 1.044122;
				glasses = "None";
			};
			class MArtinBenes {
				name = "MArtin Benes";
				face = "Face8";
				speaker = "Patrick";
				pitch = 1.099554;
				glasses = "None";
			};
			class FrantisekTalian {
				name = "Frantisek Talian";
				face = "Face38";
				speaker = "Ted";
				pitch = 0.944031;
				glasses = "None";
			};
			class TomasSihelsky {
				name = "Tomas Sihelsky";
				face = "Face41";
				speaker = "Peter";
				pitch = 0.905975;
				glasses = "None";
			};
			class JindrichStankev {
				name = "Jindrich Stankev";
				face = "Face23";
				speaker = "John";
				pitch = 0.979163;
				glasses = "None";
			};
			class JanSidor {
				name = "Jan Sidor";
				face = "Default";
				speaker = "Rob";
				pitch = 0.978906;
				glasses = "None";
			};
			class PavelViktoryn {
				name = "Pavel Viktoryn";
				face = "Face7";
				speaker = "Paul";
				pitch = 1.074322;
				glasses = "None";
			};
			class AlexandrBrezovsky {
				name = "Alexandr Brezovsky";
				face = "Face5";
				speaker = "Tom";
				pitch = 1.000366;
				glasses = "None";
			};
			class JaroslavaCiglerova {
				name = "Jaroslava Ciglerova";
				face = "Face32";
				speaker = "Tom";
				pitch = 1.040338;
				glasses = "None";
			};
			class BohumilKubista {
				name = "Bohumil Kubista";
				face = "Face6";
				speaker = "Greg";
				pitch = 0.903717;
				glasses = "None";
			};
			class VaclavCivoch {
				name = "Vaclav Civoch";
				face = "Face36";
				speaker = "Rich";
				pitch = 0.987372;
				glasses = "None";
			};
			class MikulasGlimb {
				name = "Mikulas Glimb";
				face = "Face1";
				speaker = "Rob";
				pitch = 1.075421;
				glasses = "None";
			};
			class KarelStouda {
				name = "Karel Stouda";
				face = "Face31";
				speaker = "Paul";
				pitch = 1.016028;
				glasses = "None";
			};
			class ReneAchard {
				name = "Rene Achard";
				face = "Face8";
				speaker = "Rob";
				pitch = 1.093036;
				glasses = "None";
			};
			class IvanNagl {
				name = "Ivan Nagl";
				face = "Face19";
				speaker = "John";
				pitch = 1.084058;
				glasses = "Spectacles";
			};
			class AntoninKoukol {
				name = "Antonin Koukol";
				face = "Face9";
				speaker = "Tom";
				pitch = 1.045691;
				glasses = "None";
			};
			class TomasPek {
				name = "Tomas Pek";
				face = "Face49";
				speaker = "Rob";
				pitch = 0.92785;
				glasses = "None";
			};
			class JanPinta {
				name = "Jan Pinta";
				face = "Face11";
				speaker = "Tom";
				pitch = 0.977545;
				glasses = "None";
			};
			class JiriDezort {
				name = "Jiri Dezort";
				face = "Face1";
				speaker = "Paul";
				pitch = 0.930823;
				glasses = "None";
			};
			class IgorKuklis {
				name = "Igor Kuklis";
				face = "Face43";
				speaker = "Jonah";
				pitch = 0.934204;
				glasses = "None";
			};
			class SlavomirTabacik {
				name = "Slavomir Tabacik";
				face = "Face47";
				speaker = "Peter";
				pitch = 1.003137;
				glasses = "None";
			};
			class JosefStarinsky {
				name = "Josef Starinsky";
				face = "Face41";
				speaker = "Rich";
				pitch = 0.905505;
				glasses = "None";
			};
			class FilipBrazdil {
				name = "Filip Brazdil";
				face = "Face26";
				speaker = "Patrick";
				pitch = 1.079102;
				glasses = "None";
			};
			class PavelFilipko {
				name = "Pavel Filipko";
				face = "Face13";
				speaker = "Paul";
				pitch = 1.01817;
				glasses = "None";
			};
			class OndrejHorak {
				name = "Ondrej Horak";
				face = "Face52";
				speaker = "Patrick";
				pitch = 0.927161;
				glasses = "None";
			};
			class EmilVlcan {
				name = "Emil Vlcan";
				face = "Default";
				speaker = "Marc";
				pitch = 0.941528;
				glasses = "None";
			};
			class AntoninMrzena {
				name = "Antonin Mrzena";
				face = "Face31";
				speaker = "Tom";
				pitch = 0.922852;
				glasses = "None";
			};
			class RomanCikhardt {
				name = "Roman Cikhardt";
				face = "Face18";
				speaker = "Greg";
				pitch = 1.093976;
				glasses = "None";
			};
			class MichalKralovic {
				name = "Michal Kralovic";
				face = "Face35";
				speaker = "Rob";
				pitch = 0.955432;
				glasses = "None";
			};
			class VladimirSidorjak {
				name = "Vladimir Sidorjak";
				face = "Face52";
				speaker = "George";
				pitch = 0.924225;
				glasses = "None";
			};
			class LadislavKostron {
				name = "Ladislav Kostron";
				face = "Face21";
				speaker = "George";
				pitch = 1.069916;
				glasses = "None";
			};
			class VaclavAlfery {
				name = "Vaclav Alfery";
				face = "Face14";
				speaker = "John";
				pitch = 0.90639;
				glasses = "None";
			};
			class PetrFohl {
				name = "Petr Fohl";
				face = "Face52";
				speaker = "Jonah";
				pitch = 0.997711;
				glasses = "None";
			};
			class KarelViewegh {
				name = "Karel Viewegh";
				face = "Face1";
				speaker = "Greg";
				pitch = 0.946063;
				glasses = "None";
			};
			class JanMurin {
				name = "Jan Murin";
				face = "Face51";
				speaker = "Ted";
				pitch = 0.955884;
				glasses = "None";
			};
			class JanFahoun {
				name = "Jan Fahoun";
				face = "Face29";
				speaker = "George";
				pitch = 0.909991;
				glasses = "None";
			};
			class TomasTopol {
				name = "Tomas Topol";
				face = "Face50";
				speaker = "Adam";
				pitch = 0.918353;
				glasses = "None";
			};
			class FrantisekKram {
				name = "Frantisek Kram";
				face = "Face21";
				speaker = "Patrick";
				pitch = 0.911499;
				glasses = "None";
			};
			class MilanFolkman {
				name = "Milan Folkman";
				face = "Face1";
				speaker = "Paul";
				pitch = 0.912939;
				glasses = "None";
			};
			class JanDobry {
				name = "Jan Dobry";
				face = "Face13";
				speaker = "Ted";
				pitch = 0.916119;
				glasses = "None";
			};
			class JanBreck {
				name = "Jan Breck";
				face = "Face49";
				speaker = "Adam";
				pitch = 0.912921;
				glasses = "None";
			};
			class KarelBrat {
				name = "Karel Brat";
				face = "Face48";
				speaker = "Adam";
				pitch = 1.079987;
				glasses = "None";
			};
			class VaclavAlbertyn {
				name = "Vaclav Albertyn";
				face = "Face22";
				speaker = "Dan";
				pitch = 1.009302;
				glasses = "None";
			};
			class PravomilCipra {
				name = "Pravomil Cipra";
				face = "Face12";
				speaker = "Tom";
				pitch = 0.92019;
				glasses = "None";
			};
			class JaroslavBrebera {
				name = "Jaroslav Brebera";
				face = "Face37";
				speaker = "John";
				pitch = 1.059265;
				glasses = "None";
			};
			class AlexandrStelsovsky {
				name = "Alexandr Stelsovsky";
				face = "Face14";
				speaker = "Jonah";
				pitch = 1.055597;
				glasses = "None";
			};
			class DanielBrauckman {
				name = "Daniel Brauckman";
				face = "Face29";
				speaker = "Greg";
				pitch = 0.995697;
				glasses = "None";
			};
			class BohuslavKrpata {
				name = "Bohuslav Krpata";
				face = "Face16";
				speaker = "Adam";
				pitch = 1.023694;
				glasses = "None";
			};
			class AloisBoublik {
				name = "Alois Boublik";
				face = "Face5";
				speaker = "George";
				pitch = 0.962537;
				glasses = "None";
			};
			class JiriJakerson {
				name = "Jiri Jakerson";
				face = "Face3";
				speaker = "John";
				pitch = 0.941986;
				glasses = "None";
			};
			class BohumirGlos {
				name = "Bohumir Glos";
				face = "Face52";
				speaker = "Adam";
				pitch = 1.070447;
				glasses = "None";
			};
			class RadekCiprys {
				name = "Radek Ciprys";
				face = "Face4";
				speaker = "Greg";
				pitch = 0.947925;
				glasses = "None";
			};
			class JiriGil {
				name = "Jiri Gil";
				face = "Face26";
				speaker = "Patrick";
				pitch = 1.094238;
				glasses = "None";
			};
			class JanAndlt {
				name = "Jan Andlt";
				face = "Face13";
				speaker = "Rob";
				pitch = 0.947485;
				glasses = "None";
			};
			class JanNedoma {
				name = "Jan Nedoma";
				face = "FaceR01";
				speaker = "Jonah";
				pitch = 1.075092;
				glasses = "None";
			};
			class JanMysicka {
				name = "Jan Mysicka";
				face = "Face21";
				speaker = "Jonah";
				pitch = 1.054303;
				glasses = "None";
			};
			class FrantisekVeverka {
				name = "Frantisek Veverka";
				face = "FaceR01";
				speaker = "Rob";
				pitch = 1.036774;
				glasses = "None";
			};
			class ZdenekGlingar {
				name = "Zdenek Glingar";
				face = "FaceR01";
				speaker = "Patrick";
				pitch = 1.008313;
				glasses = "None";
			};
			class AloisBratanek {
				name = "Alois Bratanek";
				face = "Face49";
				speaker = "Patrick";
				pitch = 0.922107;
				glasses = "None";
			};
			class JaroslavAlbrecht {
				name = "Jaroslav Albrecht";
				face = "Face9";
				speaker = "Tom";
				pitch = 1.06394;
				glasses = "None";
			};
			class PetrSidak {
				name = "Petr Sidak";
				face = "Face26";
				speaker = "Tom";
				pitch = 0.967419;
				glasses = "None";
			};
			class AntoninFejk {
				name = "Antonin Fejk";
				face = "Face45";
				speaker = "George";
				pitch = 1.070123;
				glasses = "None";
			};
			class JosefBozka {
				name = "Josef Bozka";
				face = "Face27";
				speaker = "Rob";
				pitch = 1.044025;
				glasses = "None";
			};
			class PavelFejfanek {
				name = "Pavel Fejfanek";
				face = "Face34";
				speaker = "Greg";
				pitch = 0.952789;
				glasses = "None";
			};
			class EmilBistak {
				name = "Emil Bistak";
				face = "Face15";
				speaker = "Paul";
				pitch = 0.961633;
				glasses = "Spectacles";
			};
			class Aloisdittrich {
				name = "Alois dittrich";
				face = "Face15";
				speaker = "Ted";
				pitch = 1.052283;
				glasses = "None";
			};
			class JindrichJahnl {
				name = "Jindrich Jahnl";
				face = "Face39";
				speaker = "George";
				pitch = 0.903882;
				glasses = "None";
			};
			class JanAndelt {
				name = "Jan Andelt";
				face = "Face29";
				speaker = "John";
				pitch = 1.08056;
				glasses = "None";
			};
			class EmanuelKouril {
				name = "Emanuel Kouril";
				face = "Face52";
				speaker = "Adam";
				pitch = 0.974536;
				glasses = "Spectacles";
			};
			class JaroslavFeda {
				name = "Jaroslav Feda";
				face = "Face46";
				speaker = "Greg";
				pitch = 0.954028;
				glasses = "None";
			};
			class StafanJajko {
				name = "Stafan Jajko";
				face = "Face36";
				speaker = "Greg";
				pitch = 0.921997;
				glasses = "None";
			};
			class PetrSidikman {
				name = "Petr Sidikman";
				face = "Face52";
				speaker = "Dan";
				pitch = 1.056207;
				glasses = "None";
			};
			class KristianMikulejsky {
				name = "Kristian Mikulejsky";
				face = "Face22";
				speaker = "Jonah";
				pitch = 0.914471;
				glasses = "None";
			};
			class FrantisekBressler {
				name = "Frantisek Bressler";
				face = "Face10";
				speaker = "Patrick";
				pitch = 0.925061;
				glasses = "None";
			};
			class PetrDlouhy {
				name = "Petr Dlouhy";
				face = "FaceR01";
				speaker = "Rich";
				pitch = 0.996198;
				glasses = "None";
			};
			class EvzenSidorin {
				name = "Evzen Sidorin";
				face = "Face46";
				speaker = "Ted";
				pitch = 1.097968;
				glasses = "None";
			};
			class KarelNaumcik {
				name = "Karel Naumcik";
				face = "Face6";
				speaker = "Dan";
				pitch = 1.018079;
				glasses = "Spectacles";
			};
			class AntoninSiegl {
				name = "Antonin Siegl";
				face = "Face17";
				speaker = "Rich";
				pitch = 1.091876;
				glasses = "None";
			};
			class VojtechSteklac {
				name = "Vojtech Steklac";
				face = "Face49";
				speaker = "Rob";
				pitch = 0.952692;
				glasses = "None";
			};
			class MarcelJunek {
				name = "Marcel Junek";
				face = "Face41";
				speaker = "Dan";
				pitch = 0.915167;
				glasses = "None";
			};
			class GustavStarkbaum {
				name = "Gustav Starkbaum";
				face = "Face12";
				speaker = "Peter";
				pitch = 0.917523;
				glasses = "None";
			};
			class AntoninKramerius {
				name = "Antonin Kramerius";
				face = "FaceR01";
				speaker = "Greg";
				pitch = 0.972791;
				glasses = "None";
			};
			class EduardNovak {
				name = "Eduard Novak";
				face = "Face32";
				speaker = "Adam";
				pitch = 0.983838;
				glasses = "None";
			};
			class FrantisekTaborJosefTaitl {
				name = "Frantisek TaborJosef Taitl";
				face = "Face30";
				speaker = "John";
				pitch = 0.964185;
				glasses = "None";
			};
			class AloisOberman {
				name = "Alois Oberman";
				face = "FaceR01";
				speaker = "Dan";
				pitch = 1.095483;
				glasses = "None";
			};
			class KarelGlogar {
				name = "Karel Glogar";
				face = "Face16";
				speaker = "Patrick";
				pitch = 1.083209;
				glasses = "None";
			};
			class JosefSchytil {
				name = "Josef Schytil";
				face = "Face13";
				speaker = "Marc";
				pitch = 0.990472;
				glasses = "None";
			};
			class BohumilMuzicek {
				name = "Bohumil Muzicek";
				face = "Face31";
				speaker = "Patrick";
				pitch = 0.90929;
				glasses = "None";
			};
			class TomasBraun {
				name = "Tomas Braun";
				face = "Face22";
				speaker = "John";
				pitch = 0.95025;
				glasses = "None";
			};
			class JiriJazvinsky {
				name = "Jiri Jazvinsky";
				face = "Face18";
				speaker = "Adam";
				pitch = 0.922162;
				glasses = "None";
			};
			class MiroslavBraha {
				name = "Miroslav Braha";
				face = "Face51";
				speaker = "Jonah";
				pitch = 1.004852;
				glasses = "Sunglasses";
			};
			class MilanFiser {
				name = "Milan Fiser";
				face = "Face50";
				speaker = "Rich";
				pitch = 0.956573;
				glasses = "None";
			};
			class JosefFolejtar {
				name = "Josef Folejtar";
				face = "Face11";
				speaker = "Greg";
				pitch = 1.081329;
				glasses = "Sunglasses";
			};
			class RobertTaibl {
				name = "Robert Taibl";
				face = "Face48";
				speaker = "Greg";
				pitch = 1.086566;
				glasses = "None";
			};
			class EduardMikulcik {
				name = "Eduard Mikulcik";
				face = "Face52";
				speaker = "Paul";
				pitch = 1.052942;
				glasses = "None";
			};
			class AntoninNamestek {
				name = "Antonin Namestek";
				face = "Face34";
				speaker = "Jonah";
				pitch = 0.93067;
				glasses = "None";
			};
			class AntoninJisa {
				name = "Antonin Jisa";
				face = "Face47";
				speaker = "Tom";
				pitch = 1.006042;
				glasses = "None";
			};
			class JanMuk {
				name = "Jan Muk";
				face = "Face21";
				speaker = "Adam";
				pitch = 1.055939;
				glasses = "None";
			};
			class FrantisekMikule {
				name = "Frantisek Mikule";
				face = "FaceR01";
				speaker = "Marc";
				pitch = 1.048383;
				glasses = "None";
			};
			class MichalKolousek {
				name = "Michal Kolousek";
				face = "Face14";
				speaker = "Greg";
				pitch = 0.982416;
				glasses = "None";
			};
			class MichalBretl {
				name = "Michal Bretl";
				face = "Face42";
				speaker = "Paul";
				pitch = 0.985437;
				glasses = "None";
			};
			class FrantisekSteidl {
				name = "Frantisek Steidl";
				face = "Face44";
				speaker = "Marc";
				pitch = 1.021722;
				glasses = "None";
			};
			class FrantisekSigl {
				name = "Frantisek Sigl";
				face = "Face16";
				speaker = "Patrick";
				pitch = 1.035034;
				glasses = "None";
			};
			class FrantisekTaimar {
				name = "Frantisek Taimar";
				face = "Face15";
				speaker = "Dan";
				pitch = 0.973676;
				glasses = "Sunglasses";
			};
			class JaroslavDevin {
				name = "Jaroslav Devin";
				face = "Face52";
				speaker = "Marc";
				pitch = 1.051709;
				glasses = "None";
			};
			class JanCisovsky {
				name = "Jan Cisovsky";
				face = "Face38";
				speaker = "George";
				pitch = 1.068262;
				glasses = "None";
			};
			class JindrichCihelna {
				name = "Jindrich Cihelna";
				face = "Face3";
				speaker = "Peter";
				pitch = 0.965082;
				glasses = "None";
			};
			class MiloslavStejbal {
				name = "Miloslav Stejbal";
				face = "Face31";
				speaker = "Adam";
				pitch = 0.909387;
				glasses = "Sunglasses";
			};
			class MichalNamisnak {
				name = "Michal Namisnak";
				face = "Face22";
				speaker = "Paul";
				pitch = 0.983124;
				glasses = "None";
			};
			class JiriAdamcik {
				name = "Jiri Adamcik";
				face = "Face19";
				speaker = "Jonah";
				pitch = 1.08454;
				glasses = "None";
			};
			class RomanVasnovic {
				name = "Roman Vasnovic";
				face = "Face9";
				speaker = "Marc";
				pitch = 1.013892;
				glasses = "None";
			};
			class VladimirCmunt {
				name = "Vladimir Cmunt";
				face = "Face8";
				speaker = "Tom";
				pitch = 1.028455;
				glasses = "None";
			};
			class AntoninMikulin {
				name = "Antonin Mikulin";
				face = "Face27";
				speaker = "Adam";
				pitch = 1.005615;
				glasses = "None";
			};
			class MilanTahotny {
				name = "Milan Tahotny";
				face = "Face7";
				speaker = "Marc";
				pitch = 1.040381;
				glasses = "None";
			};
			class JiriAdamovsky {
				name = "Jiri Adamovsky";
				face = "Face25";
				speaker = "Paul";
				pitch = 1.024829;
				glasses = "None";
			};
			class DrahomiraCifrova {
				name = "Drahomira Cifrova";
				face = "Face29";
				speaker = "Marc";
				pitch = 1.089301;
				glasses = "None";
			};
			class AdolfBrejcha {
				name = "Adolf Brejcha";
				face = "Face43";
				speaker = "Marc";
				pitch = 0.904529;
				glasses = "None";
			};
			class ZdenekNass {
				name = "Zdenek Nass";
				face = "Face26";
				speaker = "Adam";
				pitch = 0.961896;
				glasses = "None";
			};
			class AntoninMikulecky {
				name = "Antonin Mikulecky";
				face = "Face14";
				speaker = "Rob";
				pitch = 1.040149;
				glasses = "None";
			};
			class MichalStudnicny {
				name = "Michal Studnicny";
				face = "Face30";
				speaker = "Ted";
				pitch = 0.956848;
				glasses = "None";
			};
			class PavelBratinka {
				name = "Pavel Bratinka";
				face = "Face44";
				speaker = "Patrick";
				pitch = 0.971954;
				glasses = "None";
			};
			class MiroslavKukla {
				name = "Miroslav Kukla";
				face = "Face21";
				speaker = "Greg";
				pitch = 1.050702;
				glasses = "None";
			};
			class TomasPalm {
				name = "Tomas Palm";
				face = "Face8";
				speaker = "Jonah";
				pitch = 0.913983;
				glasses = "None";
			};
			class AdolfAdam {
				name = "Adolf Adam";
				face = "Face20";
				speaker = "Paul";
				pitch = 1.033655;
				glasses = "None";
			};
			class PetrNebesky {
				name = "Petr Nebesky";
				face = "Face20";
				speaker = "George";
				pitch = 1.033508;
				glasses = "None";
			};
			class MichalAlexandrovic {
				name = "Michal Alexandrovic";
				face = "Face41";
				speaker = "Marc";
				pitch = 1.063422;
				glasses = "None";
			};
			class AlesBraun {
				name = "Ales Braun";
				face = "Face4";
				speaker = "Rob";
				pitch = 1.005585;
				glasses = "None";
			};
			class SvatoplukNaus {
				name = "Svatopluk Naus";
				face = "Face27";
				speaker = "Jonah";
				pitch = 1.081995;
				glasses = "None";
			};
			class FilipKaspar {
				name = "Filip Kaspar";
				face = "Face13";
				speaker = "Marc";
				pitch = 0.996863;
				glasses = "None";
			};
			class JiriStickel {
				name = "Jiri Stickel";
				face = "Face52";
				speaker = "Patrick";
				pitch = 1.097473;
				glasses = "None";
			};
			class MilanKostal {
				name = "Milan Kostal";
				face = "Face33";
				speaker = "Paul";
				pitch = 1.073578;
				glasses = "None";
			};
			class JiriJecmen {
				name = "Jiri Jecmen";
				face = "Face27";
				speaker = "Ted";
				pitch = 0.951038;
				glasses = "None";
			};
			class KarelCitterbart {
				name = "Karel Citterbart";
				face = "Face38";
				speaker = "Rich";
				pitch = 0.945367;
				glasses = "None";
			};
			class MichalStark {
				name = "Michal Stark";
				face = "Face24";
				speaker = "Dan";
				pitch = 1.006781;
				glasses = "Spectacles";
			};
			class IvoMyslivec {
				name = "Ivo Myslivec";
				face = "Face12";
				speaker = "Patrick";
				pitch = 0.925177;
				glasses = "None";
			};
			class JiriCichon {
				name = "Jiri Cichon";
				face = "Face22";
				speaker = "Greg";
				pitch = 0.989642;
				glasses = "None";
			};
			class JiriFenol {
				name = "Jiri Fenol";
				face = "Face30";
				speaker = "Patrick";
				pitch = 1.05846;
				glasses = "None";
			};
			class MiroslavAjsman {
				name = "Miroslav Ajsman";
				face = "Face7";
				speaker = "Greg";
				pitch = 0.900342;
				glasses = "None";
			};
			class MiroslavVildman {
				name = "Miroslav Vildman";
				face = "Face26";
				speaker = "Rob";
				pitch = 0.923999;
				glasses = "Spectacles";
			};
			class KarelObeda {
				name = "Karel Obeda";
				face = "Face25";
				speaker = "John";
				pitch = 0.972107;
				glasses = "None";
			};
			class MarekRada {
				name = "Marek Rada";
				face = "Face26";
				speaker = "Dan";
				pitch = 1.017969;
				glasses = "Spectacles";
			};
			class JaroslavFencl {
				name = "Jaroslav Fencl";
				face = "Face21";
				speaker = "Greg";
				pitch = 0.904956;
				glasses = "None";
			};
			class HorymirKotan {
				name = "Horymir Kotan";
				face = "Face46";
				speaker = "Patrick";
				pitch = 0.915802;
				glasses = "None";
			};
			class PavelVlasaty {
				name = "Pavel Vlasaty";
				face = "Face29";
				speaker = "Dan";
				pitch = 0.948859;
				glasses = "None";
			};
			class BohdanNecesanek {
				name = "Bohdan Necesanek";
				face = "FaceR01";
				speaker = "Patrick";
				pitch = 0.935742;
				glasses = "None";
			};
			class ArnostFilla {
				name = "Arnost Filla";
				face = "Face22";
				speaker = "Patrick";
				pitch = 0.927496;
				glasses = "Sunglasses";
			};
			class LadislavBrejda {
				name = "Ladislav Brejda";
				face = "Face33";
				speaker = "Jonah";
				pitch = 1.035681;
				glasses = "None";
			};
			class JiriSemecky {
				name = "Jiri Semecky";
				face = "Face31";
				speaker = "Ted";
				pitch = 1.024768;
				glasses = "None";
			};
			class AntoninTacmer {
				name = "Antonin Tacmer";
				face = "Face14";
				speaker = "Patrick";
				pitch = 0.927942;
				glasses = "None";
			};
			class FrantisekStekly {
				name = "Frantisek Stekly";
				face = "Face42";
				speaker = "Greg";
				pitch = 1.02395;
				glasses = "None";
			};
			class OtakarKulhanek {
				name = "Otakar Kulhanek";
				face = "Face39";
				speaker = "Rich";
				pitch = 1.050714;
				glasses = "None";
			};
			class OndrejHanus {
				name = "Ondrej Hanus";
				face = "Face16";
				speaker = "Ted";
				pitch = 0.983551;
				glasses = "None";
			};
			class EduardKraml {
				name = "Eduard Kraml";
				face = "Face45";
				speaker = "Marc";
				pitch = 0.939996;
				glasses = "None";
			};
			class BorisNakladov {
				name = "Boris Nakladov";
				face = "Face52";
				speaker = "Adam";
				pitch = 0.907599;
				glasses = "None";
			};
			class BohumilJakes {
				name = "Bohumil Jakes";
				face = "Face44";
				speaker = "Marc";
				pitch = 0.986859;
				glasses = "None";
			};
			class HubertMikulik {
				name = "Hubert Mikulik";
				face = "Face2";
				speaker = "George";
				pitch = 0.982306;
				glasses = "Sunglasses";
			};
			class MartinCocula {
				name = "Martin Cocula";
				face = "Face22";
				speaker = "Paul";
				pitch = 1.042096;
				glasses = "Spectacles";
			};
			class JanStengl {
				name = "Jan Stengl";
				face = "Face18";
				speaker = "Greg";
				pitch = 0.969794;
				glasses = "None";
			};
			class AntoninVich {
				name = "Antonin Vich";
				face = "Face23";
				speaker = "Rich";
				pitch = 1.02063;
				glasses = "None";
			};
			class AlojzNeduchal {
				name = "Alojz Neduchal";
				face = "Face11";
				speaker = "Rob";
				pitch = 1.030017;
				glasses = "None";
			};
			class IvanFederov {
				name = "Ivan Federov";
				face = "Face8";
				speaker = "Marc";
				pitch = 1.017383;
				glasses = "None";
			};
			class StanislavCmiral {
				name = "Stanislav Cmiral";
				face = "Face44";
				speaker = "Peter";
				pitch = 0.938391;
				glasses = "None";
			};
			class MartinDanda {
				name = "Martin Danda";
				face = "Face13";
				speaker = "John";
				pitch = 0.995453;
				glasses = "None";
			};
			class VaclavCilek {
				name = "Vaclav Cilek";
				face = "Face7";
				speaker = "Rich";
				pitch = 1.086859;
				glasses = "None";
			};
			class MilanFilipek {
				name = "Milan Filipek";
				face = "Face9";
				speaker = "Paul";
				pitch = 1.036267;
				glasses = "None";
			};
			class RadekKraus {
				name = "Radek Kraus";
				face = "Face4";
				speaker = "Rob";
				pitch = 0.900177;
				glasses = "None";
			};
			class VladislavJanousek {
				name = "Vladislav Janousek";
				face = "Face45";
				speaker = "Marc";
				pitch = 1.083685;
				glasses = "None";
			};
			class AlesKulhavy {
				name = "Ales Kulhavy";
				face = "Face25";
				speaker = "Paul";
				pitch = 0.981836;
				glasses = "None";
			};
			class JanNadrasky {
				name = "Jan Nadrasky";
				face = "Face4";
				speaker = "Dan";
				pitch = 0.917719;
				glasses = "None";
			};
			class PetrSteinbauser {
				name = "Petr Steinbauser";
				face = "Face41";
				speaker = "Paul";
				pitch = 0.912933;
				glasses = "None";
			};
			class MiloslavDlubal {
				name = "Miloslav Dlubal";
				face = "Face41";
				speaker = "Greg";
				pitch = 1.019556;
				glasses = "None";
			};
			class JosefTadic {
				name = "Josef Tadic";
				face = "Face30";
				speaker = "Paul";
				pitch = 1.019116;
				glasses = "None";
			};
			class JosefFeher {
				name = "Josef Feher";
				face = "Face9";
				speaker = "Paul";
				pitch = 1.089325;
				glasses = "None";
			};
			class AlexandrKotocka {
				name = "Alexandr Kotocka";
				face = "Face50";
				speaker = "Greg";
				pitch = 1.024133;
				glasses = "None";
			};
			class JiriStome {
				name = "Jiri Stome";
				face = "Face47";
				speaker = "Paul";
				pitch = 0.975317;
				glasses = "None";
			};
			class MiroslavFoltyn {
				name = "Miroslav Foltyn";
				face = "Face19";
				speaker = "Peter";
				pitch = 0.902771;
				glasses = "None";
			};
			class PeterFoltynsky {
				name = "Peter Foltynsky";
				face = "Face41";
				speaker = "Paul";
				pitch = 0.931653;
				glasses = "None";
			};
			class PetrPribyl {
				name = "Petr Pribyl";
				face = "Face33";
				speaker = "Marc";
				pitch = 0.945612;
				glasses = "None";
			};
			class JiriAndras {
				name = "Jiri Andras";
				face = "Face27";
				speaker = "Adam";
				pitch = 0.903778;
				glasses = "None";
			};
			class PavelJurda {
				name = "Pavel Jurda";
				face = "Face52";
				speaker = "Ted";
				pitch = 0.935931;
				glasses = "None";
			};
			class EmilJacka {
				name = "Emil Jacka";
				face = "Face36";
				speaker = "Patrick";
				pitch = 1.068036;
				glasses = "None";
			};
			class JanJaros {
				name = "Jan Jaros";
				face = "Face36";
				speaker = "Rich";
				pitch = 0.993799;
				glasses = "None";
			};
			class JanSihelnik {
				name = "Jan Sihelnik";
				face = "Face47";
				speaker = "Peter";
				pitch = 1.086304;
				glasses = "None";
			};
			class DavidFaustus {
				name = "David Faustus";
				face = "Face50";
				speaker = "Adam";
				pitch = 0.983038;
				glasses = "None";
			};
			class VaclavForetnik {
				name = "Vaclav Foretnik";
				face = "Face16";
				speaker = "Jonah";
				pitch = 0.955341;
				glasses = "None";
			};
			class MirekPavlik {
				name = "Mirek Pavlik";
				face = "Face15";
				speaker = "Rich";
				pitch = 1.026959;
				glasses = "None";
			};
			class IvoBraunstein {
				name = "Ivo Braunstein";
				face = "Face18";
				speaker = "Patrick";
				pitch = 0.945435;
				glasses = "None";
			};
			class MilanCoch {
				name = "Milan Coch";
				face = "Face41";
				speaker = "Tom";
				pitch = 1.097595;
				glasses = "None";
			};
			class IvanSidej {
				name = "Ivan Sidej";
				face = "Face34";
				speaker = "Dan";
				pitch = 0.930542;
				glasses = "None";
			};
			class AntoninBouchal {
				name = "Antonin Bouchal";
				face = "Face10";
				speaker = "Rich";
				pitch = 0.949506;
				glasses = "None";
			};
			class PavlaCignerova {
				name = "Pavla Cignerova";
				face = "Face47";
				speaker = "Marc";
				pitch = 0.977612;
				glasses = "None";
			};
			class FilipSubrt {
				name = "Filip Subrt";
				face = "Face41";
				speaker = "Marc";
				pitch = 1.008154;
				glasses = "None";
			};
			class FrantisekJagl {
				name = "Frantisek Jagl";
				face = "Face32";
				speaker = "Peter";
				pitch = 0.920233;
				glasses = "None";
			};
			class MatejBozovsky {
				name = "Matej Bozovsky";
				face = "Face48";
				speaker = "Ted";
				pitch = 1.003192;
				glasses = "None";
			};
			class AntoninMikulec {
				name = "Antonin Mikulec";
				face = "Face30";
				speaker = "Patrick";
				pitch = 1.049896;
				glasses = "None";
			};
			class KarelKubik {
				name = "Karel Kubik";
				face = "Face10";
				speaker = "Rob";
				pitch = 1.086658;
				glasses = "None";
			};
			class KarelKodl {
				name = "Karel Kodl";
				face = "Face19";
				speaker = "Ted";
				pitch = 0.917157;
				glasses = "None";
			};
			class OldrichObicky {
				name = "Oldrich Obicky";
				face = "Face25";
				speaker = "Rob";
				pitch = 1.016498;
				glasses = "None";
			};
			class JiriBrdlik {
				name = "Jiri Brdlik";
				face = "Face48";
				speaker = "Peter";
				pitch = 1.042041;
				glasses = "None";
			};
			class FrantisekBoula {
				name = "Frantisek Boula";
				face = "Face18";
				speaker = "Patrick";
				pitch = 0.905475;
				glasses = "None";
			};
			class JakubVacek {
				name = "Jakub Vacek";
				face = "Face33";
				speaker = "Peter";
				pitch = 1.085559;
				glasses = "None";
			};
			class OndrejStejner {
				name = "Ondrej Stejner";
				face = "Face31";
				speaker = "Ted";
				pitch = 0.99021;
				glasses = "None";
			};
			class FrantisekFenikl {
				name = "Frantisek Fenikl";
				face = "Face38";
				speaker = "George";
				pitch = 0.980133;
				glasses = "None";
			};
			class BohuslavAdamus {
				name = "Bohuslav Adamus";
				face = "Face20";
				speaker = "Jonah";
				pitch = 0.917688;
				glasses = "None";
			};
			class VaclavJumr {
				name = "Vaclav Jumr";
				face = "Face26";
				speaker = "Paul";
				pitch = 1.072272;
				glasses = "None";
			};
			class MiroslavTalavana {
				name = "Miroslav Talavana";
				face = "Face22";
				speaker = "Peter";
				pitch = 1.004498;
				glasses = "Spectacles";
			};
			class PavelStejdl {
				name = "Pavel Stejdl";
				face = "Face42";
				speaker = "Jonah";
				pitch = 1.021936;
				glasses = "None";
			};
			class AntoninCirek {
				name = "Antonin Cirek";
				face = "Face34";
				speaker = "Greg";
				pitch = 0.952911;
				glasses = "Spectacles";
			};
			class JakubCervinka {
				name = "Jakub Cervinka";
				face = "Face22";
				speaker = "Tom";
				pitch = 0.970312;
				glasses = "None";
			};
			class LubosCipro {
				name = "Lubos Cipro";
				face = "Face31";
				speaker = "Patrick";
				pitch = 1.098047;
				glasses = "Spectacles";
			};
			class FrantisekKosata {
				name = "Frantisek Kosata";
				face = "Face48";
				speaker = "John";
				pitch = 1.014673;
				glasses = "None";
			};
			class JosefStock {
				name = "Josef Stock";
				face = "Face11";
				speaker = "Paul";
				pitch = 0.935754;
				glasses = "Sunglasses";
			};
			class KarelJizba {
				name = "Karel Jizba";
				face = "Face7";
				speaker = "Jonah";
				pitch = 1.034784;
				glasses = "None";
			};
			class JiriJakimeczsko {
				name = "Jiri Jakimeczsko";
				face = "Face35";
				speaker = "Tom";
				pitch = 1.096466;
				glasses = "None";
			};
			class IvanStarovic {
				name = "Ivan Starovic";
				face = "Face12";
				speaker = "Ted";
				pitch = 0.990289;
				glasses = "None";
			};
			class ZbynekKozmik {
				name = "Zbynek Kozmik";
				face = "Face10";
				speaker = "Rob";
				pitch = 0.985089;
				glasses = "Sunglasses";
			};
			class AlesCihelka {
				name = "Ales Cihelka";
				face = "Face24";
				speaker = "Rob";
				pitch = 0.950885;
				glasses = "None";
			};
			class LudvikJuricko {
				name = "Ludvik Juricko";
				face = "Face43";
				speaker = "George";
				pitch = 1.09574;
				glasses = "None";
			};
			class StanislavTaiber {
				name = "Stanislav Taiber";
				face = "Face16";
				speaker = "Paul";
				pitch = 0.977295;
				glasses = "None";
			};
			class BohumilBridr {
				name = "Bohumil Bridr";
				face = "Face44";
				speaker = "John";
				pitch = 1.022699;
				glasses = "None";
			};
			class MichalTabacek {
				name = "Michal Tabacek";
				face = "Face41";
				speaker = "Dan";
				pitch = 0.922986;
				glasses = "None";
			};
			class AntoninBrdek {
				name = "Antonin Brdek";
				face = "Face14";
				speaker = "George";
				pitch = 0.999805;
				glasses = "None";
			};
			class PetrMunkaci {
				name = "Petr Munkaci";
				face = "FaceR01";
				speaker = "Peter";
				pitch = 1.077234;
				glasses = "None";
			};
			class OndrejPerman {
				name = "Ondrej Perman";
				face = "Face41";
				speaker = "Marc";
				pitch = 0.93703;
				glasses = "None";
			};
			class FrantisekAbik {
				name = "Frantisek Abik";
				face = "Face28";
				speaker = "Rob";
				pitch = 0.996326;
				glasses = "None";
			};
			class EduardMysak {
				name = "Eduard Mysak";
				face = "Face28";
				speaker = "Tom";
				pitch = 1.039356;
				glasses = "None";
			};
			class KamilMustafa {
				name = "Kamil Mustafa";
				face = "Face8";
				speaker = "John";
				pitch = 1.051257;
				glasses = "None";
			};
			class JiriDanek {
				name = "Jiri Danek";
				face = "Face19";
				speaker = "Adam";
				pitch = 0.922546;
				glasses = "None";
			};
			class BohumilStanko {
				name = "Bohumil Stanko";
				face = "Default";
				speaker = "Peter";
				pitch = 1.095685;
				glasses = "None";
			};
			class JanJirista {
				name = "Jan Jirista";
				face = "Face45";
				speaker = "Peter";
				pitch = 1.068091;
				glasses = "None";
			};
			class JiriTabulka {
				name = "Jiri Tabulka";
				face = "Face48";
				speaker = "Rich";
				pitch = 1.071765;
				glasses = "None";
			};
			class VaclavKotelnicky {
				name = "Vaclav Kotelnicky";
				face = "Face42";
				speaker = "Tom";
				pitch = 0.990057;
				glasses = "None";
			};
			class AloisMynarik {
				name = "Alois Mynarik";
				face = "Face26";
				speaker = "John";
				pitch = 0.978705;
				glasses = "None";
			};
			class JanOhlidal {
				name = "Jan Ohlidal";
				face = "Face16";
				speaker = "Jonah";
				pitch = 0.958661;
				glasses = "None";
			};
			class JanJurecka {
				name = "Jan Jurecka";
				face = "Face9";
				speaker = "John";
				pitch = 0.909131;
				glasses = "Sunglasses";
			};
			class AloisNedorost {
				name = "Alois Nedorost";
				face = "Face3";
				speaker = "Patrick";
				pitch = 1.017773;
				glasses = "None";
			};
			class JiriKrubr {
				name = "Jiri Krubr";
				face = "Face7";
				speaker = "Rob";
				pitch = 1.018036;
				glasses = "None";
			};
			class JanStehnij {
				name = "Jan Stehnij";
				face = "Face1";
				speaker = "Ted";
				pitch = 1.093298;
				glasses = "None";
			};
			class JanBouchner {
				name = "Jan Bouchner";
				face = "Face40";
				speaker = "Paul";
				pitch = 0.9539;
				glasses = "None";
			};
			class ReneKoukal {
				name = "Rene Koukal";
				face = "Face10";
				speaker = "Adam";
				pitch = 0.972485;
				glasses = "None";
			};
			class KarelAdam {
				name = "Karel Adam";
				face = "Face38";
				speaker = "Peter";
				pitch = 0.990723;
				glasses = "None";
			};
			class JaromirBrejcha {
				name = "Jaromir Brejcha";
				face = "Face48";
				speaker = "Greg";
				pitch = 1.010608;
				glasses = "None";
			};
			class PavelMikulencak {
				name = "Pavel Mikulencak";
				face = "Face45";
				speaker = "Peter";
				pitch = 0.929334;
				glasses = "None";
			};
			class JiriBreta {
				name = "Jiri Breta";
				face = "Face28";
				speaker = "Tom";
				pitch = 1.098029;
				glasses = "None";
			};
			class BrunoSiba {
				name = "Bruno Siba";
				face = "Face15";
				speaker = "Peter";
				pitch = 1.094409;
				glasses = "None";
			};
			class JosefTacha {
				name = "Josef Tacha";
				face = "Face10";
				speaker = "Dan";
				pitch = 0.940887;
				glasses = "None";
			};
			class JirriOrtner {
				name = "Jirri Ortner";
				face = "Face31";
				speaker = "Paul";
				pitch = 1.0383;
				glasses = "None";
			};
			class MilanSilverio {
				name = "Milan Silverio";
				face = "Face31";
				speaker = "Ted";
				pitch = 0.923016;
				glasses = "None";
			};
			class FilipKunce {
				name = "Filip Kunce";
				face = "Face1";
				speaker = "Adam";
				pitch = 1.031464;
				glasses = "None";
			};
			class JakubHavlin {
				name = "Jakub Havlin";
				face = "FaceR01";
				speaker = "Jonah";
				pitch = 1.09245;
				glasses = "None";
			};
			class JiriStehlik {
				name = "Jiri Stehlik";
				face = "Face39";
				speaker = "Patrick";
				pitch = 1.010992;
				glasses = "None";
			};
			class VilemVesely {
				name = "Vilem Vesely";
				face = "Face17";
				speaker = "Rob";
				pitch = 1.084979;
				glasses = "None";
			};
			class JosefBoucek {
				name = "Josef Boucek";
				face = "Face39";
				speaker = "Tom";
				pitch = 1.094653;
				glasses = "None";
			};
			class FrantisekCiza {
				name = "Frantisek Ciza";
				face = "Face35";
				speaker = "George";
				pitch = 0.955737;
				glasses = "Spectacles";
			};
			class JiriCintl {
				name = "Jiri Cintl";
				face = "Face5";
				speaker = "Patrick";
				pitch = 1.05694;
				glasses = "None";
			};
			class MiroslavTejc {
				name = "Miroslav Tejc";
				face = "Face10";
				speaker = "Greg";
				pitch = 1.08833;
				glasses = "None";
			};
			class AloisVicherek {
				name = "Alois Vicherek";
				face = "Face10";
				speaker = "Ted";
				pitch = 0.996692;
				glasses = "Spectacles";
			};
			class MartinBitomsky {
				name = "Martin Bitomsky";
				face = "Face15";
				speaker = "John";
				pitch = 0.955975;
				glasses = "None";
			};
			class MilanJuhanak {
				name = "Milan Juhanak";
				face = "Face9";
				speaker = "Patrick";
				pitch = 0.958478;
				glasses = "None";
			};
			class FrantisekOberfalcer {
				name = "Frantisek Oberfalcer";
				face = "Face47";
				speaker = "Paul";
				pitch = 1.083905;
				glasses = "Sunglasses";
			};
			class AntoninNedved {
				name = "Antonin Nedved";
				face = "Face30";
				speaker = "Patrick";
				pitch = 0.956213;
				glasses = "None";
			};
			class FrantisekSido {
				name = "Frantisek Sido";
				face = "Face38";
				speaker = "Peter";
				pitch = 0.907343;
				glasses = "None";
			};
			class FrantisekBlahak {
				name = "Frantisek Blahak";
				face = "Face32";
				speaker = "Tom";
				pitch = 0.926251;
				glasses = "None";
			};
			class JiriBradac {
				name = "Jiri Bradac";
				face = "Face39";
				speaker = "Peter";
				pitch = 1.029956;
				glasses = "None";
			};
			class LubomirCipl {
				name = "Lubomir Cipl";
				face = "Face27";
				speaker = "Paul";
				pitch = 1.081317;
				glasses = "None";
			};
			class EvzenKotera {
				name = "Evzen Kotera";
				face = "Face44";
				speaker = "George";
				pitch = 1.031262;
				glasses = "None";
			};
			class RomanGlass {
				name = "Roman Glass";
				face = "Face12";
				speaker = "John";
				pitch = 1.097339;
				glasses = "Sunglasses";
			};
			class JakubNagaj {
				name = "Jakub Nagaj";
				face = "Face4";
				speaker = "George";
				pitch = 1.013623;
				glasses = "None";
			};
			class JiriKula {
				name = "Jiri Kula";
				face = "Face9";
				speaker = "Dan";
				pitch = 1.098682;
				glasses = "None";
			};
			class PremyslAndel {
				name = "Premysl Andel";
				face = "Face15";
				speaker = "Dan";
				pitch = 0.964386;
				glasses = "None";
			};
			class JiriNastoupil {
				name = "Jiri Nastoupil";
				face = "Face26";
				speaker = "Tom";
				pitch = 0.970721;
				glasses = "None";
			};
			class LudvikVetecha {
				name = "Ludvik Vetecha";
				face = "Face19";
				speaker = "Rich";
				pitch = 0.977295;
				glasses = "None";
			};
			class FrantisekFahek {
				name = "Frantisek Fahek";
				face = "Face26";
				speaker = "Adam";
				pitch = 1.07478;
				glasses = "None";
			};
			class AdolfFelbinger {
				name = "Adolf Felbinger";
				face = "Face22";
				speaker = "George";
				pitch = 1.056409;
				glasses = "None";
			};
			class JaroslavMutinsky {
				name = "Jaroslav Mutinsky";
				face = "Face30";
				speaker = "Adam";
				pitch = 0.951624;
				glasses = "None";
			};
			class JanVanzura {
				name = "Jan Vanzura";
				face = "Face32";
				speaker = "Jonah";
				pitch = 0.988324;
				glasses = "None";
			};
			class JiriKounovsky {
				name = "Jiri Kounovsky";
				face = "Face8";
				speaker = "Tom";
				pitch = 0.982361;
				glasses = "None";
			};
			class PavelNaroda {
				name = "Pavel Naroda";
				face = "Face13";
				speaker = "Greg";
				pitch = 1.044379;
				glasses = "None";
			};
			class JosefDaransky {
				name = "Josef Daransky";
				face = "Face50";
				speaker = "George";
				pitch = 1.025885;
				glasses = "Sunglasses";
			};
			class JosefBrentner {
				name = "Josef Brentner";
				face = "Face39";
				speaker = "George";
				pitch = 1.037909;
				glasses = "None";
			};
			class AdolfCisarovsky {
				name = "Adolf Cisarovsky";
				face = "Face11";
				speaker = "Peter";
				pitch = 1.048694;
				glasses = "None";
			};
			class JaroslavNapravnik {
				name = "Jaroslav Napravnik";
				face = "Face42";
				speaker = "Paul";
				pitch = 0.954297;
				glasses = "None";
			};
			class KarelBjalek {
				name = "Karel Bjalek";
				face = "Face51";
				speaker = "Marc";
				pitch = 1.016272;
				glasses = "None";
			};
			class JosefKukura {
				name = "Josef Kukura";
				face = "Face22";
				speaker = "Patrick";
				pitch = 1.000696;
				glasses = "None";
			};
			class JanDobejval {
				name = "Jan Dobejval";
				face = "Face46";
				speaker = "Patrick";
				pitch = 1.075549;
				glasses = "None";
			};
			class AlexandrSiger {
				name = "Alexandr Siger";
				face = "Face12";
				speaker = "George";
				pitch = 0.920532;
				glasses = "None";
			};
			class JaroslavMusialek {
				name = "Jaroslav Musialek";
				face = "Face49";
				speaker = "Rich";
				pitch = 0.951801;
				glasses = "None";
			};
			class BohuslavFilipinsky {
				name = "Bohuslav Filipinsky";
				face = "Face24";
				speaker = "Peter";
				pitch = 1.055359;
				glasses = "None";
			};
			class BohuslavBrandl {
				name = "Bohuslav Brandl";
				face = "Face4";
				speaker = "Peter";
				pitch = 1.052478;
				glasses = "Spectacles";
			};
			class ZdenekJahn {
				name = "Zdenek Jahn";
				face = "Face36";
				speaker = "Adam";
				pitch = 1.039496;
				glasses = "None";
			};
			class AdolfFormanek {
				name = "Adolf Formanek";
				face = "Face4";
				speaker = "Patrick";
				pitch = 1.049689;
				glasses = "None";
			};
			class EmilMrvik {
				name = "Emil Mrvik";
				face = "Face10";
				speaker = "Marc";
				pitch = 0.930395;
				glasses = "None";
			};
			class KarelNatali {
				name = "Karel Natali";
				face = "Face11";
				speaker = "Jonah";
				pitch = 1.037952;
				glasses = "None";
			};
			class BohumilCikanek {
				name = "Bohumil Cikanek";
				face = "Face15";
				speaker = "George";
				pitch = 0.973102;
				glasses = "None";
			};
			class JiriKozlovcev {
				name = "Jiri Kozlovcev";
				face = "Face9";
				speaker = "Marc";
				pitch = 1.018842;
				glasses = "None";
			};
			class FrantisekJarousek {
				name = "Frantisek Jarousek";
				face = "Face5";
				speaker = "Marc";
				pitch = 1.078748;
				glasses = "None";
			};
			class AlesStejskal {
				name = "Ales Stejskal";
				face = "Face39";
				speaker = "Tom";
				pitch = 1.060767;
				glasses = "None";
			};
			class MichalStarove {
				name = "Michal Starove";
				face = "Face14";
				speaker = "Ted";
				pitch = 1.068243;
				glasses = "None";
			};
			class KornelStopek {
				name = "Kornel Stopek";
				face = "Face20";
				speaker = "Rob";
				pitch = 1.059357;
				glasses = "None";
			};
			class JanStiebek {
				name = "Jan Stiebek";
				face = "Face14";
				speaker = "Rob";
				pitch = 1.002741;
				glasses = "None";
			};
			class MilanJurceka {
				name = "Milan Jurceka";
				face = "Face13";
				speaker = "John";
				pitch = 0.976166;
				glasses = "None";
			};
			class JanFenyko {
				name = "Jan Fenyko";
				face = "Face18";
				speaker = "Dan";
				pitch = 1.037775;
				glasses = "Spectacles";
			};
			class DanielJouda {
				name = "Daniel Jouda";
				face = "Face18";
				speaker = "Dan";
				pitch = 0.92995;
				glasses = "None";
			};
			class LukasCernoch {
				name = "Lukas Cernoch";
				face = "Face7";
				speaker = "Rob";
				pitch = 0.992981;
				glasses = "None";
			};
			class AntoninCizner {
				name = "Antonin Cizner";
				face = "Face38";
				speaker = "Rob";
				pitch = 1.072491;
				glasses = "None";
			};
			class JosefMrstik {
				name = "Josef Mrstik";
				face = "Face20";
				speaker = "Dan";
				pitch = 0.983337;
				glasses = "None";
			};
			class TomasBoura {
				name = "Tomas Boura";
				face = "Face21";
				speaker = "Ted";
				pitch = 0.977765;
				glasses = "None";
			};
			class JaroslavKostejn {
				name = "Jaroslav Kostejn";
				face = "Face3";
				speaker = "Peter";
				pitch = 1.067639;
				glasses = "None";
			};
			class JanTachezy {
				name = "Jan Tachezy";
				face = "Face18";
				speaker = "Tom";
				pitch = 1.085303;
				glasses = "None";
			};
			class KarelFiala {
				name = "Karel Fiala";
				face = "Face49";
				speaker = "Patrick";
				pitch = 1.049072;
				glasses = "None";
			};
			class AntoninJob {
				name = "Antonin Job";
				face = "Face41";
				speaker = "Ted";
				pitch = 1.085431;
				glasses = "None";
			};
			class KarelAnderka {
				name = "Karel Anderka";
				face = "Face32";
				speaker = "Rich";
				pitch = 0.952551;
				glasses = "Spectacles";
			};
			class JosefFilous {
				name = "Josef Filous";
				face = "Face39";
				speaker = "Ted";
				pitch = 1.074426;
				glasses = "None";
			};
			class AntoninDaskalov {
				name = "Antonin Daskalov";
				face = "Face48";
				speaker = "Jonah";
				pitch = 0.916968;
				glasses = "None";
			};
			class PavelKoudelka {
				name = "Pavel Koudelka";
				face = "Face25";
				speaker = "Paul";
				pitch = 1.076294;
				glasses = "None";
			};
			class OndrejHoryna {
				name = "Ondrej Horyna";
				face = "Face42";
				speaker = "Paul";
				pitch = 0.963153;
				glasses = "None";
			};
			class AntoninNavara {
				name = "Antonin Navara";
				face = "Face48";
				speaker = "Rich";
				pitch = 1.01236;
				glasses = "None";
			};
			class KarelMur {
				name = "Karel Mur";
				face = "Face6";
				speaker = "Patrick";
				pitch = 1.071674;
				glasses = "None";
			};
			class AlesKozelka {
				name = "Ales Kozelka";
				face = "Face47";
				speaker = "Rob";
				pitch = 0.935474;
				glasses = "None";
			};
			class JiriCihlar {
				name = "Jiri Cihlar";
				face = "Face41";
				speaker = "Paul";
				pitch = 1.005524;
				glasses = "None";
			};
			class FrantisekDicka {
				name = "Frantisek Dicka";
				face = "Face10";
				speaker = "Rob";
				pitch = 0.984296;
				glasses = "None";
			};
			class MartinCiklamini {
				name = "Martin Ciklamini";
				face = "Face45";
				speaker = "Adam";
				pitch = 0.923785;
				glasses = "None";
			};
			class ArnostCetkovsky {
				name = "Arnost Cetkovsky";
				face = "Face9";
				speaker = "Paul";
				pitch = 0.998645;
				glasses = "None";
			};
			class JanAndera {
				name = "Jan Andera";
				face = "Face29";
				speaker = "George";
				pitch = 1.035761;
				glasses = "None";
			};
			class PavelStejny {
				name = "Pavel Stejny";
				face = "Face32";
				speaker = "John";
				pitch = 1.015082;
				glasses = "None";
			};
			class EmanuelStanke {
				name = "Emanuel Stanke";
				face = "Face10";
				speaker = "Greg";
				pitch = 0.991992;
				glasses = "None";
			};
			class JaroslavDezinsky {
				name = "Jaroslav Dezinsky";
				face = "Face16";
				speaker = "Marc";
				pitch = 1.071082;
				glasses = "None";
			};
			class JiriJosr {
				name = "Jiri Josr";
				face = "Face4";
				speaker = "George";
				pitch = 0.968335;
				glasses = "None";
			};
			class FrantisekBouc {
				name = "Frantisek Bouc";
				face = "Face16";
				speaker = "Patrick";
				pitch = 0.962;
				glasses = "None";
			};
			class MiroslavSiedem {
				name = "Miroslav Siedem";
				face = "Face41";
				speaker = "Dan";
				pitch = 0.956488;
				glasses = "None";
			};
			class AntoninJiskra {
				name = "Antonin Jiskra";
				face = "Face16";
				speaker = "Paul";
				pitch = 0.915997;
				glasses = "None";
			};
			class DavidCirkovsky {
				name = "David Cirkovsky";
				face = "Face36";
				speaker = "Patrick";
				pitch = 0.968024;
				glasses = "None";
			};
			class JaromirBrbensky {
				name = "Jaromir Brbensky";
				face = "Face52";
				speaker = "Peter";
				pitch = 1.040179;
				glasses = "None";
			};
			class BohuslavMrva {
				name = "Bohuslav Mrva";
				face = "Face6";
				speaker = "Patrick";
				pitch = 1.068561;
				glasses = "None";
			};
			class MichaelBrazina {
				name = "Michael Brazina";
				face = "Face21";
				speaker = "Rich";
				pitch = 0.970856;
				glasses = "None";
			};
			class JiriFazekas {
				name = "Jiri Fazekas";
				face = "Face31";
				speaker = "Adam";
				pitch = 1.013605;
				glasses = "None";
			};
			class FrantisekMudrych {
				name = "Frantisek Mudrych";
				face = "Face26";
				speaker = "John";
				pitch = 1.054797;
				glasses = "None";
			};
			class TomasTrnka {
				name = "Tomas Trnka";
				face = "Default";
				speaker = "John";
				pitch = 1.006665;
				glasses = "None";
			};
			class MiroslavKosumbersky {
				name = "Miroslav Kosumbersky";
				face = "Face14";
				speaker = "Paul";
				pitch = 0.929565;
				glasses = "None";
			};
			class JiriMukarovsky {
				name = "Jiri Mukarovsky";
				face = "Face16";
				speaker = "John";
				pitch = 1.045843;
				glasses = "None";
			};
			class CenekBouma {
				name = "Cenek Bouma";
				face = "Face18";
				speaker = "Paul";
				pitch = 0.955579;
				glasses = "None";
			};
			class HynekSiedek {
				name = "Hynek Siedek";
				face = "Face6";
				speaker = "Rich";
				pitch = 1.024744;
				glasses = "None";
			};
			class RomanBrenza {
				name = "Roman Brenza";
				face = "FaceR01";
				speaker = "Rich";
				pitch = 1.07583;
				glasses = "None";
			};
			class AloisMuzika {
				name = "Alois Muzika";
				face = "Face21";
				speaker = "John";
				pitch = 1.09718;
				glasses = "Spectacles";
			};
			class KarelBrandejsky {
				name = "Karel Brandejsky";
				face = "Face42";
				speaker = "Greg";
				pitch = 0.927869;
				glasses = "None";
			};
			class DanielStibor {
				name = "Daniel Stibor";
				face = "Face22";
				speaker = "Ted";
				pitch = 1.083093;
				glasses = "None";
			};
			class VitezslavStarek {
				name = "Vitezslav Starek";
				face = "Face31";
				speaker = "Paul";
				pitch = 1.06579;
				glasses = "None";
			};
			class FrantisekSilovsky {
				name = "Frantisek Silovsky";
				face = "Face19";
				speaker = "Paul";
				pitch = 0.918829;
				glasses = "None";
			};
			class LadislavTaks {
				name = "Ladislav Taks";
				face = "Default";
				speaker = "Tom";
				pitch = 1.041943;
				glasses = "None";
			};
			class JiriBrejnik {
				name = "Jiri Brejnik";
				face = "Face23";
				speaker = "Greg";
				pitch = 0.967767;
				glasses = "None";
			};
			class JosefJahodar {
				name = "Josef Jahodar";
				face = "Face48";
				speaker = "Jonah";
				pitch = 1.064307;
				glasses = "None";
			};
			class AntoninBitnar {
				name = "Antonin Bitnar";
				face = "Default";
				speaker = "John";
				pitch = 1.005609;
				glasses = "None";
			};
			class JanFilz {
				name = "Jan Filz";
				face = "Face37";
				speaker = "Marc";
				pitch = 1.07666;
				glasses = "None";
			};
			class JanTalich {
				name = "Jan Talich";
				face = "FaceR01";
				speaker = "Rob";
				pitch = 0.971289;
				glasses = "None";
			};
			class RudolfCinolter {
				name = "Rudolf Cinolter";
				face = "Face22";
				speaker = "Greg";
				pitch = 1.039166;
				glasses = "None";
			};
			class FrantisekTaftl {
				name = "Frantisek Taftl";
				face = "Face17";
				speaker = "Patrick";
				pitch = 1.090302;
				glasses = "None";
			};
			class VaclavCippr {
				name = "Vaclav Cippr";
				face = "Default";
				speaker = "Jonah";
				pitch = 1.025079;
				glasses = "None";
			};
			class VladislavForman {
				name = "Vladislav Forman";
				face = "Face48";
				speaker = "George";
				pitch = 0.90993;
				glasses = "None";
			};
			class MilanNad {
				name = "Milan Nad";
				face = "Face28";
				speaker = "Marc";
				pitch = 1.045941;
				glasses = "None";
			};
			class VaclavFejka {
				name = "Vaclav Fejka";
				face = "Face3";
				speaker = "Tom";
				pitch = 1.092615;
				glasses = "None";
			};
			class JaroslavTahovsky {
				name = "Jaroslav Tahovsky";
				face = "Face51";
				speaker = "Jonah";
				pitch = 1.040289;
				glasses = "None";
			};
			class AntoninBrany {
				name = "Antonin Brany";
				face = "Face10";
				speaker = "Rich";
				pitch = 0.90177;
				glasses = "None";
			};
			class JanCikler {
				name = "Jan Cikler";
				face = "Face9";
				speaker = "Dan";
				pitch = 1.092786;
				glasses = "None";
			};
			class JanSilvar {
				name = "Jan Silvar";
				face = "Face51";
				speaker = "Tom";
				pitch = 0.952301;
				glasses = "Spectacles";
			};
			class LubomirSibek {
				name = "Lubomir Sibek";
				face = "Face29";
				speaker = "Tom";
				pitch = 0.942627;
				glasses = "None";
			};
			class EmilMyjavec {
				name = "Emil Myjavec";
				face = "Face23";
				speaker = "Dan";
				pitch = 0.987433;
				glasses = "None";
			};
			class MarekStonis {
				name = "Marek Stonis";
				face = "Face2";
				speaker = "Paul";
				pitch = 1.074542;
				glasses = "None";
			};
			class JanBrandys {
				name = "Jan Brandys";
				face = "Face22";
				speaker = "Peter";
				pitch = 1.089801;
				glasses = "None";
			};
			class Miroslavdistl {
				name = "Miroslav distl";
				face = "Face48";
				speaker = "Jonah";
				pitch = 0.931616;
				glasses = "None";
			};
			class VitClar {
				name = "Vit Clar";
				face = "Face32";
				speaker = "Rob";
				pitch = 1.056335;
				glasses = "None";
			};
			class LudvikBlaha {
				name = "Ludvik Blaha";
				face = "Face31";
				speaker = "Dan";
				pitch = 0.946356;
				glasses = "None";
			};
			class BorisStanka {
				name = "Boris Stanka";
				face = "Default";
				speaker = "John";
				pitch = 0.935248;
				glasses = "None";
			};
			class JaromirNasaurcky {
				name = "Jaromir Nasaurcky";
				face = "Face27";
				speaker = "John";
				pitch = 1.07182;
				glasses = "Sunglasses";
			};
			class JaroslavJobbik {
				name = "Jaroslav Jobbik";
				face = "Face7";
				speaker = "Adam";
				pitch = 1.091089;
				glasses = "None";
			};
			class AgerJosef {
				name = "Ager Josef";
				face = "Face36";
				speaker = "George";
				pitch = 1.097668;
				glasses = "None";
			};
			class JosefJagrig {
				name = "Josef Jagrig";
				face = "Face42";
				speaker = "Patrick";
				pitch = 0.929144;
				glasses = "None";
			};
			class KarelMuknsnabl {
				name = "Karel Muknsnabl";
				face = "Face26";
				speaker = "Paul";
				pitch = 1.077032;
				glasses = "None";
			};
			class LadislavVanner {
				name = "Ladislav Vanner";
				face = "Default";
				speaker = "John";
				pitch = 1.062244;
				glasses = "None";
			};
			class JiriJitersky {
				name = "Jiri Jitersky";
				face = "Face20";
				speaker = "Marc";
				pitch = 1.064343;
				glasses = "None";
			};
			class IvanAndjelic {
				name = "Ivan Andjelic";
				face = "Face3";
				speaker = "Patrick";
				pitch = 1.035522;
				glasses = "None";
			};
			class FrantisekNedomlel {
				name = "Frantisek Nedomlel";
				face = "Face24";
				speaker = "Adam";
				pitch = 1.052808;
				glasses = "None";
			};
			class JanSichler {
				name = "Jan Sichler";
				face = "Face32";
				speaker = "Peter";
				pitch = 1.043262;
				glasses = "None";
			};
			class JanCon {
				name = "Jan Con";
				face = "Face30";
				speaker = "Patrick";
				pitch = 1.052087;
				glasses = "None";
			};
			class JindrichStarka {
				name = "Jindrich Starka";
				face = "Face33";
				speaker = "Tom";
				pitch = 1.043274;
				glasses = "None";
			};
			class OldrichMunzil {
				name = "Oldrich Munzil";
				face = "Face13";
				speaker = "Dan";
				pitch = 1.03064;
				glasses = "Sunglasses";
			};
			class EduardMuricky {
				name = "Eduard Muricky";
				face = "Face50";
				speaker = "George";
				pitch = 0.9427;
				glasses = "None";
			};
			class FrantisekDevora {
				name = "Frantisek Devora";
				face = "Face3";
				speaker = "Rich";
				pitch = 1.086975;
				glasses = "None";
			};
			class IvanBrant {
				name = "Ivan Brant";
				face = "Face32";
				speaker = "Patrick";
				pitch = 0.990558;
				glasses = "None";
			};
			class RomanFedermann {
				name = "Roman Federmann";
				face = "Face33";
				speaker = "Paul";
				pitch = 0.917261;
				glasses = "None";
			};
			class MilanMusil {
				name = "Milan Musil";
				face = "Face16";
				speaker = "Tom";
				pitch = 0.984064;
				glasses = "None";
			};
			class BretislavNedbalek {
				name = "Bretislav Nedbalek";
				face = "Face38";
				speaker = "Jonah";
				pitch = 0.990326;
				glasses = "None";
			};
			class RudolfJaca {
				name = "Rudolf Jaca";
				face = "Face25";
				speaker = "Paul";
				pitch = 1.024878;
				glasses = "None";
			};
			class BorivojBoukal {
				name = "Borivoj Boukal";
				face = "Face40";
				speaker = "John";
				pitch = 1.020007;
				glasses = "None";
			};
			class PetrStenberk {
				name = "Petr Stenberk";
				face = "Face22";
				speaker = "Patrick";
				pitch = 0.985028;
				glasses = "None";
			};
			class MiloslavNadrchal {
				name = "Miloslav Nadrchal";
				face = "Face3";
				speaker = "Jonah";
				pitch = 0.96366;
				glasses = "None";
			};
			class JanGranat {
				name = "Jan Granat";
				face = "Face23";
				speaker = "John";
				pitch = 0.985901;
				glasses = "None";
			};
			class BedrichStibora {
				name = "Bedrich Stibora";
				face = "Face31";
				speaker = "Patrick";
				pitch = 0.953314;
				glasses = "None";
			};
			class JosefNecesal {
				name = "Josef Necesal";
				face = "Face37";
				speaker = "Peter";
				pitch = 1.082104;
				glasses = "None";
			};
			class MartinDoborvolny {
				name = "Martin Doborvolny";
				face = "Face51";
				speaker = "Jonah";
				pitch = 1.092273;
				glasses = "None";
			};
			class AntoninKrampera {
				name = "Antonin Krampera";
				face = "Face11";
				speaker = "Jonah";
				pitch = 1.057324;
				glasses = "None";
			};
			class JiriCisar {
				name = "Jiri Cisar";
				face = "Face49";
				speaker = "Paul";
				pitch = 1.019367;
				glasses = "Spectacles";
			};
			class MiroslavKousalik {
				name = "Miroslav Kousalik";
				face = "Face49";
				speaker = "Marc";
				pitch = 1.010535;
				glasses = "None";
			};
			class LadislavJosza {
				name = "Ladislav Josza";
				face = "Face21";
				speaker = "Patrick";
				pitch = 1.026739;
				glasses = "None";
			};
			class AntoninKrubner {
				name = "Antonin Krubner";
				face = "Face11";
				speaker = "Jonah";
				pitch = 0.964423;
				glasses = "None";
			};
			class JiriNalezenec {
				name = "Jiri Nalezenec";
				face = "Face18";
				speaker = "George";
				pitch = 0.948926;
				glasses = "None";
			};
			class JiriVetron {
				name = "Jiri Vetron";
				face = "Face23";
				speaker = "Ted";
				pitch = 1.077698;
				glasses = "None";
			};
			class MiloslavVlcek {
				name = "Miloslav Vlcek";
				face = "Face11";
				speaker = "Rob";
				pitch = 0.9633;
				glasses = "None";
			};
			class OldrichNavratil {
				name = "Oldrich Navratil";
				face = "Face3";
				speaker = "John";
				pitch = 0.999323;
				glasses = "Spectacles";
			};
			class TomasAbels {
				name = "Tomas Abels";
				face = "Face28";
				speaker = "Tom";
				pitch = 0.938263;
				glasses = "None";
			};
			class EvzenDobroruka {
				name = "Evzen Dobroruka";
				face = "Face9";
				speaker = "John";
				pitch = 1.013715;
				glasses = "None";
			};
			class EduardAndrejsek {
				name = "Eduard Andrejsek";
				face = "Face35";
				speaker = "Paul";
				pitch = 0.963745;
				glasses = "Spectacles";
			};
			class RichardNaske {
				name = "Richard Naske";
				face = "Face45";
				speaker = "Tom";
				pitch = 0.950726;
				glasses = "None";
			};
			class EmilJakl {
				name = "Emil Jakl";
				face = "Face38";
				speaker = "Rich";
				pitch = 0.966522;
				glasses = "None";
			};
			class IvoStomilovic {
				name = "Ivo Stomilovic";
				face = "Face31";
				speaker = "Peter";
				pitch = 1.063916;
				glasses = "None";
			};
			class AlesStehno {
				name = "Ales Stehno";
				face = "Face21";
				speaker = "Adam";
				pitch = 0.952704;
				glasses = "None";
			};
			class JanSteklik {
				name = "Jan Steklik";
				face = "Face34";
				speaker = "Rob";
				pitch = 1.043738;
				glasses = "None";
			};
			class AdolfCir {
				name = "Adolf Cir";
				face = "Face51";
				speaker = "Rob";
				pitch = 0.984106;
				glasses = "None";
			};
			class JosefJourda {
				name = "Josef Jourda";
				face = "Face34";
				speaker = "John";
				pitch = 1.040326;
				glasses = "None";
			};
			class AloisKrouzek {
				name = "Alois Krouzek";
				face = "Face52";
				speaker = "Tom";
				pitch = 0.908624;
				glasses = "None";
			};
			class AntoninBlacky {
				name = "Antonin Blacky";
				face = "Face44";
				speaker = "Tom";
				pitch = 0.926715;
				glasses = "None";
			};
			class JanStor {
				name = "Jan Stor";
				face = "Face38";
				speaker = "Peter";
				pitch = 1.013055;
				glasses = "None";
			};
			class EduardMuzak {
				name = "Eduard Muzak";
				face = "Face7";
				speaker = "Greg";
				pitch = 0.995801;
				glasses = "None";
			};
			class JanMusel {
				name = "Jan Musel";
				face = "Face44";
				speaker = "Ted";
				pitch = 1.076422;
				glasses = "None";
			};
			class JanMikulcak {
				name = "Jan Mikulcak";
				face = "Face39";
				speaker = "Tom";
				pitch = 0.905334;
				glasses = "None";
			};
		};
	};
	class Civilian {
		class Soldiers {
			class MarekSpanel {
				name = "Marek Spanel";
				face = "Face1";
				speaker = "John";
				pitch = 1.08316;
				glasses = "None";
			};
			class OndrejNovak {
				name = "Ondrej Novak";
				face = "Face35";
				speaker = "Peter";
				pitch = 0.987384;
				glasses = "None";
			};
			class JiriMartinek {
				name = "Jiri Martinek";
				face = "Face47";
				speaker = "Ted";
				pitch = 1.071466;
				glasses = "None";
			};
			class OndrejSpanel {
				name = "Ondrej Spanel";
				face = "Face1";
				speaker = "Rob";
				pitch = 0.93537;
				glasses = "None";
			};
			class ViktorBocan {
				name = "Viktor Bocan";
				face = "Face17";
				speaker = "Rich";
				pitch = 1.092462;
				glasses = "None";
			};
			class RobertStipek {
				name = "Robert Stipek";
				face = "Face2";
				speaker = "Adam";
				pitch = 0.972522;
				glasses = "None";
			};
			class VojtechNovak {
				name = "Vojtech Novak";
				face = "Face20";
				speaker = "Ted";
				pitch = 0.954614;
				glasses = "None";
			};
			class AdamBilek {
				name = "Adam Bilek";
				face = "Face17";
				speaker = "Ted";
				pitch = 1.069311;
				glasses = "None";
			};
			class RadanDoubrava {
				name = "Radan Doubrava";
				face = "Face22";
				speaker = "Patrick";
				pitch = 1.023651;
				glasses = "None";
			};
			class JanKraml {
				name = "Jan Kraml";
				face = "Face52";
				speaker = "George";
				pitch = 0.949597;
				glasses = "None";
			};
			class KarelMatejka {
				name = "Karel Matejka";
				face = "Face51";
				speaker = "Peter";
				pitch = 0.98396;
				glasses = "Sunglasses";
			};
			class PetrVisek {
				name = "Petr Visek";
				face = "Face30";
				speaker = "Greg";
				pitch = 1.070935;
				glasses = "None";
			};
			class PetrPechar {
				name = "Petr Pechar";
				face = "Face34";
				speaker = "Paul";
				pitch = 1.020398;
				glasses = "None";
			};
			class JanHovora {
				name = "Jan Hovora";
				face = "Face25";
				speaker = "Rob";
				pitch = 1.051868;
				glasses = "None";
			};
			class AlesHradek {
				name = "Ales Hradek";
				face = "Face2";
				speaker = "Jonah";
				pitch = 1.035809;
				glasses = "None";
			};
			class JanHora {
				name = "Jan Hora";
				face = "Face52";
				speaker = "Adam";
				pitch = 0.968085;
				glasses = "Sunglasses";
			};
			class MartinBenes {
				name = "Martin Benes";
				face = "Face27";
				speaker = "Greg";
				pitch = 1.092194;
				glasses = "None";
			};
			class PetrBeranek {
				name = "Petr Beranek";
				face = "Face50";
				speaker = "Rob";
				pitch = 0.992816;
				glasses = "None";
			};
			class MartinDrbohlav {
				name = "Martin Drbohlav";
				face = "Face52";
				speaker = "Rich";
				pitch = 1.075873;
				glasses = "None";
			};
			class JindrichDuda {
				name = "Jindrich Duda";
				face = "Face50";
				speaker = "Adam";
				pitch = 0.940991;
				glasses = "None";
			};
			class JanHusak {
				name = "Jan Husak";
				face = "Face32";
				speaker = "George";
				pitch = 0.906775;
				glasses = "None";
			};
			class PavelHajecek {
				name = "Pavel Hajecek";
				face = "Face44";
				speaker = "Jonah";
				pitch = 1.069849;
				glasses = "None";
			};
			class JanHruby {
				name = "Jan Hruby";
				face = "Face40";
				speaker = "Paul";
				pitch = 0.965167;
				glasses = "None";
			};
			class ZbynekJanos {
				name = "Zbynek Janos";
				face = "Face24";
				speaker = "Paul";
				pitch = 0.961334;
				glasses = "None";
			};
			class MilanFink {
				name = "Milan Fink";
				face = "Face45";
				speaker = "Patrick";
				pitch = 0.927991;
				glasses = "None";
			};
			class ZdenekCipro {
				name = "Zdenek Cipro";
				face = "Face28";
				speaker = "Jonah";
				pitch = 0.993384;
				glasses = "None";
			};
			class TomasCetl {
				name = "Tomas Cetl";
				face = "Face49";
				speaker = "Dan";
				pitch = 0.995935;
				glasses = "Spectacles";
			};
			class RobertFerenc {
				name = "Robert Ferenc";
				face = "Face3";
				speaker = "Jonah";
				pitch = 0.934857;
				glasses = "None";
			};
			class MiloslavHerda {
				name = "Miloslav Herda";
				face = "Face37";
				speaker = "Rich";
				pitch = 1.042908;
				glasses = "Spectacles";
			};
			class JaromirHorak {
				name = "Jaromir Horak";
				face = "Face42";
				speaker = "George";
				pitch = 1.039191;
				glasses = "None";
			};
			class MichalJanicek {
				name = "Michal Janicek";
				face = "Face45";
				speaker = "Adam";
				pitch = 1.034619;
				glasses = "None";
			};
			class JanHromcik {
				name = "Jan Hromcik";
				face = "Face12";
				speaker = "Tom";
				pitch = 1.012018;
				glasses = "None";
			};
			class MatejBernard {
				name = "Matej Bernard";
				face = "Face25";
				speaker = "Ted";
				pitch = 1.051733;
				glasses = "None";
			};
			class VaclavKunasek {
				name = "Vaclav Kunasek";
				face = "Face22";
				speaker = "George";
				pitch = 1.050909;
				glasses = "None";
			};
			class BartolomejKvasnicka {
				name = "Bartolomej Kvasnicka";
				face = "Face30";
				speaker = "John";
				pitch = 0.932123;
				glasses = "None";
			};
			class JaroslavSmetana {
				name = "Jaroslav Smetana";
				face = "Face20";
				speaker = "Rich";
				pitch = 0.9216;
				glasses = "None";
			};
			class JiriSmrcka {
				name = "Jiri Smrcka";
				face = "Face7";
				speaker = "Paul";
				pitch = 0.927014;
				glasses = "None";
			};
			class MatejNovak {
				name = "Matej Novak";
				face = "Face34";
				speaker = "Greg";
				pitch = 1.042596;
				glasses = "None";
			};
			class FilipPaces {
				name = "Filip Paces";
				face = "Face4";
				speaker = "Dan";
				pitch = 1.070251;
				glasses = "None";
			};
			class MarekVondrak {
				name = "Marek Vondrak";
				face = "Face23";
				speaker = "Jonah";
				pitch = 0.945367;
				glasses = "None";
			};
			class RobertBrozovsky {
				name = "Robert Brozovsky";
				face = "Face29";
				speaker = "Greg";
				pitch = 1.024304;
				glasses = "None";
			};
			class DanielSnajdr {
				name = "Daniel Snajdr";
				face = "Face43";
				speaker = "John";
				pitch = 1.001306;
				glasses = "None";
			};
			class FrantisekFuka {
				name = "Frantisek Fuka";
				face = "Face14";
				speaker = "Jonah";
				pitch = 0.900208;
				glasses = "None";
			};
			class KarelVrana {
				name = "Karel Vrana";
				face = "Face23";
				speaker = "Ted";
				pitch = 1.090515;
				glasses = "None";
			};
			class DaliborStraka {
				name = "Dalibor Straka";
				face = "Face48";
				speaker = "Rob";
				pitch = 0.963452;
				glasses = "None";
			};
			class LeosStejskal {
				name = "Leos Stejskal";
				face = "Face14";
				speaker = "Patrick";
				pitch = 1.052496;
				glasses = "None";
			};
			class MartinZilvar {
				name = "Martin Zilvar";
				face = "Face29";
				speaker = "Patrick";
				pitch = 1.026361;
				glasses = "Spectacles";
			};
			class PavelZuska {
				name = "Pavel Zuska";
				face = "Face35";
				speaker = "Greg";
				pitch = 1.057965;
				glasses = "None";
			};
			class CenekJirsak {
				name = "Cenek Jirsak";
				face = "Face49";
				speaker = "Peter";
				pitch = 1.041327;
				glasses = "Sunglasses";
			};
			class AntoninBejval {
				name = "Antonin Bejval";
				face = "Face35";
				speaker = "Ted";
				pitch = 0.950067;
				glasses = "None";
			};
			class EdaKemlink {
				name = "Eda Kemlink";
				face = "Face41";
				speaker = "Greg";
				pitch = 1.036945;
				glasses = "None";
			};
			class StojanJakotyc {
				name = "Stojan Jakotyc";
				face = "Face49";
				speaker = "Greg";
				pitch = 1.093756;
				glasses = "None";
			};
			class LubosPacal {
				name = "Lubos Pacal";
				face = "Face13";
				speaker = "George";
				pitch = 0.907007;
				glasses = "None";
			};
			class MarekSvatos {
				name = "Marek Svatos";
				face = "Face11";
				speaker = "Jonah";
				pitch = 0.924249;
				glasses = "Spectacles";
			};
			class OndrejKafka {
				name = "Ondrej Kafka";
				face = "Face9";
				speaker = "Adam";
				pitch = 0.914447;
				glasses = "None";
			};
			class TomasNahodil {
				name = "Tomas Nahodil";
				face = "Face21";
				speaker = "Adam";
				pitch = 0.975262;
				glasses = "None";
			};
			class ZdenekSverak {
				name = "Zdenek Sverak";
				face = "Face22";
				speaker = "Adam";
				pitch = 1.021643;
				glasses = "Sunglasses";
			};
			class LadislavSmoljak {
				name = "Ladislav Smoljak";
				face = "Face3";
				speaker = "Dan";
				pitch = 0.906311;
				glasses = "None";
			};
			class PavelVonruska {
				name = "Pavel Vonruska";
				face = "Face50";
				speaker = "Tom";
				pitch = 1.023859;
				glasses = "Spectacles";
			};
			class JaroslavWeigl {
				name = "Jaroslav Weigl";
				face = "Face14";
				speaker = "Peter";
				pitch = 0.994629;
				glasses = "None";
			};
			class RenePtacek {
				name = "Rene Ptacek";
				face = "Face6";
				speaker = "Tom";
				pitch = 1.040533;
				glasses = "None";
			};
			class JiriKolben {
				name = "Jiri Kolben";
				face = "Face23";
				speaker = "Rich";
				pitch = 0.979279;
				glasses = "None";
			};
			class PavelDanek {
				name = "Pavel Danek";
				face = "Face4";
				speaker = "Peter";
				pitch = 0.973584;
				glasses = "None";
			};
			class TomasBata {
				name = "Tomas Bata";
				face = "Face50";
				speaker = "Dan";
				pitch = 0.993524;
				glasses = "None";
			};
			class RudaPivrnec {
				name = "Ruda Pivrnec";
				face = "Face37";
				speaker = "Ted";
				pitch = 1.094806;
				glasses = "None";
			};
			class KarelSvoboda {
				name = "Karel Svoboda";
				face = "Face45";
				speaker = "Dan";
				pitch = 0.907574;
				glasses = "Spectacles";
			};
			class KonradHenlein {
				name = "Konrad Henlein";
				face = "Face26";
				speaker = "George";
				pitch = 0.951184;
				glasses = "None";
			};
			class KarelSmolen {
				name = "Karel Smolen";
				face = "Face6";
				speaker = "Marc";
				pitch = 1.07699;
				glasses = "None";
			};
			class MartinBedri {
				name = "Martin Bedri";
				face = "Face5";
				speaker = "Paul";
				pitch = 1.099695;
				glasses = "None";
			};
			class PavelKolarik {
				name = "Pavel Kolarik";
				face = "Face43";
				speaker = "Peter";
				pitch = 1.019958;
				glasses = "Spectacles";
			};
			class ProkopBuben {
				name = "Prokop Buben";
				face = "Face38";
				speaker = "Ted";
				pitch = 0.911078;
				glasses = "Sunglasses";
			};
			class JaraCimrman {
				name = "Jara Cimrman";
				face = "Face40";
				speaker = "Ted";
				pitch = 1.015704;
				glasses = "None";
			};
			class LudvikSvoboda {
				name = "Ludvik Svoboda";
				face = "Face4";
				speaker = "John";
				pitch = 1.059412;
				glasses = "Spectacles";
			};
			class KlementGottwald {
				name = "Klement Gottwald";
				face = "Face2";
				speaker = "Rob";
				pitch = 1.057269;
				glasses = "None";
			};
			class KarelGott {
				name = "Karel Gott";
				face = "Face11";
				speaker = "Rich";
				pitch = 0.900574;
				glasses = "Spectacles";
			};
			class MirekDusin {
				name = "Mirek Dusin";
				face = "Face11";
				speaker = "Marc";
				pitch = 0.934863;
				glasses = "None";
			};
			class JarkaMetelka {
				name = "Jarka Metelka";
				face = "Face34";
				speaker = "Adam";
				pitch = 0.944977;
				glasses = "None";
			};
			class JindraHojer {
				name = "Jindra Hojer";
				face = "Face14";
				speaker = "Tom";
				pitch = 1.027411;
				glasses = "None";
			};
			class OtaBota {
				name = "Ota Bota";
				face = "Face5";
				speaker = "George";
				pitch = 0.906537;
				glasses = "None";
			};
			class DavidCervenacek {
				name = "David Cervenacek";
				face = "Face29";
				speaker = "Dan";
				pitch = 0.947754;
				glasses = "None";
			};
			class MichalDavid {
				name = "Michal David";
				face = "Face50";
				speaker = "Marc";
				pitch = 1.00517;
				glasses = "None";
			};
			class FrantisekSmoranc {
				name = "Frantisek Smoranc";
				face = "Face9";
				speaker = "Greg";
				pitch = 1.018561;
				glasses = "None";
			};
			class FrantisekDobrota {
				name = "Frantisek Dobrota";
				face = "Face24";
				speaker = "Patrick";
				pitch = 0.964624;
				glasses = "Spectacles";
			};
			class LudvikVaculik {
				name = "Ludvik Vaculik";
				face = "Face39";
				speaker = "Dan";
				pitch = 0.93255;
				glasses = "None";
			};
			class GustavHusak {
				name = "Gustav Husak";
				face = "Face27";
				speaker = "Peter";
				pitch = 1.029517;
				glasses = "None";
			};
			class JuroJanosik {
				name = "Juro Janosik";
				face = "Face22";
				speaker = "Peter";
				pitch = 1.000128;
				glasses = "None";
			};
			class JuliusFucik {
				name = "Julius Fucik";
				face = "Face8";
				speaker = "George";
				pitch = 0.941449;
				glasses = "None";
			};
			class MilousJakes {
				name = "Milous Jakes";
				face = "Face3";
				speaker = "Marc";
				pitch = 1.023968;
				glasses = "None";
			};
		};
	};
	class DefaultWorld {
		access = 3;
		plateFormat = "$$$  ## - ##";
		plateLetters = "ABCDEFHIKLMOPRSTVXYZ";
		centerPosition[] = {6400,6400,0};
		latitude = -40;
		longitude = 15;
		class Music: CfgMusic {};
		class EnvSounds: CfgEnvSounds {};
		cutscenes[] = {"intro"};
		forestOldTriangle = "data3D\les trojuhelnik.p3d";
		forestOldSquare = "data3D\les ctverec.p3d";
		forestInner = "data3D\les ctverec dark.p3d";
		forestOuter = "data3D\les ctverec pruchozi.p3d";
		forestOuterT1 = "data3D\les ctverec pruchozi_T1.p3d";
		forestOuterT2 = "data3D\les ctverec pruchozi_T2.p3d";
		forestTriangle = "data3D\les trojuhelnik pruchozi.p3d";
		forestBorder = "data3D\les ctverec mlazi.p3d";
		class ReplaceObjects {
			class ForestBorder {
				replace = "data3D\les ctverec mlazi.p3d";
				with[] = {};
			};
			class ForestTriangle {
				replace = "data3D\les trojuhelnik.p3d";
				with[] = {"data3D\les trojuhelnik pruchozi.p3d"};
			};
			class ForestSquare {
				replace = "data3D\les ctverec.p3d";
				with[] = {"data3D\les ctverec pruchozi_T1.p3d","data3D\les ctverec pruchozi_T2.p3d"};
				center = 1;
			};
		};
		landGrid = 50;
		class Grid {
			offsetX = 0;
			offsetY = 0;
			class Zoom1 {
				zoomMax = 0.2;
				format = "XY";
				formatX = "Aa";
				formatY = "00";
				stepX = 128;
				stepY = 128;
			};
			class Zoom2 {
				zoomMax = 1.00000001504746622E30;
				format = "XY";
				formatX = "A";
				formatY = "0";
				stepX = 1280;
				stepY = 1280;
			};
		};
		class Subdivision {
			class Fractal {
				rougness = 10;
				maxRoad = 0.2;
				maxTrack = 1;
				maxSlopeFactor = 0.05;
			};
			class WhiteNoise {
				rougness = 5;
				maxRoad = 0.1;
				maxTrack = 0.5;
				maxSlopeFactor = 0.025;
			};
			minY = 0;
			minSlope = 0.02;
		};
	};
	class Eden: DefaultWorld {
		access = 3;
		plateFormat = "ER$  ## - ##";
		plateLetters = "ABCDEFHIKLMOPRSTVXYZ";
		worldName = "eden.wrp";
		description = "Everon";
		icon = "_eden.paa";
		startTime = "8:30";
		startDate = "30/4/84";
		startWeather = 0.3;
		startFog = 0;
		forecastWeather = 0.3;
		forecastFog = 0;
		seagullPos[] = {10738,8509};
		ilsPosition[] = {4772,10923};
		ilsDirection[] = {0,0.08,-1};
		ilsTaxiIn[] = {"4772+69","10923+400","4772+69","10923+95","4772+61","10923+87","4772+8","10923+87",4772,"10923+95",4772,"10923+150"};
		ilsTaxiOff[] = {4772,10923,4772,"10923+878","4772+8","10923+886","4772+61","10923+886","4772+69","10923+878","4772+69","10923+400"};
		class Sounds {
			sounds[] = {};
		};
		class Animation {
			vehicles[] = {};
		};
		class Names {
			class SaintPhillippe {
				name = "Saint Phillippe";
				position[] = {4674,10730,50};
			};
			class Regina {
				name = "Regina";
				position[] = {7197,2347,50};
			};
			class Meaux {
				name = "Meaux";
				position[] = {4524,9549,100};
			};
			class Tyrone {
				name = "Tyrone";
				position[] = {4946,9056,50};
			};
			class Montignac {
				name = "Montignac";
				position[] = {4935,6994,50};
			};
			class Gravette {
				name = "Gravette";
				position[] = {4112,7772,50};
			};
			class EnreDeux {
				name = "Entre Deux";
				position[] = {5735,7059,100};
			};
			class Provins {
				name = "Provins";
				position[] = {5501,6050,50};
			};
			class Chotain {
				name = "Chotain";
				position[] = {7057,5987,50};
			};
			class Laruns {
				name = "Laruns";
				position[] = {7556,5558,50};
			};
			class Figari {
				name = "Figari";
				position[] = {5283,5375,50};
			};
			class LeMoule {
				name = "Le Moule";
				position[] = {2590,5384,50};
			};
			class Morton {
				name = "Morton";
				position[] = {5134,3955,100};
			};
			class Lamentin {
				name = "Lamentin";
				position[] = {1333,5962,100};
			};
			class Levie {
				name = "Levie";
				position[] = {7554,4737,10};
			};
			class Durras {
				name = "Durras";
				position[] = {8835,2710,50};
			};
			class Vernon {
				name = "Vernon";
				position[] = {9142,2159,50};
			};
			class SaintPierre {
				name = "Saint Pierre";
				position[] = {9662,1605,50};
			};
		};
		cutscenes[] = {"intro","intro1"};
	};
	class Abel: DefaultWorld {
		access = 3;
		plateFormat = "ML$ - #####";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		worldName = "abel.wrp";
		description = "Malden";
		icon = "_abel.paa";
		startTime = "8:30";
		startDate = "30/4/84";
		startWeather = 0.3;
		startFog = 0;
		forecastWeather = 0.3;
		forecastFog = 0;
		seagullPos[] = {8074,4048,100};
		ilsPosition[] = {7922,9590,0};
		ilsDirection[] = {0,0.08,-1};
		ilsTaxiIn[] = {"7922+69","9590+400","7922+69","9590+45-18","7922+61","9590+37-18","7922+8","9590+37-18",7922,"9590+45-18",7922,"9590+100-18"};
		ilsTaxiOff[] = {7922,9590,7922,"9590+878-18","7922+8","9590+886-18","7922+61","9590+886-18","7922+69","9590+878-18","7922+69","9590+400"};
		forestOldTriangle = "data3D\les_su_trojuhelnik.p3d";
		forestOldSquare = "data3D\les_su_ctver.p3d";
		forestInner = "data3D\les_su_ctver.p3d";
		forestOuter = "data3D\les_su_ctver_pruhozi.p3d";
		forestOuterT1 = "data3D\les_su_ctver_pruhozi_T1.p3d";
		forestOuterT2 = "data3D\les_su_ctver_pruhozi_T2.p3d";
		forestTriangle = "data3D\les_su_trojuhelnik.p3d";
		forestBorder = "data3D\les_su_ctver_mlaz.p3d";
		class ReplaceObjects {
			class ForestBorder {
				replace = "data3D\les_su_ctver_mlaz.p3d";
				with[] = {};
			};
			class ForestSquare {
				replace = "data3D\les_su_ctver.p3d";
				with[] = {"data3D\les_su_ctver_pruhozi_T1.p3d","data3D\les_su_ctver_pruhozi_T2.p3d"};
				center = 1;
			};
		};
		class EnvSounds: CfgEnvSounds {
			class Rain {
				sound[] = {"Environmental\Rain_hard",0.001,1};
				soundNight[] = {"Environmental\Rain_hard",0.001,1};
			};
			class Sea {
				sound[] = {"Environmental\wave_break",0.0001,1};
				soundNight[] = {"Environmental\wave_break",0.0001,1};
			};
			class Meadows {
				sound[] = {"animals\crickets03",0.000018,1};
				soundNight[] = {"animals\crickets03",0.000018,1};
			};
			class Trees {
				sound[] = {"animals\crickets03",0.0001,1};
				soundNight[] = {"animals\crickets03",0.0001,1};
			};
			class Hills {
				sound[] = {"Environmental\wind_heavy",0.000032,1};
				soundNight[] = {"Environmental\wind_whistle",0.000032,1};
			};
		};
		class Sounds {
			sounds[] = {};
		};
		class Animation {
			vehicles[] = {};
		};
		class Names {
			class SaintLouis {
				name = "Saint Louis";
				position[] = {7144,8963,130};
			};
			class Larche {
				name = "Larche";
				position[] = {6034,8599,200};
			};
			class LaTrinite {
				name = "La Trinite";
				position[] = {7268,7944,200};
			};
			class Goisee {
				name = "Goisse";
				position[] = {3593,8528,150};
			};
			class LaPessagne {
				name = "La Pessagne";
				position[] = {3111,6326,100};
			};
			class Vigny {
				name = "Vigny";
				position[] = {3075,6831,100};
			};
			class Houdan {
				name = "Houdan";
				position[] = {7117,6069,100};
			};
			class SainteMarie {
				name = "Sainte Marie";
				position[] = {5563,4217,100};
			};
			class Chapoi {
				name = "Chapoi";
				position[] = {5841,3527,200};
			};
			class LePort {
				name = "Le Port";
				position[] = {8193,3129,100};
			};
			class Cancon {
				name = "Cancon";
				position[] = {5388,2786,100};
			};
			class LaRiviere {
				name = "La Riviere";
				position[] = {3744,3257,200};
			};
			class Arudy {
				name = "Arudy";
				position[] = {5518,6981,100};
			};
			class Dourdan {
				name = "Dourdan";
				position[] = {7029,7125,100};
			};
		};
		cutscenes[] = {"intro","intro1"};
	};
	class Demo: Abel {
		access = 3;
		worldName = "\demo\demo.wrp";
		description = "Malden - Demo";
		cutscenes[] = {"intro"};
	};
	class Cain: DefaultWorld {
		access = 3;
		plateFormat = "## - KO$ - #";
		plateLetters = "ABCEHKMOPT";
		worldName = "cain.wrp";
		description = "Kolgujev";
		icon = "_cain.paa";
		startTime = "8:30";
		startDate = "30/4/84";
		startWeather = 0.3;
		startFog = 0;
		forecastWeather = 0.3;
		forecastFog = 0;
		seagullPos[] = {8074,4048,100};
		ilsPosition[] = {0,0,0};
		ilsDirection[] = {0,0.08,-1};
		ilsTaxiIn[] = {};
		ilsTaxiOff[] = {};
		class Sounds {
			sounds[] = {};
		};
		class Animation {
			vehicles[] = {};
		};
		class Names {};
		cutscenes[] = {"intro","intro1"};
	};
	class Intro: DefaultWorld {
		access = 3;
		description = "Desert Island";
		icon = "_training.paa";
		worldName = "intro.wrp";
		plateFormat = "ML$ - #####";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		startTime = "4:30";
		startDate = "10/4/82";
		startWeather = 0.4;
		startFog = 0;
		forecastWeather = 0.4;
		forecastFog = 0;
		seagullPos[] = {8897,4349,100};
		ilsPosition[] = {0,0,0};
		ilsDirection[] = {0,0.08,1};
		ilsTaxiIn[] = {};
		ilsTaxiOff[] = {};
		centerPosition[] = {9735,3964,0};
		class Sounds {
			sounds[] = {};
		};
		class Animation {
			vehicles[] = {};
		};
		class Names {};
		cutscenes[] = {"intro"};
	};
	initWorld = "Intro";
	demoWorld = "Demo";
};
