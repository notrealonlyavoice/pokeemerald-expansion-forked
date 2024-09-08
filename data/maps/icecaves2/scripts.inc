icecaves2_MapScripts::
# 2 "data/maps/icecaves2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, icecaves2_MapScripts_OnTransition
# 3 "data/maps/icecaves2/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


icecaves2_MapScripts_OnTransition::
# 7 "data/maps/icecaves2/scripts.pory"
	setrespawn HEAL_LOCATION_ICECAVES2
	end

