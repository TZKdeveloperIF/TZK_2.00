// Remove order descriptions.
{
	_x set [4, -1];
} forEach aiOrders1;

// Rename orders if required. MUST be executed IN THE END.
call preprocessFile "Version\CWA_CE_PlayerGroupOrderRename.sqf";