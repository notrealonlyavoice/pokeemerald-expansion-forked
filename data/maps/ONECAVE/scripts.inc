ONECAVE_MapScripts::
# 2 "data/maps/ONECAVE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ONECAVE_MapScripts_OnTransition
# 3 "data/maps/ONECAVE/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


ONECAVE_MapScripts_OnTransition::
# 7 "data/maps/ONECAVE/scripts.pory"
	setrespawn HEAL_LOCATION_ONECAVE
	end


Scriptforjake::
# 12 "data/maps/ONECAVE/scripts.pory"
	MSGBOX Scriptforjake_Text_0
# 13 "data/maps/ONECAVE/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, Jakes_Intro, Jakes_Outro, PostJakebattle
	return


PostJakebattle::
# 25 "data/maps/ONECAVE/scripts.pory"
	lockall
# 26 "data/maps/ONECAVE/scripts.pory"
	MSGBOX PostJakebattle_Text_0
# 27 "data/maps/ONECAVE/scripts.pory"
	waitmessage
# 28 "data/maps/ONECAVE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, scootbish
# 29 "data/maps/ONECAVE/scripts.pory"
	waitmovement 0
# 30 "data/maps/ONECAVE/scripts.pory"
	setvar VAR_0x8008, 5
# 31 "data/maps/ONECAVE/scripts.pory"
	setvar VAR_0x8008, 6
# 32 "data/maps/ONECAVE/scripts.pory"
	applymovement 1, jakeleave
# 33 "data/maps/ONECAVE/scripts.pory"
	waitmovement 0
# 34 "data/maps/ONECAVE/scripts.pory"
	removeobject 1
# 35 "data/maps/ONECAVE/scripts.pory"
	setflag FOUGHT_JAKE_FLAG
# 36 "data/maps/ONECAVE/scripts.pory"
	releaseall
	return


# 39 "data/maps/ONECAVE/scripts.pory"
jakeleave:
# 40 "data/maps/ONECAVE/scripts.pory"
	walk_down
# 40 "data/maps/ONECAVE/scripts.pory"
	walk_down
	step_end

ONECAVE_Trigger_triggerjakebattleNOW::
# 44 "data/maps/ONECAVE/scripts.pory"
	applymovement 1, TriggerJAKE
# 45 "data/maps/ONECAVE/scripts.pory"
	waitmovement 0
# 46 "data/maps/ONECAVE/scripts.pory"
	call Scriptforjake
	return


# 49 "data/maps/ONECAVE/scripts.pory"
TriggerJAKE:
# 50 "data/maps/ONECAVE/scripts.pory"
	walk_down
# 50 "data/maps/ONECAVE/scripts.pory"
	walk_down
# 50 "data/maps/ONECAVE/scripts.pory"
	walk_down
# 50 "data/maps/ONECAVE/scripts.pory"
	walk_down
# 50 "data/maps/ONECAVE/scripts.pory"
	walk_down
	step_end

# 53 "data/maps/ONECAVE/scripts.pory"
scootbish:
# 54 "data/maps/ONECAVE/scripts.pory"
	walk_right
# 55 "data/maps/ONECAVE/scripts.pory"
	face_down
	step_end

ONECAVE_EventScript_conjoinedcaveschecker::
# 62 "data/maps/ONECAVE/scripts.pory"
	compare VAR_0x8006, 4
	goto_if_eq ONECAVE_EventScript_conjoinedcaveschecker_1
# 72 "data/maps/ONECAVE/scripts.pory"
	lockall
# 73 "data/maps/ONECAVE/scripts.pory"
	MSGBOX ONECAVE_EventScript_conjoinedcaveschecker_Text_1
# 74 "data/maps/ONECAVE/scripts.pory"
	waitmessage
# 75 "data/maps/ONECAVE/scripts.pory"
	closemessage
# 76 "data/maps/ONECAVE/scripts.pory"
	releaseall
	return

ONECAVE_EventScript_conjoinedcaveschecker_1:
# 63 "data/maps/ONECAVE/scripts.pory"
	lockall
# 64 "data/maps/ONECAVE/scripts.pory"
	MSGBOX ONECAVE_EventScript_conjoinedcaveschecker_Text_0
# 65 "data/maps/ONECAVE/scripts.pory"
	waitmessage
# 66 "data/maps/ONECAVE/scripts.pory"
	closemessage
# 67 "data/maps/ONECAVE/scripts.pory"
	applymovement 2, okillmove
# 68 "data/maps/ONECAVE/scripts.pory"
	waitmovement 0
# 69 "data/maps/ONECAVE/scripts.pory"
	releaseall
	return


ISLANDNEW_Sign_Conjoinedcavessign::
# 81 "data/maps/ONECAVE/scripts.pory"
	lockall
# 82 "data/maps/ONECAVE/scripts.pory"
	MSGBOX ISLANDNEW_Sign_Conjoinedcavessign_Text_0
# 83 "data/maps/ONECAVE/scripts.pory"
	waitmessage
# 84 "data/maps/ONECAVE/scripts.pory"
	closemessage
# 85 "data/maps/ONECAVE/scripts.pory"
	releaseall
	return


# 88 "data/maps/ONECAVE/scripts.pory"
okillmove:
# 89 "data/maps/ONECAVE/scripts.pory"
	walk_up
# 90 "data/maps/ONECAVE/scripts.pory"
	walk_left
# 91 "data/maps/ONECAVE/scripts.pory"
	face_right
	step_end

ONECAVE_Trigger_Triggerheal::
# 97 "data/maps/ONECAVE/scripts.pory"
	lockall
# 98 "data/maps/ONECAVE/scripts.pory"
	special HealPlayerParty
# 99 "data/maps/ONECAVE/scripts.pory"
	setvar VAR_0x8006, 1
# 100 "data/maps/ONECAVE/scripts.pory"
	releaseall
	return


Scriptforjake_Text_0:
# 12 "data/maps/ONECAVE/scripts.pory"
	.string "Oh? you are the shipwrecked kid. well I\n"
	.string "test people starting the island\l"
	.string "challenge and you look weak.$"

PostJakebattle_Text_0:
# 26 "data/maps/ONECAVE/scripts.pory"
	.string "impressive. you suprise me. I'll tell the\n"
	.string "others that you are ready for the\l"
	.string "challenge.$"

ONECAVE_EventScript_conjoinedcaveschecker_Text_0:
# 64 "data/maps/ONECAVE/scripts.pory"
	.string "I wish you luck in locating Master trout$"

ONECAVE_EventScript_conjoinedcaveschecker_Text_1:
# 73 "data/maps/ONECAVE/scripts.pory"
	.string "I will not move until you are worthy of\n"
	.string "entering the CONJOINED CAVES$"

ISLANDNEW_Sign_Conjoinedcavessign_Text_0:
# 82 "data/maps/ONECAVE/scripts.pory"
	.string "Conjoined Caves$"

Jakes_Intro::
# 16 "data/maps/ONECAVE/scripts.pory"
	.string "Prepare to lose$"

Jakes_Outro::
# 20 "data/maps/ONECAVE/scripts.pory"
	.string "....???$"
