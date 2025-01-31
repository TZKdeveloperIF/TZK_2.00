// args: none
// return: bool (use this languange)

// english should always "match". It serves for all general languages

	private [{_i}, {_capacity}];
	_i = 0; _capacity = 1;
	TzkInGameText resize _capicity;

	_f = {
		if (_i >= _capacity) then {
			_capacity = _capacity * 2;
			TzkInGameText resize _capacity;
		};
		TzkInGameText set [_i, _this];
		_i = _i + 1;
	};

	// All exist item's index and their order CAN'T BE CHANGED
	"The shell you shot has flied for 3s. Since there're critical structures within 50 meters, enemy AI art can't attack you, so your shell will be deleted. Move your art vehicle if wish to shoot at far target." call _f; // 000

	// script count check. Check index with last literal value
	if (_i != 0 + 1) then {
		player globalChat "Script count mismatch!";
	};

	// free extra memory
	TzkInGameText resize _i;

true