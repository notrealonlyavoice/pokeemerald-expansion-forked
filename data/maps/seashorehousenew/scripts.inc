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
# 35 "data/maps/seashorehousenew/scripts.pory"
	compare VAR_0x8006, 8
	goto_if_eq ISLANDNEW_EventScript_sameladyasbefore_4
# 39 "data/maps/seashorehousenew/scripts.pory"
	compare VAR_0x8006, 7
	goto_if_eq ISLANDNEW_EventScript_sameladyasbefore_5
# 51 "data/maps/seashorehousenew/scripts.pory"
	compare VAR_0x8006, 10
	goto_if_eq ISLANDNEW_EventScript_sameladyasbefore_6
# 55 "data/maps/seashorehousenew/scripts.pory"
	compare VAR_0x8006, 6
	goto_if_eq ISLANDNEW_EventScript_sameladyasbefore_7
# 58 "data/maps/seashorehousenew/scripts.pory"
	compare VAR_0x8006, 11
	goto_if_eq ISLANDNEW_EventScript_sameladyasbefore_8
# 61 "data/maps/seashorehousenew/scripts.pory"
	compare VAR_0x8006, 9
	goto_if_eq ISLANDNEW_EventScript_sameladyasbefore_9
# 64 "data/maps/seashorehousenew/scripts.pory"
	compare VAR_0x8006, 12
	goto_if_eq ISLANDNEW_EventScript_sameladyasbefore_10
# 68 "data/maps/seashorehousenew/scripts.pory"
	lockall
# 69 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_11
# 70 "data/maps/seashorehousenew/scripts.pory"
	waitmessage
# 71 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_12, MSGBOX_YESNO
# 72 "data/maps/seashorehousenew/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDNEW_EventScript_sameladyasbefore_22
# 78 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_14
# 79 "data/maps/seashorehousenew/scripts.pory"
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
	closemessage
	return

ISLANDNEW_EventScript_sameladyasbefore_4:
# 36 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_3
# 37 "data/maps/seashorehousenew/scripts.pory"
	setvar VAR_0x8006, 9
# 38 "data/maps/seashorehousenew/scripts.pory"
	closemessage
	return

ISLANDNEW_EventScript_sameladyasbefore_5:
# 40 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_4
# 41 "data/maps/seashorehousenew/scripts.pory"
	delay 20
# 42 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_5
# 43 "data/maps/seashorehousenew/scripts.pory"
	delay 20
# 44 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_5
# 45 "data/maps/seashorehousenew/scripts.pory"
	delay 20
# 46 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_6
# 47 "data/maps/seashorehousenew/scripts.pory"
	fadescreen FADE_TO_BLACK
# 48 "data/maps/seashorehousenew/scripts.pory"
	delay 40
# 49 "data/maps/seashorehousenew/scripts.pory"
	warpsilent MAP_NEW_MAP6, 5, 7
# 50 "data/maps/seashorehousenew/scripts.pory"
	waitstate
	return

ISLANDNEW_EventScript_sameladyasbefore_6:
# 52 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_7
# 53 "data/maps/seashorehousenew/scripts.pory"
	setvar VAR_0x8006, 11
# 54 "data/maps/seashorehousenew/scripts.pory"
	closemessage
	return

ISLANDNEW_EventScript_sameladyasbefore_7:
# 56 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_8
# 57 "data/maps/seashorehousenew/scripts.pory"
	closemessage
	return

ISLANDNEW_EventScript_sameladyasbefore_8:
# 59 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_1
# 60 "data/maps/seashorehousenew/scripts.pory"
	closemessage
	return

ISLANDNEW_EventScript_sameladyasbefore_9:
# 62 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_9
# 63 "data/maps/seashorehousenew/scripts.pory"
	closemessage
	return

ISLANDNEW_EventScript_sameladyasbefore_10:
# 65 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_10
# 66 "data/maps/seashorehousenew/scripts.pory"
	closemessage
	return

ISLANDNEW_EventScript_sameladyasbefore_22:
# 73 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_13
# 74 "data/maps/seashorehousenew/scripts.pory"
	setvar ( VAR_0x8006 ), 3
# 75 "data/maps/seashorehousenew/scripts.pory"
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
	.string "Congrats on Being HALFWAY DONE with\n"
	.string "the ISLAND CHALLENGES, at this rate\l"
	.string "you'll be home in no time$"

ISLANDNEW_EventScript_sameladyasbefore_Text_4:
# 40 "data/maps/seashorehousenew/scripts.pory"
	.string "OK! Now that you are ready let me give\n"
	.string "you a brief overview of the second\l"
	.string "challenge. SPINCLOPS FOREST is a\l"
	.string "spooky place where the second\l"
	.string "challenge leader resides. you will need\l"
	.string "skill to navigate towards it...$"

ISLANDNEW_EventScript_sameladyasbefore_Text_5:
# 42 "data/maps/seashorehousenew/scripts.pory"
	.string "...$"

ISLANDNEW_EventScript_sameladyasbefore_Text_6:
# 46 "data/maps/seashorehousenew/scripts.pory"
	.string "Oh by the way you cant really escape\n"
	.string "the forest unless you beat--$"

ISLANDNEW_EventScript_sameladyasbefore_Text_7:
# 52 "data/maps/seashorehousenew/scripts.pory"
	.string "OK! The third challenge leader is very\n"
	.string "young and spends most of his time\l"
	.string "playing in the ice caves. navigating the\l"
	.string "caves are treacherous and maybe HM\l"
	.string "STRENGTH would help..... hmmm.....$"

ISLANDNEW_EventScript_sameladyasbefore_Text_8:
# 56 "data/maps/seashorehousenew/scripts.pory"
	.string "Go check if cleverman has any riddles\n"
	.string "for you before you start the next\l"
	.string "ISLAND CHALLENGE$"

ISLANDNEW_EventScript_sameladyasbefore_Text_9:
# 62 "data/maps/seashorehousenew/scripts.pory"
	.string "Go check Check if cleverman has\n"
	.string "another riddle ready for you$"

ISLANDNEW_EventScript_sameladyasbefore_Text_10:
# 65 "data/maps/seashorehousenew/scripts.pory"
	.string "You've come so far! go talk to cleverman\n"
	.string "before i give you the briefing on your\l"
	.string "last challenge!$"

ISLANDNEW_EventScript_sameladyasbefore_Text_11:
# 69 "data/maps/seashorehousenew/scripts.pory"
	.string "oh hello. Ready to start the challenge?$"

ISLANDNEW_EventScript_sameladyasbefore_Text_12:
# 71 "data/maps/seashorehousenew/scripts.pory"
	.string "are you ready?$"

ISLANDNEW_EventScript_sameladyasbefore_Text_13:
# 73 "data/maps/seashorehousenew/scripts.pory"
	.string "Ok! Master trought lies at the end of\n"
	.string "the CONJOINED TUNNELS in mystery cave,\l"
	.string "but navigating it is treacherous... find\l"
	.string "someone who knows the combination$"

ISLANDNEW_EventScript_sameladyasbefore_Text_14:
# 78 "data/maps/seashorehousenew/scripts.pory"
	.string "later then. keep exploring$"
