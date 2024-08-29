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
# 33 "data/maps/seashorehousenew/scripts.pory"
	lockall
# 34 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_2
# 35 "data/maps/seashorehousenew/scripts.pory"
	waitmessage
# 36 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_3, MSGBOX_YESNO
# 37 "data/maps/seashorehousenew/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDNEW_EventScript_sameladyasbefore_6
# 43 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_5
# 44 "data/maps/seashorehousenew/scripts.pory"
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

ISLANDNEW_EventScript_sameladyasbefore_6:
# 38 "data/maps/seashorehousenew/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_sameladyasbefore_Text_4
# 39 "data/maps/seashorehousenew/scripts.pory"
	setvar ( VAR_0x8006 ), 3
# 40 "data/maps/seashorehousenew/scripts.pory"
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
# 34 "data/maps/seashorehousenew/scripts.pory"
	.string "oh hello. Ready to start the challenge?$"

ISLANDNEW_EventScript_sameladyasbefore_Text_3:
# 36 "data/maps/seashorehousenew/scripts.pory"
	.string "are you ready?$"

ISLANDNEW_EventScript_sameladyasbefore_Text_4:
# 38 "data/maps/seashorehousenew/scripts.pory"
	.string "Ok! Master trought lies at the end of\n"
	.string "the CONJOINED TUNNELS in mystery cave,\l"
	.string "but navigating it is treacherous... find\l"
	.string "someone who knows the combination$"

ISLANDNEW_EventScript_sameladyasbefore_Text_5:
# 43 "data/maps/seashorehousenew/scripts.pory"
	.string "later then. keep exploring$"
