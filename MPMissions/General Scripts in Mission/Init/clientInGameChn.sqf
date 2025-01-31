// args: none
// return: bool (use this languange)

// cfg_todo: 需要有一个更好的标识来知道当前游戏的 LANGUAGE
private [{_bMatch}];
_bMatch = localize {TZK_LANG_MOVE} == "移动";

if _bMatch then {
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
	"您所发射的炮弹已飞行超
	过3秒。由于火炮单位附近
	50米内有己方关键建筑，敌
	AI火炮无法针对性反制，因
	此炮弹将被删除。如欲远距
	离炮击，请移动火炮单位" call _f; // 000

	// script count check. Check index with last literal value
	if (_i != 0 + 1) then {
		player globalChat "Script count mismatch!";
	};

	// free extra memory
	TzkInGameText resize _i;
};

_bMatch