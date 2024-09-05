# 1 "data/maps/NewMap5/scripts.pory"

# 2 "data/maps/NewMap5/scripts.pory"
NewMap5_MapScripts::
# 3 "data/maps/NewMap5/scripts.pory"
	.byte 0

NewMap5_EventScript_clevermanscript::
# 7 "data/maps/NewMap5/scripts.pory"
	compare VAR_0x8008, 6
	goto_if_eq NewMap5_EventScript_clevermanscript_1
# 10 "data/maps/NewMap5/scripts.pory"
	compare VAR_0x8008, 7
	goto_if_eq NewMap5_EventScript_clevermanscript_2
# 12 "data/maps/NewMap5/scripts.pory"
	compare VAR_0x8008, 8
	goto_if_eq NewMap5_EventScript_clevermanscript_3
# 14 "data/maps/NewMap5/scripts.pory"
	compare VAR_0x8008, 9
	goto_if_eq NewMap5_EventScript_clevermanscript_4
# 16 "data/maps/NewMap5/scripts.pory"
	compare VAR_0x8008, 10
	goto_if_eq NewMap5_EventScript_clevermanscript_5
	return

NewMap5_EventScript_clevermanscript_1:
# 8 "data/maps/NewMap5/scripts.pory"
	MSGBOX NewMap5_EventScript_clevermanscript_Text_0
# 9 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 7
	return

NewMap5_EventScript_clevermanscript_2:
# 11 "data/maps/NewMap5/scripts.pory"
	call R1
	return

NewMap5_EventScript_clevermanscript_3:
# 13 "data/maps/NewMap5/scripts.pory"
	call waitfornextriddle
	return

NewMap5_EventScript_clevermanscript_4:
# 15 "data/maps/NewMap5/scripts.pory"
	call R2
	return

NewMap5_EventScript_clevermanscript_5:
# 17 "data/maps/NewMap5/scripts.pory"
	call waitfornextriddle
	return


R1::
# 24 "data/maps/NewMap5/scripts.pory"
	MSGBOX R1_Text_0
# 25 "data/maps/NewMap5/scripts.pory"
	MSGBOX R1_Text_1, MSGBOX_YESNO
# 26 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq R1_1
# 46 "data/maps/NewMap5/scripts.pory"
	MSGBOX R1_Text_3
# 47 "data/maps/NewMap5/scripts.pory"
	closemessage
	return

R1_1:
# 27 "data/maps/NewMap5/scripts.pory"
	message R1_Text_2
# 28 "data/maps/NewMap5/scripts.pory"
	multichoice 25, 5, MULTI_RIDDLE_ONE, 0
# 29 "data/maps/NewMap5/scripts.pory"
	closemessage
# 30 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq R1_4
# 35 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq R1_5
# 40 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq R1_6
	return

R1_4:
# 31 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 8
# 32 "data/maps/NewMap5/scripts.pory"
	setflag R1ANSWERGIVEN
# 33 "data/maps/NewMap5/scripts.pory"
	call R1Correct
	return

R1_5:
# 36 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 8
# 37 "data/maps/NewMap5/scripts.pory"
	setflag R1ANSWERGIVEN
# 38 "data/maps/NewMap5/scripts.pory"
	call R1Failed
	return

R1_6:
# 41 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 8
# 42 "data/maps/NewMap5/scripts.pory"
	setflag R1ANSWERGIVEN
# 43 "data/maps/NewMap5/scripts.pory"
	call R1Failed
	return


R2::
# 52 "data/maps/NewMap5/scripts.pory"
	MSGBOX R2_Text_0
# 53 "data/maps/NewMap5/scripts.pory"
	MSGBOX R2_Text_1, MSGBOX_YESNO
# 54 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq R2_1
# 71 "data/maps/NewMap5/scripts.pory"
	MSGBOX R2_Text_3
# 72 "data/maps/NewMap5/scripts.pory"
	closemessage
	return

R2_1:
# 55 "data/maps/NewMap5/scripts.pory"
	message R2_Text_2
# 56 "data/maps/NewMap5/scripts.pory"
	multichoice 25, 5, MULTI_RIDDLE_TWO, 0
# 57 "data/maps/NewMap5/scripts.pory"
	closemessage
# 58 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq R2_4
# 62 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq R2_5
# 66 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq R2_6
	return

R2_4:
# 59 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 10
# 60 "data/maps/NewMap5/scripts.pory"
	call R2Correct
	return

R2_5:
# 63 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 10
# 64 "data/maps/NewMap5/scripts.pory"
	call R2Failed
	return

R2_6:
# 67 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 10
# 68 "data/maps/NewMap5/scripts.pory"
	call R2Failed
	return


R1Correct::
# 78 "data/maps/NewMap5/scripts.pory"
	lockall
# 79 "data/maps/NewMap5/scripts.pory"
	MSGBOX R1Correct_Text_0
# 80 "data/maps/NewMap5/scripts.pory"
	giveitem ITEM_FOCUS_SASH
# 81 "data/maps/NewMap5/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 82 "data/maps/NewMap5/scripts.pory"
	closemessage
# 83 "data/maps/NewMap5/scripts.pory"
	releaseall
	return


R1Failed::
# 88 "data/maps/NewMap5/scripts.pory"
	lockall
# 89 "data/maps/NewMap5/scripts.pory"
	MSGBOX R1Failed_Text_0
# 90 "data/maps/NewMap5/scripts.pory"
	closemessage
# 91 "data/maps/NewMap5/scripts.pory"
	releaseall
	return


R2Correct::
# 95 "data/maps/NewMap5/scripts.pory"
	lockall
# 96 "data/maps/NewMap5/scripts.pory"
	MSGBOX R1Correct_Text_0
# 97 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8006, 7
# 98 "data/maps/NewMap5/scripts.pory"
	giveitem ITEM_SITRUS_BERRY
# 99 "data/maps/NewMap5/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 100 "data/maps/NewMap5/scripts.pory"
	closemessage
# 101 "data/maps/NewMap5/scripts.pory"
	releaseall
	return


R2Failed::
# 105 "data/maps/NewMap5/scripts.pory"
	lockall
# 106 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8006, 7
# 107 "data/maps/NewMap5/scripts.pory"
	MSGBOX R2Failed_Text_0
# 108 "data/maps/NewMap5/scripts.pory"
	closemessage
# 109 "data/maps/NewMap5/scripts.pory"
	releaseall
	return


waitfornextriddle::
# 114 "data/maps/NewMap5/scripts.pory"
	lockall
# 115 "data/maps/NewMap5/scripts.pory"
	MSGBOX waitfornextriddle_Text_0
# 116 "data/maps/NewMap5/scripts.pory"
	closemessage
# 117 "data/maps/NewMap5/scripts.pory"
	releaseall
	return


NewMap5_EventScript_clevermanscript_Text_0:
# 8 "data/maps/NewMap5/scripts.pory"
	.string "Hello, I am Cleverman! I'm a distant\n"
	.string "relative of that doofus who runs the\l"
	.string "trick house. You can unlock items to\l"
	.string "help you with the ISLAND CHALLENGE if\l"
	.string "you answer my questions.$"

R1_Text_0:
# 24 "data/maps/NewMap5/scripts.pory"
	.string "Oh-ho, I can sense that someone here\n"
	.string "just won a battle. I have a riddle that,\l"
	.string "if answered correctly, will allow you to\l"
	.string "complete the next challenge easily. Are\l"
	.string "you ready?$"

R1_Text_1:
# 25 "data/maps/NewMap5/scripts.pory"
	.string "do the riddle?$"

R1_Text_2:
# 27 "data/maps/NewMap5/scripts.pory"
	.string "OK! here is your question. What is the\n"
	.string "most used pokemon in VGC as of 2024$"

R1_Text_3:
# 46 "data/maps/NewMap5/scripts.pory"
	.string "did the dev remember to code itemless\n"
	.string "run viability?..... probably not$"

R2_Text_0:
# 52 "data/maps/NewMap5/scripts.pory"
	.string "Oh-ho, Back for More? Lets see your\n"
	.string "riddle prowess this time! Same deal as\l"
	.string "befor ok?$"

R2_Text_1:
# 53 "data/maps/NewMap5/scripts.pory"
	.string "do the second riddle?$"

R2_Text_2:
# 55 "data/maps/NewMap5/scripts.pory"
	.string "OK! here is your question. WWhat type of\n"
	.string "damage does the TANGA BERRY reduce?$"

R2_Text_3:
# 71 "data/maps/NewMap5/scripts.pory"
	.string "Aw cmon, not this tough guy act again.\n"
	.string "I'm pretty sure you want my help$"

R1Correct_Text_0:
# 79 "data/maps/NewMap5/scripts.pory"
	.string "impressive, you saw through my trick.\n"
	.string "next time wont be so easy though. take\l"
	.string "this item as a reward$"

R1Failed_Text_0:
# 89 "data/maps/NewMap5/scripts.pory"
	.string "HA, arent I clever to trick you like\n"
	.string "that-$"

R2Failed_Text_0:
# 107 "data/maps/NewMap5/scripts.pory"
	.string "HA, better luck next time!$"

waitfornextriddle_Text_0:
# 115 "data/maps/NewMap5/scripts.pory"
	.string "leave me alone for now until youve\n"
	.string "beaten more trainers$"
