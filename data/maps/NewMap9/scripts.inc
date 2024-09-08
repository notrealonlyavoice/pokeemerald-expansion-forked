NewMap9_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NewMap9_OnFrame
	map_script MAP_SCRIPT_ON_RESUME, NewMap9_OnResume
	map_script MAP_SCRIPT_ON_LOAD, NewMap9_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, NewMap9_OnTransition
	.byte 0

NewMap9_OnTransition:
	setvar VAR_ICE_STEP_COUNT, 1
	end

NewMap9_OnResume:
	setstepcallback STEP_CB_SOOTOPOLIS_ICE
	end

NewMap9_OnLoad:
	call NewMap9_EventScript_CheckSetStairMetatiles
	special SetSootopolisGymCrackedIceMetatiles
	end

NewMap9_EventScript_CheckSetStairMetatiles::
	goto_if_lt VAR_ICE_STEP_COUNT, 159, NewMap9_EventScript_StopCheckingStairs  @ All stairs ice
	goto_if_lt VAR_ICE_STEP_COUNT, 298, NewMap9_EventScript_OpenFirstStairs
	goto_if_lt VAR_ICE_STEP_COUNT, 391, NewMap9_EventScript_OpenFirstAndSecondStairs
	setmetatile 12, 2, METATILE_SootopolisGym_Stairs, FALSE
	setmetatile 12, 3, METATILE_SootopolisGym_Stairs, FALSE
NewMap9_EventScript_OpenFirstAndSecondStairs::
	setmetatile 12, 8, METATILE_SootopolisGym_Stairs, FALSE
	setmetatile 12, 9, METATILE_SootopolisGym_Stairs, FALSE
NewMap9_EventScript_OpenFirstStairs::
	setmetatile 12, 17, METATILE_SootopolisGym_Stairs, FALSE
	setmetatile 12, 16, METATILE_SootopolisGym_Stairs, FALSE
NewMap9_EventScript_StopCheckingStairs::
	return

NewMap9_OnFrame:
	map_script_2 VAR_ICE_STEP_COUNT, 159, NewMap9_EventScript_UnlockFirstStairs
	map_script_2 VAR_ICE_STEP_COUNT, 298, NewMap9_EventScript_UnlockSecondStairs
	map_script_2 VAR_ICE_STEP_COUNT, 391, NewMap9_EventScript_UnlockThirdStairs
	map_script_2 VAR_ICE_STEP_COUNT, 0, NewMap9_EventScript_FallThroughIce
	.2byte 0

NewMap9_EventScript_UnlockFirstStairs::
	addvar VAR_ICE_STEP_COUNT, 1
	delay 40
	playse SE_ICE_STAIRS
	call NewMap9_EventScript_CheckSetStairMetatiles
	special DrawWholeMapView
	end

NewMap9_EventScript_UnlockSecondStairs::
	addvar VAR_ICE_STEP_COUNT, 1
	delay 40
	playse SE_ICE_STAIRS
	call NewMap9_EventScript_CheckSetStairMetatiles
	special DrawWholeMapView
	end

NewMap9_EventScript_UnlockThirdStairs::
	addvar VAR_ICE_STEP_COUNT, 1
	delay 40
	playse SE_ICE_STAIRS
	call NewMap9_EventScript_CheckSetStairMetatiles
	special DrawWholeMapView
	end

NewMap9_EventScript_FallThroughIce::
	lockall
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, NewMap9_Movement_FallThroughIce
	waitmovement 0
	playse SE_FALL
	delay 60
	warphole MAP_SOOTOPOLIS_CITY_GYM_B1F
	waitstate
	end

NewMap9_Movement_FallThroughIce:
	set_invisible
	step_end
