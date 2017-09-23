//lifeState "DEAD","DEAD-RESPAWN","INCAPACITATED"


if (lifeState player == ("DEAD","DEAD-RESPAWN","INCAPACITATED")) then {
	player addaction ["Collect Gear", "fn_take_gear.sqf"];
	};