# 1 "data/maps/captianroom/scripts.pory"

# 2 "data/maps/captianroom/scripts.pory"
captianroom_MapScripts::
# 3 "data/maps/captianroom/scripts.pory"
	.byte 0

captianroom_EventScript_Pokeball1::
# 8 "data/maps/captianroom/scripts.pory"
	lockall
# 9 "data/maps/captianroom/scripts.pory"
	showmonpic SPECIES_SABLEYE, 10, 3
# 10 "data/maps/captianroom/scripts.pory"
	msgbox captianroom_EventScript_Pokeball1_Text_0, MSGBOX_YESNO
# 11 "data/maps/captianroom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq captianroom_EventScript_Pokeball1_2
# 42 "data/maps/captianroom/scripts.pory"
	hidemonpic
# 43 "data/maps/captianroom/scripts.pory"
	msgbox NewProfessor_NotChosen
captianroom_EventScript_Pokeball1_1:
# 45 "data/maps/captianroom/scripts.pory"
	waitmessage
# 46 "data/maps/captianroom/scripts.pory"
	releaseall
	end

captianroom_EventScript_Pokeball1_2:
# 12 "data/maps/captianroom/scripts.pory"
	givemon SPECIES_SABLEYE, 5, ITEM_BERRY_JUICE, abilityNum = 2, move1 = MOVE_WILL_O_WISP, move2 = MOVE_FAKE_OUT, move3 = MOVE_TOXIC, move4 = MOVE_ENCORE
# 13 "data/maps/captianroom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq captianroom_EventScript_Pokeball1_6
# 24 "data/maps/captianroom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq captianroom_EventScript_Pokeball1_7
captianroom_EventScript_Pokeball1_5:
# 31 "data/maps/captianroom/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, captianroom_EventScript_Pokeball1_10
# 37 "data/maps/captianroom/scripts.pory"
	hidemonpic
# 38 "data/maps/captianroom/scripts.pory"
	msgbox captianroom_EventScript_Pokeball1_Text_3
	goto captianroom_EventScript_Pokeball1_1

captianroom_EventScript_Pokeball1_6:
# 14 "data/maps/captianroom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 15 "data/maps/captianroom/scripts.pory"
	msgbox captianroom_EventScript_Pokeball1_Text_1
# 16 "data/maps/captianroom/scripts.pory"
	removeobject 3
# 17 "data/maps/captianroom/scripts.pory"
	setvar VAR_UNUSED_0x40FB, 1
# 18 "data/maps/captianroom/scripts.pory"
	setvar VAR_UNUSED_0x40FC, 1
# 19 "data/maps/captianroom/scripts.pory"
	setvar VAR_UNUSED_0x40FD, 2
# 20 "data/maps/captianroom/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 21 "data/maps/captianroom/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 22 "data/maps/captianroom/scripts.pory"
	call NicknamePartyMon
	goto captianroom_EventScript_Pokeball1_5

captianroom_EventScript_Pokeball1_7:
# 25 "data/maps/captianroom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 26 "data/maps/captianroom/scripts.pory"
	msgbox captianroom_EventScript_Pokeball1_Text_1
# 27 "data/maps/captianroom/scripts.pory"
	removeobject 1
# 28 "data/maps/captianroom/scripts.pory"
	setflag STARTED_GAME
# 29 "data/maps/captianroom/scripts.pory"
	call NicknameBoxMon
	goto captianroom_EventScript_Pokeball1_5

captianroom_EventScript_Pokeball1_10:
# 32 "data/maps/captianroom/scripts.pory"
	msgbox captianroom_EventScript_Pokeball1_Text_2
# 33 "data/maps/captianroom/scripts.pory"
	removeobject 1
# 34 "data/maps/captianroom/scripts.pory"
	removeobject 4
	goto captianroom_EventScript_Pokeball1_1


captianroom_EventScript_Pokeball2::
# 53 "data/maps/captianroom/scripts.pory"
	lockall
# 54 "data/maps/captianroom/scripts.pory"
	showmonpic SPECIES_PARASECT, 10, 3
# 55 "data/maps/captianroom/scripts.pory"
	msgbox captianroom_EventScript_Pokeball2_Text_0, MSGBOX_YESNO
# 56 "data/maps/captianroom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq captianroom_EventScript_Pokeball2_2
# 87 "data/maps/captianroom/scripts.pory"
	hidemonpic
# 88 "data/maps/captianroom/scripts.pory"
	msgbox NewProfessor_NotChosen
captianroom_EventScript_Pokeball2_1:
# 90 "data/maps/captianroom/scripts.pory"
	waitmessage
# 91 "data/maps/captianroom/scripts.pory"
	releaseall
	end

captianroom_EventScript_Pokeball2_2:
# 57 "data/maps/captianroom/scripts.pory"
	givemon SPECIES_PARASECT, 5, ITEM_BERRY_JUICE, abilityNum = 1, move1 = MOVE_SUBSTITUTE, move2 = MOVE_SPORE, move3 = MOVE_RAGE_POWDER, move4 = MOVE_LEECH_SEED
# 58 "data/maps/captianroom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq captianroom_EventScript_Pokeball2_6
# 69 "data/maps/captianroom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq captianroom_EventScript_Pokeball2_7
captianroom_EventScript_Pokeball2_5:
# 76 "data/maps/captianroom/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, captianroom_EventScript_Pokeball2_10
# 82 "data/maps/captianroom/scripts.pory"
	hidemonpic
# 83 "data/maps/captianroom/scripts.pory"
	msgbox captianroom_EventScript_Pokeball1_Text_3
	goto captianroom_EventScript_Pokeball2_1

captianroom_EventScript_Pokeball2_6:
# 59 "data/maps/captianroom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 60 "data/maps/captianroom/scripts.pory"
	msgbox captianroom_EventScript_Pokeball2_Text_1
# 61 "data/maps/captianroom/scripts.pory"
	removeobject 1
# 62 "data/maps/captianroom/scripts.pory"
	setvar VAR_UNUSED_0x40FB, 1
# 63 "data/maps/captianroom/scripts.pory"
	setvar VAR_UNUSED_0x40FC, 1
# 64 "data/maps/captianroom/scripts.pory"
	setvar VAR_UNUSED_0x40FD, 2
# 65 "data/maps/captianroom/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 66 "data/maps/captianroom/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 67 "data/maps/captianroom/scripts.pory"
	call NicknamePartyMon
	goto captianroom_EventScript_Pokeball2_5

captianroom_EventScript_Pokeball2_7:
# 70 "data/maps/captianroom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 71 "data/maps/captianroom/scripts.pory"
	msgbox captianroom_EventScript_Pokeball2_Text_1
# 72 "data/maps/captianroom/scripts.pory"
	removeobject 1
# 73 "data/maps/captianroom/scripts.pory"
	setflag STARTED_GAME
# 74 "data/maps/captianroom/scripts.pory"
	call NicknameBoxMon
	goto captianroom_EventScript_Pokeball2_5

captianroom_EventScript_Pokeball2_10:
# 77 "data/maps/captianroom/scripts.pory"
	msgbox captianroom_EventScript_Pokeball1_Text_2
# 78 "data/maps/captianroom/scripts.pory"
	removeobject 4
# 79 "data/maps/captianroom/scripts.pory"
	removeobject 3
	goto captianroom_EventScript_Pokeball2_1


captianroom_EventScript_Pokeball3::
# 98 "data/maps/captianroom/scripts.pory"
	lockall
# 99 "data/maps/captianroom/scripts.pory"
	showmonpic SPECIES_TOGEDEMARU, 10, 3
# 100 "data/maps/captianroom/scripts.pory"
	msgbox captianroom_EventScript_Pokeball3_Text_0, MSGBOX_YESNO
# 101 "data/maps/captianroom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq captianroom_EventScript_Pokeball3_2
# 132 "data/maps/captianroom/scripts.pory"
	hidemonpic
# 133 "data/maps/captianroom/scripts.pory"
	msgbox NewProfessor_NotChosen
captianroom_EventScript_Pokeball3_1:
# 135 "data/maps/captianroom/scripts.pory"
	waitmessage
# 136 "data/maps/captianroom/scripts.pory"
	releaseall
	end

captianroom_EventScript_Pokeball3_2:
# 102 "data/maps/captianroom/scripts.pory"
	givemon SPECIES_TOGEDEMARU, 5, ITEM_BERRY_JUICE, abilityNum = 2, move1 = MOVE_FAKE_OUT, move2 = MOVE_RECYCLE, move3 = MOVE_SPIKY_SHIELD, move4 = MOVE_ENCORE, hpIv = 0
# 103 "data/maps/captianroom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq captianroom_EventScript_Pokeball3_6
# 114 "data/maps/captianroom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq captianroom_EventScript_Pokeball3_7
captianroom_EventScript_Pokeball3_5:
# 121 "data/maps/captianroom/scripts.pory"
	goto_if_set FLAG_UNUSED_0x021, captianroom_EventScript_Pokeball3_10
# 127 "data/maps/captianroom/scripts.pory"
	hidemonpic
# 128 "data/maps/captianroom/scripts.pory"
	msgbox captianroom_EventScript_Pokeball1_Text_3
	goto captianroom_EventScript_Pokeball3_1

captianroom_EventScript_Pokeball3_6:
# 104 "data/maps/captianroom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 105 "data/maps/captianroom/scripts.pory"
	msgbox captianroom_EventScript_Pokeball3_Text_1
# 106 "data/maps/captianroom/scripts.pory"
	removeobject 4
# 107 "data/maps/captianroom/scripts.pory"
	setvar VAR_UNUSED_0x40FB, 1
# 108 "data/maps/captianroom/scripts.pory"
	setvar VAR_UNUSED_0x40FC, 1
# 109 "data/maps/captianroom/scripts.pory"
	setvar VAR_UNUSED_0x40FD, 2
# 110 "data/maps/captianroom/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 111 "data/maps/captianroom/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 112 "data/maps/captianroom/scripts.pory"
	call NicknamePartyMon
	goto captianroom_EventScript_Pokeball3_5

captianroom_EventScript_Pokeball3_7:
# 115 "data/maps/captianroom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 116 "data/maps/captianroom/scripts.pory"
	msgbox captianroom_EventScript_Pokeball3_Text_2
# 117 "data/maps/captianroom/scripts.pory"
	removeobject 4
# 118 "data/maps/captianroom/scripts.pory"
	setflag STARTED_GAME
# 119 "data/maps/captianroom/scripts.pory"
	call NicknameBoxMon
	goto captianroom_EventScript_Pokeball3_5

captianroom_EventScript_Pokeball3_10:
# 122 "data/maps/captianroom/scripts.pory"
	msgbox captianroom_EventScript_Pokeball1_Text_2
# 123 "data/maps/captianroom/scripts.pory"
	removeobject 1
# 124 "data/maps/captianroom/scripts.pory"
	removeobject 3
	goto captianroom_EventScript_Pokeball3_1


NicknamePartyMon::
# 143 "data/maps/captianroom/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 144 "data/maps/captianroom/scripts.pory"
	hidemonpic
# 145 "data/maps/captianroom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 146 "data/maps/captianroom/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 147 "data/maps/captianroom/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 155 "data/maps/captianroom/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 156 "data/maps/captianroom/scripts.pory"
	hidemonpic
# 157 "data/maps/captianroom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 160 "data/maps/captianroom/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 158 "data/maps/captianroom/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


captianroom_EventScript_captianspeech::
# 169 "data/maps/captianroom/scripts.pory"
	compare VAR_UNUSED_0x40FD, 1
	goto_if_eq captianroom_EventScript_captianspeech_1
# 175 "data/maps/captianroom/scripts.pory"
	faceplayer
# 176 "data/maps/captianroom/scripts.pory"
	msgbox captianroom_EventScript_captianspeech_Text_1
# 177 "data/maps/captianroom/scripts.pory"
	closemessage
	return

captianroom_EventScript_captianspeech_1:
# 170 "data/maps/captianroom/scripts.pory"
	faceplayer
# 171 "data/maps/captianroom/scripts.pory"
	msgbox captianroom_EventScript_captianspeech_Text_0
# 172 "data/maps/captianroom/scripts.pory"
	closemessage
	return


captianroom_Trigger_startercutscene::
# 183 "data/maps/captianroom/scripts.pory"
	lockall
# 184 "data/maps/captianroom/scripts.pory"
	msgbox captianroom_Trigger_startercutscene_Text_0
# 185 "data/maps/captianroom/scripts.pory"
	waitmessage
# 186 "data/maps/captianroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CutsceneStarterWalk
# 187 "data/maps/captianroom/scripts.pory"
	waitmovement 0
# 188 "data/maps/captianroom/scripts.pory"
	msgbox captianroom_Trigger_startercutscene_Text_1
# 189 "data/maps/captianroom/scripts.pory"
	waitmessage
# 190 "data/maps/captianroom/scripts.pory"
	closemessage
# 191 "data/maps/captianroom/scripts.pory"
	setvar VAR_UNUSED_0x40FD, 1
# 192 "data/maps/captianroom/scripts.pory"
	releaseall
	return


# 195 "data/maps/captianroom/scripts.pory"
CutsceneStarterWalk:
# 196 "data/maps/captianroom/scripts.pory"
	walk_up
# 196 "data/maps/captianroom/scripts.pory"
	walk_up
# 196 "data/maps/captianroom/scripts.pory"
	walk_up
# 196 "data/maps/captianroom/scripts.pory"
	walk_up
# 196 "data/maps/captianroom/scripts.pory"
	walk_up
	step_end

captianroom_Trigger_DontLeaveYet::
# 200 "data/maps/captianroom/scripts.pory"
	lockall
# 201 "data/maps/captianroom/scripts.pory"
	msgbox captianroom_Trigger_DontLeaveYet_Text_0
# 202 "data/maps/captianroom/scripts.pory"
	waitmessage
# 203 "data/maps/captianroom/scripts.pory"
	closemessage
# 204 "data/maps/captianroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HaventPicked
# 205 "data/maps/captianroom/scripts.pory"
	waitmovement 0
# 206 "data/maps/captianroom/scripts.pory"
	releaseall
	return


# 210 "data/maps/captianroom/scripts.pory"
HaventPicked:
# 211 "data/maps/captianroom/scripts.pory"
	walk_up
	step_end

captianroom_EventScript_Pokeball1_Text_0:
# 10 "data/maps/captianroom/scripts.pory"
	.string "Do you want to choose sableye?$"

captianroom_EventScript_Pokeball1_Text_1:
# 15 "data/maps/captianroom/scripts.pory"
	.string "Recieved sableye$"

captianroom_EventScript_Pokeball1_Text_2:
# 32 "data/maps/captianroom/scripts.pory"
	.string "dont be greedy!$"

captianroom_EventScript_Pokeball1_Text_3:
# 38 "data/maps/captianroom/scripts.pory"
	.string "No More Room$"

captianroom_EventScript_Pokeball2_Text_0:
# 55 "data/maps/captianroom/scripts.pory"
	.string "Do you want to choose Parasect?$"

captianroom_EventScript_Pokeball2_Text_1:
# 60 "data/maps/captianroom/scripts.pory"
	.string "Recieved Parasect$"

captianroom_EventScript_Pokeball3_Text_0:
# 100 "data/maps/captianroom/scripts.pory"
	.string "Do you want to choose Togidi?$"

captianroom_EventScript_Pokeball3_Text_1:
# 105 "data/maps/captianroom/scripts.pory"
	.string "Recieved Togidi$"

captianroom_EventScript_Pokeball3_Text_2:
# 116 "data/maps/captianroom/scripts.pory"
	.string "Recieved Mudkip$"

NicknamePartyMon_Text_0:
# 143 "data/maps/captianroom/scripts.pory"
	.string "Give it a nickname?$"

captianroom_EventScript_captianspeech_Text_0:
# 171 "data/maps/captianroom/scripts.pory"
	.string "Go on, pick your starter!$"

captianroom_EventScript_captianspeech_Text_1:
# 176 "data/maps/captianroom/scripts.pory"
	.string "go find your friend$"

captianroom_Trigger_startercutscene_Text_0:
# 184 "data/maps/captianroom/scripts.pory"
	.string "Oh hello! come in, come in$"

captianroom_Trigger_startercutscene_Text_1:
# 188 "data/maps/captianroom/scripts.pory"
	.string "You are the reasearcher the professor\n"
	.string "sent. The professor sent some pokemon\l"
	.string "for you to choose from so that you can\l"
	.string "use them on your journey.$"

captianroom_Trigger_DontLeaveYet_Text_0:
# 201 "data/maps/captianroom/scripts.pory"
	.string "Wait! You havent picked!$"

NewProfessor_NotChosen::
# 164 "data/maps/captianroom/scripts.pory"
	.string "You did not choose the Pokemon$"
