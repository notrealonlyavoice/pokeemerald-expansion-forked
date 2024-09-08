NewMap6_MapScripts::
# 2 "data/maps/NewMap6/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewMap6_MapScripts_OnTransition
# 3 "data/maps/NewMap6/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


NewMap6_MapScripts_OnTransition::
# 7 "data/maps/NewMap6/scripts.pory"
	setrespawn HEAL_LOCATION_NEW_MAP6
	end

