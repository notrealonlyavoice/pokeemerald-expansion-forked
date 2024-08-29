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


R1::
# 20 "data/maps/NewMap5/scripts.pory"
	MSGBOX R1_Text_0
# 21 "data/maps/NewMap5/scripts.pory"
	MSGBOX R1_Text_1, MSGBOX_YESNO
# 22 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq R1_1
# 42 "data/maps/NewMap5/scripts.pory"
	MSGBOX R1_Text_3
# 43 "data/maps/NewMap5/scripts.pory"
	closemessage
	return

R1_1:
# 23 "data/maps/NewMap5/scripts.pory"
	message R1_Text_2
# 24 "data/maps/NewMap5/scripts.pory"
	multichoice 25, 5, MULTI_RIDDLE_ONE, 0
# 25 "data/maps/NewMap5/scripts.pory"
	closemessage
# 26 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq R1_4
# 31 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq R1_5
# 36 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq R1_6
	return

R1_4:
# 27 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 8
# 28 "data/maps/NewMap5/scripts.pory"
	setflag R1ANSWERGIVEN
# 29 "data/maps/NewMap5/scripts.pory"
	call R1Correct
	return

R1_5:
# 32 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 8
# 33 "data/maps/NewMap5/scripts.pory"
	setflag R1ANSWERGIVEN
# 34 "data/maps/NewMap5/scripts.pory"
	call R1Failed
	return

R1_6:
# 37 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 8
# 38 "data/maps/NewMap5/scripts.pory"
	setflag R1ANSWERGIVEN
# 39 "data/maps/NewMap5/scripts.pory"
	call R1Failed
	return


R1Correct::
# 48 "data/maps/NewMap5/scripts.pory"
	lockall
# 49 "data/maps/NewMap5/scripts.pory"
	MSGBOX R1Correct_Text_0
# 50 "data/maps/NewMap5/scripts.pory"
	giveitem ITEM_FOCUS_SASH
# 51 "data/maps/NewMap5/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 52 "data/maps/NewMap5/scripts.pory"
	closemessage
# 53 "data/maps/NewMap5/scripts.pory"
	releaseall
	return


R1Failed::
# 58 "data/maps/NewMap5/scripts.pory"
	lockall
# 59 "data/maps/NewMap5/scripts.pory"
	MSGBOX R1Failed_Text_0
# 60 "data/maps/NewMap5/scripts.pory"
	closemessage
# 61 "data/maps/NewMap5/scripts.pory"
	releaseall
	return


waitfornextriddle::
# 65 "data/maps/NewMap5/scripts.pory"
	lockall
# 66 "data/maps/NewMap5/scripts.pory"
	MSGBOX waitfornextriddle_Text_0
# 67 "data/maps/NewMap5/scripts.pory"
	closemessage
# 68 "data/maps/NewMap5/scripts.pory"
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
# 20 "data/maps/NewMap5/scripts.pory"
	.string "Oh-ho, I can sense that someone here\n"
	.string "just won a battle. I have a riddle that,\l"
	.string "if answered correctly, will allow you to\l"
	.string "complete the next challenge easily. Are\l"
	.string "you ready?$"

R1_Text_1:
# 21 "data/maps/NewMap5/scripts.pory"
	.string "do the riddle?$"

R1_Text_2:
# 23 "data/maps/NewMap5/scripts.pory"
	.string "OK! here is your question. What is the\n"
	.string "most used pokemon in VGC as of 2024$"

R1_Text_3:
# 42 "data/maps/NewMap5/scripts.pory"
	.string "did the dev remember to code itemless\n"
	.string "run viability?..... probably not$"

R1Correct_Text_0:
# 49 "data/maps/NewMap5/scripts.pory"
	.string "impressive, you saw through my trick.\n"
	.string "next time wont be so easy though. take\l"
	.string "this item as a reward$"

R1Failed_Text_0:
# 59 "data/maps/NewMap5/scripts.pory"
	.string "HA, arent I clever to trick you like\n"
	.string "that-$"

waitfornextriddle_Text_0:
# 66 "data/maps/NewMap5/scripts.pory"
	.string "leave me alone for now until youve\n"
	.string "beaten more trainers$"
