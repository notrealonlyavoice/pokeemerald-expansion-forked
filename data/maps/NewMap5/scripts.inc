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
# 18 "data/maps/NewMap5/scripts.pory"
	compare VAR_0x8008, 11
	goto_if_eq NewMap5_EventScript_clevermanscript_6
# 20 "data/maps/NewMap5/scripts.pory"
	compare VAR_0x8008, 12
	goto_if_eq NewMap5_EventScript_clevermanscript_7
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

NewMap5_EventScript_clevermanscript_6:
# 19 "data/maps/NewMap5/scripts.pory"
	call R3
	return

NewMap5_EventScript_clevermanscript_7:
# 21 "data/maps/NewMap5/scripts.pory"
	call waitfornextriddle
	return


R1::
# 28 "data/maps/NewMap5/scripts.pory"
	MSGBOX R1_Text_0
# 29 "data/maps/NewMap5/scripts.pory"
	MSGBOX R1_Text_1, MSGBOX_YESNO
# 30 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq R1_1
# 50 "data/maps/NewMap5/scripts.pory"
	MSGBOX R1_Text_3
# 51 "data/maps/NewMap5/scripts.pory"
	closemessage
	return

R1_1:
# 31 "data/maps/NewMap5/scripts.pory"
	message R1_Text_2
# 32 "data/maps/NewMap5/scripts.pory"
	multichoice 25, 5, MULTI_RIDDLE_ONE, 0
# 33 "data/maps/NewMap5/scripts.pory"
	closemessage
# 34 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq R1_4
# 39 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq R1_5
# 44 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq R1_6
	return

R1_4:
# 35 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 8
# 36 "data/maps/NewMap5/scripts.pory"
	setflag R1ANSWERGIVEN
# 37 "data/maps/NewMap5/scripts.pory"
	call R1Correct
	return

R1_5:
# 40 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 8
# 41 "data/maps/NewMap5/scripts.pory"
	setflag R1ANSWERGIVEN
# 42 "data/maps/NewMap5/scripts.pory"
	call R1Failed
	return

R1_6:
# 45 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 8
# 46 "data/maps/NewMap5/scripts.pory"
	setflag R1ANSWERGIVEN
# 47 "data/maps/NewMap5/scripts.pory"
	call R1Failed
	return


R2::
# 56 "data/maps/NewMap5/scripts.pory"
	MSGBOX R2_Text_0
# 57 "data/maps/NewMap5/scripts.pory"
	MSGBOX R2_Text_1, MSGBOX_YESNO
# 58 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq R2_1
# 75 "data/maps/NewMap5/scripts.pory"
	MSGBOX R2_Text_3
# 76 "data/maps/NewMap5/scripts.pory"
	closemessage
	return

R2_1:
# 59 "data/maps/NewMap5/scripts.pory"
	message R2_Text_2
# 60 "data/maps/NewMap5/scripts.pory"
	multichoice 25, 5, MULTI_RIDDLE_TWO, 0
# 61 "data/maps/NewMap5/scripts.pory"
	closemessage
# 62 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq R2_4
# 66 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq R2_5
# 70 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq R2_6
	return

R2_4:
# 63 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 10
# 64 "data/maps/NewMap5/scripts.pory"
	call R2Correct
	return

R2_5:
# 67 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 10
# 68 "data/maps/NewMap5/scripts.pory"
	call R2Failed
	return

R2_6:
# 71 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 10
# 72 "data/maps/NewMap5/scripts.pory"
	call R2Failed
	return


R3::
# 81 "data/maps/NewMap5/scripts.pory"
	MSGBOX R3_Text_0
# 82 "data/maps/NewMap5/scripts.pory"
	MSGBOX R3_Text_1, MSGBOX_YESNO
# 83 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq R3_1
# 100 "data/maps/NewMap5/scripts.pory"
	MSGBOX R3_Text_3
# 101 "data/maps/NewMap5/scripts.pory"
	closemessage
	return

R3_1:
# 84 "data/maps/NewMap5/scripts.pory"
	message R3_Text_2
# 85 "data/maps/NewMap5/scripts.pory"
	multichoice 25, 5, MULTI_RIDDLE_THREE, 0
# 86 "data/maps/NewMap5/scripts.pory"
	closemessage
# 87 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq R3_4
# 91 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq R3_5
# 95 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq R3_6
	return

R3_4:
# 88 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 12
# 89 "data/maps/NewMap5/scripts.pory"
	call R3Failed
	return

R3_5:
# 92 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 12
# 93 "data/maps/NewMap5/scripts.pory"
	call R3Correct
	return

R3_6:
# 96 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 12
# 97 "data/maps/NewMap5/scripts.pory"
	call R3Failed
	return


R1Correct::
# 108 "data/maps/NewMap5/scripts.pory"
	lockall
# 109 "data/maps/NewMap5/scripts.pory"
	MSGBOX R1Correct_Text_0
# 110 "data/maps/NewMap5/scripts.pory"
	giveitem ITEM_FOCUS_SASH
# 111 "data/maps/NewMap5/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 112 "data/maps/NewMap5/scripts.pory"
	closemessage
# 113 "data/maps/NewMap5/scripts.pory"
	releaseall
	return


R1Failed::
# 118 "data/maps/NewMap5/scripts.pory"
	lockall
# 119 "data/maps/NewMap5/scripts.pory"
	MSGBOX R1Failed_Text_0
# 120 "data/maps/NewMap5/scripts.pory"
	closemessage
# 121 "data/maps/NewMap5/scripts.pory"
	releaseall
	return


R2Correct::
# 125 "data/maps/NewMap5/scripts.pory"
	lockall
# 126 "data/maps/NewMap5/scripts.pory"
	MSGBOX R2Correct_Text_0
# 127 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8006, 7
# 128 "data/maps/NewMap5/scripts.pory"
	giveitem ITEM_MENTAL_HERB
# 129 "data/maps/NewMap5/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 130 "data/maps/NewMap5/scripts.pory"
	closemessage
# 131 "data/maps/NewMap5/scripts.pory"
	releaseall
	return


R2Failed::
# 135 "data/maps/NewMap5/scripts.pory"
	lockall
# 136 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8006, 7
# 137 "data/maps/NewMap5/scripts.pory"
	MSGBOX R2Failed_Text_0
# 138 "data/maps/NewMap5/scripts.pory"
	closemessage
# 139 "data/maps/NewMap5/scripts.pory"
	releaseall
	return


R3Correct::
# 144 "data/maps/NewMap5/scripts.pory"
	lockall
# 145 "data/maps/NewMap5/scripts.pory"
	MSGBOX R3Correct_Text_0
# 146 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8006, 10
# 147 "data/maps/NewMap5/scripts.pory"
	waitmessage
# 148 "data/maps/NewMap5/scripts.pory"
	givemon SPECIES_BONSLY, 5, ITEM_BERRY_JUICE, abilityNum = 0, move1 = MOVE_SWITCHEROO, move2 = MOVE_STEALTH_ROCK, move3 = MOVE_COPYCAT, move4 = MOVE_ENDEAVOR
# 149 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq R3Correct_2
# 156 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq R3Correct_3
# 162 "data/maps/NewMap5/scripts.pory"
	hidemonpic
# 163 "data/maps/NewMap5/scripts.pory"
	msgbox R3Correct_Text_2
R3Correct_1:
# 165 "data/maps/NewMap5/scripts.pory"
	closemessage
# 166 "data/maps/NewMap5/scripts.pory"
	releaseall
	return

R3Correct_2:
# 150 "data/maps/NewMap5/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 151 "data/maps/NewMap5/scripts.pory"
	msgbox R3Correct_Text_1
# 152 "data/maps/NewMap5/scripts.pory"
	waitmessage
# 153 "data/maps/NewMap5/scripts.pory"
	call NicknamePartyMon
# 154 "data/maps/NewMap5/scripts.pory"
	closemessage
	goto R3Correct_1

R3Correct_3:
# 157 "data/maps/NewMap5/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 158 "data/maps/NewMap5/scripts.pory"
	msgbox R3Correct_Text_1
# 159 "data/maps/NewMap5/scripts.pory"
	call NicknameBoxMon
	goto R3Correct_1


R3Failed::
# 170 "data/maps/NewMap5/scripts.pory"
	lockall
# 171 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8006, 10
# 172 "data/maps/NewMap5/scripts.pory"
	MSGBOX R3Failed_Text_0
# 173 "data/maps/NewMap5/scripts.pory"
	closemessage
# 174 "data/maps/NewMap5/scripts.pory"
	releaseall
	return


waitfornextriddle::
# 179 "data/maps/NewMap5/scripts.pory"
	lockall
# 180 "data/maps/NewMap5/scripts.pory"
	MSGBOX waitfornextriddle_Text_0
# 181 "data/maps/NewMap5/scripts.pory"
	closemessage
# 182 "data/maps/NewMap5/scripts.pory"
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
# 28 "data/maps/NewMap5/scripts.pory"
	.string "Oh-ho, I can sense that someone here\n"
	.string "just won a battle. I have a riddle that,\l"
	.string "if answered correctly, will allow you to\l"
	.string "complete the next challenge easily. Are\l"
	.string "you ready?$"

R1_Text_1:
# 29 "data/maps/NewMap5/scripts.pory"
	.string "do the riddle?$"

R1_Text_2:
# 31 "data/maps/NewMap5/scripts.pory"
	.string "OK! here is your question. What is the\n"
	.string "most used pokemon in VGC as of 2024$"

R1_Text_3:
# 50 "data/maps/NewMap5/scripts.pory"
	.string "did the dev remember to code itemless\n"
	.string "run viability?..... probably not$"

R2_Text_0:
# 56 "data/maps/NewMap5/scripts.pory"
	.string "Oh-ho, Back for More? Lets see your\n"
	.string "riddle prowess this time! Same deal as\l"
	.string "befor ok?$"

R2_Text_1:
# 57 "data/maps/NewMap5/scripts.pory"
	.string "do the second riddle?$"

R2_Text_2:
# 59 "data/maps/NewMap5/scripts.pory"
	.string "OK! here is your question. What type of\n"
	.string "damage does the TANGA BERRY reduce?$"

R2_Text_3:
# 75 "data/maps/NewMap5/scripts.pory"
	.string "Aw cmon, not this tough guy act again.\n"
	.string "I'm pretty sure you want my help$"

R3_Text_0:
# 81 "data/maps/NewMap5/scripts.pory"
	.string "Cant resist the thrill of answering my\n"
	.string "riddles eh? very well, youve been doing\l"
	.string "well so far.$"

R3_Text_1:
# 82 "data/maps/NewMap5/scripts.pory"
	.string "Begin the Third riddle?$"

R3_Text_2:
# 84 "data/maps/NewMap5/scripts.pory"
	.string "OK! Which of these pokemon have the\n"
	.string "lowest sptak$"

R3_Text_3:
# 100 "data/maps/NewMap5/scripts.pory"
	.string "cmon you've done so well in the past\n"
	.string "riddles!$"

R1Correct_Text_0:
# 109 "data/maps/NewMap5/scripts.pory"
	.string "impressive, you saw through my trick.\n"
	.string "next time wont be so easy though. take\l"
	.string "this item as a reward$"

R1Failed_Text_0:
# 119 "data/maps/NewMap5/scripts.pory"
	.string "HA, arent I clever to trick you like\n"
	.string "that-$"

R2Correct_Text_0:
# 126 "data/maps/NewMap5/scripts.pory"
	.string "impressive, you saw through my trick\n"
	.string "again. take this item as to help you\l"
	.string "with the challanges.$"

R2Failed_Text_0:
# 137 "data/maps/NewMap5/scripts.pory"
	.string "HA, better luck next time!$"

R3Correct_Text_0:
# 145 "data/maps/NewMap5/scripts.pory"
	.string "impressive, you're spot on. take your\n"
	.string "reward and shoo$"

R3Correct_Text_1:
# 151 "data/maps/NewMap5/scripts.pory"
	.string "Recieved Bonsly$"

R3Correct_Text_2:
# 163 "data/maps/NewMap5/scripts.pory"
	.string "No More Room$"

R3Failed_Text_0:
# 172 "data/maps/NewMap5/scripts.pory"
	.string "HA, You're REALLY bad at this HEHE$"

waitfornextriddle_Text_0:
# 180 "data/maps/NewMap5/scripts.pory"
	.string "leave me alone for now until youve\n"
	.string "beaten more trainers$"
