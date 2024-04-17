// args: downBoardStack

private [{_processed}];
_processed = false;

{ctrlShow [_idcDownBtn0 + _x, false]} forEach [0,1,2,3,4,5,6,7,8];
if (not _processed && 0 == count _downBoardStack) then {
	// art area
	ctrlSetText [_idcDownBtn0 + 1, format ["%1 %2", localize {TZK_LANG_SHORT_PLAYER}, localize {TZK_LANG_SHORT_ARTILLERY}]];
	{ctrlShow [_idcDownBtn0 + _x, true]} forEach [1];

	if (isCommander || bIsAiSuperior) then {
		ctrlSetText [_idcDownBtn0, format ["%1 %2", localize {TZK_LANG_SHORT_SERVER}, localize {TZK_LANG_SHORT_ARTILLERY}]];
		{ctrlShow [_idcDownBtn0 + _x, true]} forEach [0];
	};
	
	// buiding obstruction
	ctrlSetText [_idcDownBtn0 + 2, localize {TZK_LANG_OBSTRUCT}];
	{ctrlShow [_idcDownBtn0 + _x, true]} forEach [2];
	_processed = true;

	// mine area
	if (isCommander || bIsAiSuperior) then {
		ctrlSetText [_idcDownBtn0 + 3, format ["%1 %2", localize {TZK_LANG_SHORT_SERVER}, localize {TZK_LANG_MINE}]];
		ctrlShow [_idcDownBtn0 + 3, true];
	};
	ctrlSetText [_idcDownBtn0 + 4, format ["%1 %2", localize {TZK_LANG_SHORT_PLAYER}, localize {TZK_LANG_MINE}]];
	{ctrlShow [_idcDownBtn0 + _x, true]} forEach [4];
};