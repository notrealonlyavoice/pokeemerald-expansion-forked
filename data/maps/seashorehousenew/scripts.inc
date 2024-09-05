# 1 "data/maps/seashorehousenew/scripts.pory"

# 2 "data/maps/seashorehousenew/scripts.pory"
seashorehousenew_MapScripts::
# 3 "data/maps/seashorehousenew/scripts.pory"
	.byte 0

ISLANDNEW_EventScript_randomguy::
# 8 "data/maps/seashorehousenew/scripts.pory"
	lockall
# 9 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_randomguy_Text_0
# 10 "data/maps/seashorehousenew/scripts.pory"
	waitmessage
# 11 "data/maps/seashorehousenew/scripts.pory"
	closemessage
# 12 "data/maps/seashorehousenew/scripts.pory"
	releaseall
	return


ISLANDNEW_EventScript_randomguy1::
# 16 "data/maps/seashorehousenew/scripts.pory"
	lockall
# 17 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_randomguy1_Text_0
# 18 "data/maps/seashorehousenew/scripts.pory"
	waitmessage
# 19 "data/maps/seashorehousenew/scripts.pory"
	closemessage
# 20 "data/maps/seashorehousenew/scripts.pory"
	releaseall
	return


ISLANDNEW_EventScript_sameladyasbefore::
# 25 "data/maps/seashorehousenew/scripts.pory"
	compare VAR_0x8006, 4
	goto_if_eq ISLANDNEW_EventScript_sameladyasbefore_1
# 28 "data/maps/seashorehousenew/scripts.pory"
	compare VAR_0x8006, 3
	goto_if_eq ISLANDNEW_EventScript_sameladyasbefore_2
# 31 "data/maps/seashorehousenew/scripts.pory"
	compare VAR_0x8006, 5
	goto_if_eq ISLANDNEW_EventScript_sameladyasbefore_3
# 52 "data/maps/seashorehousenew/scripts.pory"
	lockall
# 53 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_7
# 54 "data/maps/seashorehousenew/scripts.pory"
	waitmessage
# 55 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_8, MSGBOX_YESNO
# 56 "data/maps/seashorehousenew/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDNEW_EventScript_sameladyasbefore_12
# 62 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_10
# 63 "data/maps/seashorehousenew/scripts.pory"
	closemessage
	return

ISLANDNEW_EventScript_sameladyasbefore_1:
# 26 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_0
# 27 "data/maps/seashorehousenew/scripts.pory"
	closemessage
	return

ISLANDNEW_EventScript_sameladyasbefore_2:
# 29 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_1
# 30 "data/maps/seashorehousenew/scripts.pory"
	closemessage
	return

ISLANDNEW_EventScript_sameladyasbefore_3:
# 32 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_2
# 33 "data/maps/seashorehousenew/scripts.pory"
	setvar VAR_0x8006, 6
# 34 "data/maps/seashorehousenew/scripts.pory"
	waitmessage
# 35 "data/maps/seashorehousenew/scripts.pory"
	compare VAR_0x8006, 7
	goto_if_eq ISLANDNEW_EventScript_sameladyasbefore_8
# 47 "data/maps/seashorehousenew/scripts.pory"
	compare VAR_0x8006, 6
	goto_if_eq ISLANDNEW_EventScript_sameladyasbefore_9
	return

ISLANDNEW_EventScript_sameladyasbefore_8:
# 36 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_3
# 37 "data/maps/seashorehousenew/scripts.pory"
	delay 20
# 38 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_4
# 39 "data/maps/seashorehousenew/scripts.pory"
	delay 20
# 40 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_4
# 41 "data/maps/seashorehousenew/scripts.pory"
	delay 20
# 42 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_5
# 43 "data/maps/seashorehousenew/scripts.pory"
	fadescreen FADE_TO_BLACK
# 44 "data/maps/seashorehousenew/scripts.pory"
	delay 40
# 45 "data/maps/seashorehousenew/scripts.pory"
	warpsilent MAP_NEW_MAP6, 5, 7
# 46 "data/maps/seashorehousenew/scripts.pory"
	waitstate
	return

ISLANDNEW_EventScript_sameladyasbefore_9:
# 48 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_6
# 49 "data/maps/seashorehousenew/scripts.pory"
	closemessage
	return

ISLANDNEW_EventScript_sameladyasbefore_12:
# 57 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_9
# 58 "data/maps/seashorehousenew/scripts.pory"
	setvar ( VAR_0x8006 ), 3
# 59 "data/maps/seashorehousenew/scripts.pory"
	closemessage
	return


ISLANDNEW_EventScript_randomguy_Text_0:
# 9 "data/maps/seashorehousenew/scripts.pory"
	.string "NO!! 255 sptak ev zoroark 100% one\n"
	.string "shots you I DID THE CALCS!!!$"

ISLANDNEW_EventScript_randomguy1_Text_0:
# 17 "data/maps/seashorehousenew/scripts.pory"
	.string "NO! I'm MAX HP and i set up amnesia TWO\n"
	.string "TURNS AGO. I LIVE THE DARK PULSE$"

ISLANDNEW_EventScript_sameladyasbefore_Text_0:
# 26 "data/maps/seashorehousenew/scripts.pory"
	.string "I belive in you!$"

ISLANDNEW_EventScript_sameladyasbefore_Text_1:
# 29 "data/maps/seashorehousenew/scripts.pory"
	.string "Good luck!$"

ISLANDNEW_EventScript_sameladyasbefore_Text_2:
# 32 "data/maps/seashorehousenew/scripts.pory"
	.string "Congrats on Beating the first of 4\n"
	.string "ISLAND CHALLENGES$"

ISLANDNEW_EventScript_sameladyasbefore_Text_3:
# 36 "data/maps/seashorehousenew/scripts.pory"
	.string "OK! Now that you are ready let me give\n"
	.string "you a brief overview of the second\l"
	.string "challenge. SPINCLOPS FOREST is a\l"
	.string "spooky place where the second\l"
	.string "challenge leader resides. you will need\l"
	.string "skill to navigate towards it...$"

ISLANDNEW_EventScript_sameladyasbefore_Text_4:
# 38 "data/maps/seashorehousenew/scripts.pory"
	.string "...$"

ISLANDNEW_EventScript_sameladyasbefore_Text_5:
# 42 "data/maps/seashorehousenew/scripts.pory"
	.string "Oh by the way you cant really escape the forest unless you beat--$"

ISLANDNEW_EventScript_sameladyasbefore_Text_6:
# 48 "data/maps/seashorehousenew/scripts.pory"
	.string "Go check if cleverman has any riddles\n"
	.string "for you before you start thee next\l"
	.string "ISLAND CHALLENGE$"

ISLANDNEW_EventScript_sameladyasbefore_Text_7:
# 53 "data/maps/seashorehousenew/scripts.pory"
	.string "oh hello. Ready to start the challenge?$"

ISLANDNEW_EventScript_sameladyasbefore_Text_8:
# 55 "data/maps/seashorehousenew/scripts.pory"
	.string "are you ready?$"

ISLANDNEW_EventScript_sameladyasbefore_Text_9:
# 57 "data/maps/seashorehousenew/scripts.pory"
	.string "Ok! Master trought lies at the end of\n"
	.string "the CONJOINED TUNNELS in mystery cave,\l"
	.string "but navigating it is treacherous... find\l"
	.string "someone who knows the combination$"

ISLANDNEW_EventScript_sameladyasbefore_Text_10:
# 62 "data/maps/seashorehousenew/scripts.pory"
	.string "later then. keep exploring$"
