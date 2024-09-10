SHIPPP_MapScripts::
# 2 "data/maps/SHIPPP/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SHIPPP_MapScripts_OnTransition
# 3 "data/maps/SHIPPP/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


SHIPPP_MapScripts_OnTransition::
# 7 "data/maps/SHIPPP/scripts.pory"
	setrespawn HEAL_LOCATION_SHIPPP
	end


SHIPPP_EventScript_SailorMessage::
# 12 "data/maps/SHIPPP/scripts.pory"
	lockall
# 13 "data/maps/SHIPPP/scripts.pory"
	applymovement 1, LookAtPlayer
# 14 "data/maps/SHIPPP/scripts.pory"
	MSGBOX SHIPPP_EventScript_SailorMessage_Text_0
# 15 "data/maps/SHIPPP/scripts.pory"
	releaseall
	return


# 18 "data/maps/SHIPPP/scripts.pory"
LookAtPlayer:
# 19 "data/maps/SHIPPP/scripts.pory"
	faceplayer
	step_end

SHIPPP_Trigger_BlockDoorScript::
# 23 "data/maps/SHIPPP/scripts.pory"
	lockall
# 24 "data/maps/SHIPPP/scripts.pory"
	msgbox SHIPPP_Trigger_BlockDoorScript_Text_0
# 25 "data/maps/SHIPPP/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayerSHIP
# 26 "data/maps/SHIPPP/scripts.pory"
	waitmovement 0
# 27 "data/maps/SHIPPP/scripts.pory"
	releaseall
	return


# 30 "data/maps/SHIPPP/scripts.pory"
StopPlayerSHIP:
# 31 "data/maps/SHIPPP/scripts.pory"
	walk_right
# 31 "data/maps/SHIPPP/scripts.pory"
	walk_right
	step_end

SHIPPP_Trigger_BlockDoorScript2::
# 35 "data/maps/SHIPPP/scripts.pory"
	lockall
# 36 "data/maps/SHIPPP/scripts.pory"
	msgbox SHIPPP_Trigger_BlockDoorScript_Text_0
# 37 "data/maps/SHIPPP/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayerNOPOKEMON
# 38 "data/maps/SHIPPP/scripts.pory"
	waitmovement 0
# 39 "data/maps/SHIPPP/scripts.pory"
	releaseall
	return


# 42 "data/maps/SHIPPP/scripts.pory"
StopPlayerNOPOKEMON:
# 43 "data/maps/SHIPPP/scripts.pory"
	walk_up
	step_end

SHIPPP_EventScript_SillyKid::
# 47 "data/maps/SHIPPP/scripts.pory"
	lockall
# 48 "data/maps/SHIPPP/scripts.pory"
	faceplayer
# 49 "data/maps/SHIPPP/scripts.pory"
	msgbox SHIPPP_EventScript_SillyKid_Text_0, MSGBOX_YESNO
# 50 "data/maps/SHIPPP/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SHIPPP_EventScript_SillyKid_1
# 55 "data/maps/SHIPPP/scripts.pory"
	msgbox SHIPPP_EventScript_SillyKid_Text_1
# 56 "data/maps/SHIPPP/scripts.pory"
	closemessage
	return

SHIPPP_EventScript_SillyKid_1:
# 51 "data/maps/SHIPPP/scripts.pory"
	closemessage
# 52 "data/maps/SHIPPP/scripts.pory"
	call SHIPPP_EventScript_SillyKid
	return


SHIPPP_EventScript_scientisttest::
# 62 "data/maps/SHIPPP/scripts.pory"
	lockall
# 63 "data/maps/SHIPPP/scripts.pory"
	msgbox SHIPPP_EventScript_scientisttest_Text_0
# 64 "data/maps/SHIPPP/scripts.pory"
	waitmessage
# 65 "data/maps/SHIPPP/scripts.pory"
	closemessage
	return


SHIPPP_EventScript_SailorMessage_Text_0:
# 14 "data/maps/SHIPPP/scripts.pory"
	.string "These Doors go striaght to the deck$"

SHIPPP_Trigger_BlockDoorScript_Text_0:
# 24 "data/maps/SHIPPP/scripts.pory"
	.string "the captian was looking for you$"

SHIPPP_EventScript_SillyKid_Text_0:
# 49 "data/maps/SHIPPP/scripts.pory"
	.string "do you want to see this msg again?$"

SHIPPP_EventScript_SillyKid_Text_1:
# 55 "data/maps/SHIPPP/scripts.pory"
	.string "awwww$"

SHIPPP_EventScript_scientisttest_Text_0:
# 63 "data/maps/SHIPPP/scripts.pory"
	.string "HELLO!$"
