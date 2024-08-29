# 1 "data/maps/SHIPPP/scripts.pory"

# 2 "data/maps/SHIPPP/scripts.pory"
SHIPPP_MapScripts::
# 3 "data/maps/SHIPPP/scripts.pory"
	.byte 0

SHIPPP_EventScript_SailorMessage::
# 7 "data/maps/SHIPPP/scripts.pory"
	lockall
# 8 "data/maps/SHIPPP/scripts.pory"
	applymovement 1, LookAtPlayer
# 9 "data/maps/SHIPPP/scripts.pory"
	MSGBOX SHIPPP_EventScript_SailorMessage_Text_0
# 10 "data/maps/SHIPPP/scripts.pory"
	releaseall
	return


# 13 "data/maps/SHIPPP/scripts.pory"
LookAtPlayer:
# 14 "data/maps/SHIPPP/scripts.pory"
	faceplayer
	step_end

SHIPPP_Trigger_BlockDoorScript::
# 18 "data/maps/SHIPPP/scripts.pory"
	lockall
# 19 "data/maps/SHIPPP/scripts.pory"
	msgbox SHIPPP_Trigger_BlockDoorScript_Text_0
# 20 "data/maps/SHIPPP/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayerSHIP
# 21 "data/maps/SHIPPP/scripts.pory"
	waitmovement 0
# 22 "data/maps/SHIPPP/scripts.pory"
	releaseall
	return


# 25 "data/maps/SHIPPP/scripts.pory"
StopPlayerSHIP:
# 26 "data/maps/SHIPPP/scripts.pory"
	walk_right
# 26 "data/maps/SHIPPP/scripts.pory"
	walk_right
	step_end

SHIPPP_Trigger_BlockDoorScript2::
# 30 "data/maps/SHIPPP/scripts.pory"
	lockall
# 31 "data/maps/SHIPPP/scripts.pory"
	msgbox SHIPPP_Trigger_BlockDoorScript_Text_0
# 32 "data/maps/SHIPPP/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayerNOPOKEMON
# 33 "data/maps/SHIPPP/scripts.pory"
	waitmovement 0
# 34 "data/maps/SHIPPP/scripts.pory"
	releaseall
	return


# 37 "data/maps/SHIPPP/scripts.pory"
StopPlayerNOPOKEMON:
# 38 "data/maps/SHIPPP/scripts.pory"
	walk_up
	step_end

SHIPPP_EventScript_SillyKid::
# 42 "data/maps/SHIPPP/scripts.pory"
	lockall
# 43 "data/maps/SHIPPP/scripts.pory"
	faceplayer
# 44 "data/maps/SHIPPP/scripts.pory"
	msgbox SHIPPP_EventScript_SillyKid_Text_0, MSGBOX_YESNO
# 45 "data/maps/SHIPPP/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SHIPPP_EventScript_SillyKid_1
# 50 "data/maps/SHIPPP/scripts.pory"
	msgbox SHIPPP_EventScript_SillyKid_Text_1
# 51 "data/maps/SHIPPP/scripts.pory"
	closemessage
	return

SHIPPP_EventScript_SillyKid_1:
# 46 "data/maps/SHIPPP/scripts.pory"
	closemessage
# 47 "data/maps/SHIPPP/scripts.pory"
	call SHIPPP_EventScript_SillyKid
	return


SHIPPP_EventScript_scientisttest::
# 57 "data/maps/SHIPPP/scripts.pory"
	lockall
# 58 "data/maps/SHIPPP/scripts.pory"
	msgbox SHIPPP_EventScript_scientisttest_Text_0
# 59 "data/maps/SHIPPP/scripts.pory"
	waitmessage
# 60 "data/maps/SHIPPP/scripts.pory"
	releaseall
	return


SHIPPP_EventScript_SailorMessage_Text_0:
# 9 "data/maps/SHIPPP/scripts.pory"
	.string "These Doors go striaght to the deck$"

SHIPPP_Trigger_BlockDoorScript_Text_0:
# 19 "data/maps/SHIPPP/scripts.pory"
	.string "the captian was looking for you$"

SHIPPP_EventScript_SillyKid_Text_0:
# 44 "data/maps/SHIPPP/scripts.pory"
	.string "do you want to see this msg again?$"

SHIPPP_EventScript_SillyKid_Text_1:
# 50 "data/maps/SHIPPP/scripts.pory"
	.string "awwww$"

SHIPPP_EventScript_scientisttest_Text_0:
# 58 "data/maps/SHIPPP/scripts.pory"
	.string "placertext$"
