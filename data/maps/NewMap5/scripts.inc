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
# 22 "data/maps/NewMap5/scripts.pory"
	compare VAR_0x8008, 13
	goto_if_eq NewMap5_EventScript_clevermanscript_8
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

NewMap5_EventScript_clevermanscript_8:
# 23 "data/maps/NewMap5/scripts.pory"
	call R4cutscene
	return


R1::
# 30 "data/maps/NewMap5/scripts.pory"
	MSGBOX R1_Text_0
# 31 "data/maps/NewMap5/scripts.pory"
	MSGBOX R1_Text_1, MSGBOX_YESNO
# 32 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq R1_1
# 52 "data/maps/NewMap5/scripts.pory"
	MSGBOX R1_Text_3
# 53 "data/maps/NewMap5/scripts.pory"
	closemessage
	return

R1_1:
# 33 "data/maps/NewMap5/scripts.pory"
	message R1_Text_2
# 34 "data/maps/NewMap5/scripts.pory"
	multichoice 25, 5, MULTI_RIDDLE_ONE, 0
# 35 "data/maps/NewMap5/scripts.pory"
	closemessage
# 36 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq R1_4
# 41 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq R1_5
# 46 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq R1_6
	return

R1_4:
# 37 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 8
# 38 "data/maps/NewMap5/scripts.pory"
	setflag R1ANSWERGIVEN
# 39 "data/maps/NewMap5/scripts.pory"
	call R1Correct
	return

R1_5:
# 42 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 8
# 43 "data/maps/NewMap5/scripts.pory"
	setflag R1ANSWERGIVEN
# 44 "data/maps/NewMap5/scripts.pory"
	call R1Failed
	return

R1_6:
# 47 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 8
# 48 "data/maps/NewMap5/scripts.pory"
	setflag R1ANSWERGIVEN
# 49 "data/maps/NewMap5/scripts.pory"
	call R1Failed
	return


R2::
# 58 "data/maps/NewMap5/scripts.pory"
	MSGBOX R2_Text_0
# 59 "data/maps/NewMap5/scripts.pory"
	MSGBOX R2_Text_1, MSGBOX_YESNO
# 60 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq R2_1
# 77 "data/maps/NewMap5/scripts.pory"
	MSGBOX R2_Text_3
# 78 "data/maps/NewMap5/scripts.pory"
	closemessage
	return

R2_1:
# 61 "data/maps/NewMap5/scripts.pory"
	message R2_Text_2
# 62 "data/maps/NewMap5/scripts.pory"
	multichoice 25, 5, MULTI_RIDDLE_TWO, 0
# 63 "data/maps/NewMap5/scripts.pory"
	closemessage
# 64 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq R2_4
# 68 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq R2_5
# 72 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq R2_6
	return

R2_4:
# 65 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 10
# 66 "data/maps/NewMap5/scripts.pory"
	call R2Correct
	return

R2_5:
# 69 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 10
# 70 "data/maps/NewMap5/scripts.pory"
	call R2Failed
	return

R2_6:
# 73 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 10
# 74 "data/maps/NewMap5/scripts.pory"
	call R2Failed
	return


R3::
# 83 "data/maps/NewMap5/scripts.pory"
	MSGBOX R3_Text_0
# 84 "data/maps/NewMap5/scripts.pory"
	MSGBOX R3_Text_1, MSGBOX_YESNO
# 85 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq R3_1
# 102 "data/maps/NewMap5/scripts.pory"
	MSGBOX R3_Text_3
# 103 "data/maps/NewMap5/scripts.pory"
	closemessage
	return

R3_1:
# 86 "data/maps/NewMap5/scripts.pory"
	message R3_Text_2
# 87 "data/maps/NewMap5/scripts.pory"
	multichoice 25, 5, MULTI_RIDDLE_THREE, 0
# 88 "data/maps/NewMap5/scripts.pory"
	closemessage
# 89 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq R3_4
# 93 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq R3_5
# 97 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq R3_6
	return

R3_4:
# 90 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 12
# 91 "data/maps/NewMap5/scripts.pory"
	call R3Failed
	return

R3_5:
# 94 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 12
# 95 "data/maps/NewMap5/scripts.pory"
	call R3Correct
	return

R3_6:
# 98 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8008, 12
# 99 "data/maps/NewMap5/scripts.pory"
	call R3Failed
	return


R4cutscene::
# 108 "data/maps/NewMap5/scripts.pory"
	lockall
# 109 "data/maps/NewMap5/scripts.pory"
	MSGBOX R4cutscene_Text_0
# 110 "data/maps/NewMap5/scripts.pory"
	delay 40
# 111 "data/maps/NewMap5/scripts.pory"
	MSGBOX R4cutscene_Text_1
# 112 "data/maps/NewMap5/scripts.pory"
	delay 40
# 113 "data/maps/NewMap5/scripts.pory"
	MSGBOX R4cutscene_Text_1
# 114 "data/maps/NewMap5/scripts.pory"
	delay 40
# 115 "data/maps/NewMap5/scripts.pory"
	MSGBOX R4cutscene_Text_2
# 116 "data/maps/NewMap5/scripts.pory"
	delay 40
# 117 "data/maps/NewMap5/scripts.pory"
	MSGBOX R4cutscene_Text_3
# 118 "data/maps/NewMap5/scripts.pory"
	delay 40
# 119 "data/maps/NewMap5/scripts.pory"
	fadescreen FADE_TO_BLACK
# 120 "data/maps/NewMap5/scripts.pory"
	special HealPlayerParty
# 121 "data/maps/NewMap5/scripts.pory"
	warpsilent MAP_TRICKHOUSE_FINALE, 20, 39
# 122 "data/maps/NewMap5/scripts.pory"
	waitstate
	return


R1Correct::
# 127 "data/maps/NewMap5/scripts.pory"
	lockall
# 128 "data/maps/NewMap5/scripts.pory"
	MSGBOX R1Correct_Text_0
# 129 "data/maps/NewMap5/scripts.pory"
	giveitem ITEM_FOCUS_SASH
# 130 "data/maps/NewMap5/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 131 "data/maps/NewMap5/scripts.pory"
	closemessage
# 132 "data/maps/NewMap5/scripts.pory"
	releaseall
	return


R1Failed::
# 137 "data/maps/NewMap5/scripts.pory"
	lockall
# 138 "data/maps/NewMap5/scripts.pory"
	MSGBOX R1Failed_Text_0
# 139 "data/maps/NewMap5/scripts.pory"
	closemessage
# 140 "data/maps/NewMap5/scripts.pory"
	releaseall
	return


R2Correct::
# 144 "data/maps/NewMap5/scripts.pory"
	lockall
# 145 "data/maps/NewMap5/scripts.pory"
	MSGBOX R2Correct_Text_0
# 146 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8006, 7
# 147 "data/maps/NewMap5/scripts.pory"
	giveitem ITEM_MENTAL_HERB
# 148 "data/maps/NewMap5/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 149 "data/maps/NewMap5/scripts.pory"
	closemessage
# 150 "data/maps/NewMap5/scripts.pory"
	releaseall
	return


R2Failed::
# 154 "data/maps/NewMap5/scripts.pory"
	lockall
# 155 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8006, 7
# 156 "data/maps/NewMap5/scripts.pory"
	MSGBOX R2Failed_Text_0
# 157 "data/maps/NewMap5/scripts.pory"
	closemessage
# 158 "data/maps/NewMap5/scripts.pory"
	releaseall
	return


R3Correct::
# 163 "data/maps/NewMap5/scripts.pory"
	lockall
# 164 "data/maps/NewMap5/scripts.pory"
	MSGBOX R3Correct_Text_0
# 165 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8006, 10
# 166 "data/maps/NewMap5/scripts.pory"
	waitmessage
# 167 "data/maps/NewMap5/scripts.pory"
	givemon SPECIES_BONSLY, 5, ITEM_BERRY_JUICE, abilityNum = 0, move1 = MOVE_SWITCHEROO, move2 = MOVE_STEALTH_ROCK, move3 = MOVE_TORMENT, move4 = MOVE_ENDEAVOR
# 168 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq R3Correct_2
# 175 "data/maps/NewMap5/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq R3Correct_3
# 181 "data/maps/NewMap5/scripts.pory"
	hidemonpic
# 182 "data/maps/NewMap5/scripts.pory"
	msgbox R3Correct_Text_2
R3Correct_1:
# 184 "data/maps/NewMap5/scripts.pory"
	closemessage
# 185 "data/maps/NewMap5/scripts.pory"
	releaseall
	return

R3Correct_2:
# 169 "data/maps/NewMap5/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 170 "data/maps/NewMap5/scripts.pory"
	msgbox R3Correct_Text_1
# 171 "data/maps/NewMap5/scripts.pory"
	waitmessage
# 172 "data/maps/NewMap5/scripts.pory"
	call NicknamePartyMon
# 173 "data/maps/NewMap5/scripts.pory"
	closemessage
	goto R3Correct_1

R3Correct_3:
# 176 "data/maps/NewMap5/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 177 "data/maps/NewMap5/scripts.pory"
	msgbox R3Correct_Text_1
# 178 "data/maps/NewMap5/scripts.pory"
	call NicknameBoxMon
	goto R3Correct_1


R3Failed::
# 189 "data/maps/NewMap5/scripts.pory"
	lockall
# 190 "data/maps/NewMap5/scripts.pory"
	setvar VAR_0x8006, 10
# 191 "data/maps/NewMap5/scripts.pory"
	MSGBOX R3Failed_Text_0
# 192 "data/maps/NewMap5/scripts.pory"
	closemessage
# 193 "data/maps/NewMap5/scripts.pory"
	releaseall
	return


waitfornextriddle::
# 198 "data/maps/NewMap5/scripts.pory"
	lockall
# 199 "data/maps/NewMap5/scripts.pory"
	MSGBOX waitfornextriddle_Text_0
# 200 "data/maps/NewMap5/scripts.pory"
	closemessage
# 201 "data/maps/NewMap5/scripts.pory"
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
# 30 "data/maps/NewMap5/scripts.pory"
	.string "Oh-ho, I can sense that someone here\n"
	.string "just won a battle. I have a riddle that,\l"
	.string "if answered correctly, will allow you to\l"
	.string "complete the next challenge easily. Are\l"
	.string "you ready?$"

R1_Text_1:
# 31 "data/maps/NewMap5/scripts.pory"
	.string "do the riddle?$"

R1_Text_2:
# 33 "data/maps/NewMap5/scripts.pory"
	.string "OK! here is your question. What is the\n"
	.string "most used pokemon in VGC as of 2024$"

R1_Text_3:
# 52 "data/maps/NewMap5/scripts.pory"
	.string "did the dev remember to code itemless\n"
	.string "run viability?..... probably not$"

R2_Text_0:
# 58 "data/maps/NewMap5/scripts.pory"
	.string "Oh-ho, Back for More? Lets see your\n"
	.string "riddle prowess this time! Same deal as\l"
	.string "befor ok?$"

R2_Text_1:
# 59 "data/maps/NewMap5/scripts.pory"
	.string "do the second riddle?$"

R2_Text_2:
# 61 "data/maps/NewMap5/scripts.pory"
	.string "OK! here is your question. What type of\n"
	.string "damage does the TANGA BERRY reduce?$"

R2_Text_3:
# 77 "data/maps/NewMap5/scripts.pory"
	.string "Aw cmon, not this tough guy act again.\n"
	.string "I'm pretty sure you want my help$"

R3_Text_0:
# 83 "data/maps/NewMap5/scripts.pory"
	.string "Cant resist the thrill of answering my\n"
	.string "riddles eh? very well, youve been doing\l"
	.string "well so far.$"

R3_Text_1:
# 84 "data/maps/NewMap5/scripts.pory"
	.string "Begin the Third riddle?$"

R3_Text_2:
# 86 "data/maps/NewMap5/scripts.pory"
	.string "OK! Which of these pokemon have the\n"
	.string "lowest sptak$"

R3_Text_3:
# 102 "data/maps/NewMap5/scripts.pory"
	.string "cmon you've done so well in the past\n"
	.string "riddles!$"

R4cutscene_Text_0:
# 109 "data/maps/NewMap5/scripts.pory"
	.string "wow.. you've made it this far. just one\n"
	.string "more island challenge....$"

R4cutscene_Text_1:
# 111 "data/maps/NewMap5/scripts.pory"
	.string "...$"

R4cutscene_Text_2:
# 115 "data/maps/NewMap5/scripts.pory"
	.string "oh? you want another simple riddle... a\n"
	.string "and a free tool to help you in the last\l"
	.string "challenge....$"

R4cutscene_Text_3:
# 117 "data/maps/NewMap5/scripts.pory"
	.string "very well.. riddle me this: why would two\n"
	.string "strangers who've never met you\l"
	.string "suddenly decide to help you get off\l"
	.string "this island... ... ... ... She convinced me to\l"
	.string "give you a chance and i must say you've\l"
	.string "impressed me... unfortunatly your final\l"
	.string "challenge is ME! CLEVERMAN! GOOD LUCK\l"
	.string "CHALLENGER!$"

R1Correct_Text_0:
# 128 "data/maps/NewMap5/scripts.pory"
	.string "impressive, you saw through my trick.\n"
	.string "next time wont be so easy though. take\l"
	.string "this item as a reward$"

R1Failed_Text_0:
# 138 "data/maps/NewMap5/scripts.pory"
	.string "HA, arent I clever to trick you like\n"
	.string "that-$"

R2Correct_Text_0:
# 145 "data/maps/NewMap5/scripts.pory"
	.string "impressive, you saw through my trick\n"
	.string "again. take this item as to help you\l"
	.string "with the challanges.$"

R2Failed_Text_0:
# 156 "data/maps/NewMap5/scripts.pory"
	.string "HA, better luck next time!$"

R3Correct_Text_0:
# 164 "data/maps/NewMap5/scripts.pory"
	.string "impressive, you're spot on. take your\n"
	.string "reward and shoo$"

R3Correct_Text_1:
# 170 "data/maps/NewMap5/scripts.pory"
	.string "Recieved Bonsly$"

R3Correct_Text_2:
# 182 "data/maps/NewMap5/scripts.pory"
	.string "No More Room$"

R3Failed_Text_0:
# 191 "data/maps/NewMap5/scripts.pory"
	.string "HA, You're REALLY bad at this HEHE$"

waitfornextriddle_Text_0:
# 199 "data/maps/NewMap5/scripts.pory"
	.string "leave me alone for now until youve\n"
	.string "beaten more trainers$"
