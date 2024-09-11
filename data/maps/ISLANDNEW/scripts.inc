# 1 "data/maps/ISLANDNEW/scripts.pory"

# 2 "data/maps/ISLANDNEW/scripts.pory"
ISLANDNEW_MapScripts::
# 3 "data/maps/ISLANDNEW/scripts.pory"
	.byte 0

ISLANDNEW_Trigger_triggeroneforcutscene::
# 7 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, correctfaceingdirection2
# 8 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_0
# 9 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 10 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
# 11 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 1, wakeuphuman
# 12 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 13 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_1
# 14 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_2, MSGBOX_YESNO
# 15 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDNEW_Trigger_triggeroneforcutscene_1
# 21 "data/maps/ISLANDNEW/scripts.pory"
	call areyousure
	return

ISLANDNEW_Trigger_triggeroneforcutscene_1:
# 16 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_3
# 17 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 18 "data/maps/ISLANDNEW/scripts.pory"
	setvar ( VAR_0x8006 ), 2
# 19 "data/maps/ISLANDNEW/scripts.pory"
	call remainingofcheckonplayercript
	return


ISLANDNEW_Trigger_triggeroneforcutscene2::
# 26 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, correctfaceingdirection2
# 27 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_0
# 28 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 29 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
# 30 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 1, wakeuphuman
# 31 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 32 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_1
# 33 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_2, MSGBOX_YESNO
# 34 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDNEW_Trigger_triggeroneforcutscene2_1
# 40 "data/maps/ISLANDNEW/scripts.pory"
	call areyousure
	return

ISLANDNEW_Trigger_triggeroneforcutscene2_1:
# 35 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_3
# 36 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 37 "data/maps/ISLANDNEW/scripts.pory"
	setvar ( VAR_0x8006 ), 2
# 38 "data/maps/ISLANDNEW/scripts.pory"
	call remainingofcheckonplayercript2
	return


ISLANDNEW_Trigger_triggeroneforcutscene3::
# 45 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, correctfaceingdirection2
# 46 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_0
# 47 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 48 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
# 49 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 1, wakeuphuman
# 50 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 51 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_1
# 52 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_2, MSGBOX_YESNO
# 53 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDNEW_Trigger_triggeroneforcutscene3_1
# 59 "data/maps/ISLANDNEW/scripts.pory"
	call areyousure
	return

ISLANDNEW_Trigger_triggeroneforcutscene3_1:
# 54 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_3
# 55 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 56 "data/maps/ISLANDNEW/scripts.pory"
	setvar ( VAR_0x8006 ), 2
# 57 "data/maps/ISLANDNEW/scripts.pory"
	call remainingofcheckonplayercript3
	return


ISLANDNEW_Trigger_triggeroneforcutscene4::
# 64 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, correctfaceingdirection2
# 65 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_0
# 66 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 67 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
# 68 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 1, wakeuphuman
# 69 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 70 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_1
# 71 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_2, MSGBOX_YESNO
# 72 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDNEW_Trigger_triggeroneforcutscene4_1
# 78 "data/maps/ISLANDNEW/scripts.pory"
	call areyousure
	return

ISLANDNEW_Trigger_triggeroneforcutscene4_1:
# 73 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_3
# 74 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 75 "data/maps/ISLANDNEW/scripts.pory"
	setvar ( VAR_0x8006 ), 2
# 76 "data/maps/ISLANDNEW/scripts.pory"
	call remainingofcheckonplayercript4
	return


areyousure::
# 83 "data/maps/ISLANDNEW/scripts.pory"
	msgbox areyousure_Text_0, MSGBOX_YESNO
# 84 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq areyousure_1
# 87 "data/maps/ISLANDNEW/scripts.pory"
	call remainingofcheckonplayercript
	return

areyousure_1:
# 85 "data/maps/ISLANDNEW/scripts.pory"
	call areyousure
	return


remainingofcheckonplayercript::
# 92 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 93 "data/maps/ISLANDNEW/scripts.pory"
	setvar VAR_0x8008, 3
# 94 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_0
# 95 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 1, letsago
# 96 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 97 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerletsago
# 98 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 99 "data/maps/ISLANDNEW/scripts.pory"
	setvar VAR_0x8008, 4
# 100 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_1
# 101 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 102 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_2
# 103 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 104 "data/maps/ISLANDNEW/scripts.pory"
	givemon SPECIES_MR_MIME, 5, ITEM_LEPPA_BERRY, abilityNum = 1, move1 = MOVE_TRICK, move2 = MOVE_PROTECT, move3 = MOVE_TRICK_ROOM, move4 = MOVE_CONFUSION
# 105 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq remainingofcheckonplayercript_2
# 112 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq remainingofcheckonplayercript_3
# 118 "data/maps/ISLANDNEW/scripts.pory"
	hidemonpic
# 119 "data/maps/ISLANDNEW/scripts.pory"
	msgbox remainingofcheckonplayercript_Text_4
remainingofcheckonplayercript_1:
# 121 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_5
# 122 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 123 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
# 124 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 1, immadipfr
# 125 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 126 "data/maps/ISLANDNEW/scripts.pory"
	removeobject 1
# 127 "data/maps/ISLANDNEW/scripts.pory"
	releaseall
	return

remainingofcheckonplayercript_2:
# 106 "data/maps/ISLANDNEW/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 107 "data/maps/ISLANDNEW/scripts.pory"
	msgbox remainingofcheckonplayercript_Text_3
# 108 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 109 "data/maps/ISLANDNEW/scripts.pory"
	call NicknamePartyMon
# 110 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
	goto remainingofcheckonplayercript_1

remainingofcheckonplayercript_3:
# 113 "data/maps/ISLANDNEW/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 114 "data/maps/ISLANDNEW/scripts.pory"
	msgbox remainingofcheckonplayercript_Text_3
# 115 "data/maps/ISLANDNEW/scripts.pory"
	call NicknameBoxMon
	goto remainingofcheckonplayercript_1


remainingofcheckonplayercript2::
# 132 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 133 "data/maps/ISLANDNEW/scripts.pory"
	setvar VAR_0x8008, 3
# 134 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_0
# 135 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 1, letsago
# 136 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 137 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerletsago2
# 138 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 139 "data/maps/ISLANDNEW/scripts.pory"
	setvar VAR_0x8008, 4
# 140 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_1
# 141 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 142 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_2
# 143 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 144 "data/maps/ISLANDNEW/scripts.pory"
	givemon SPECIES_MR_MIME, 5, ITEM_LEPPA_BERRY, abilityNum = 1, move1 = MOVE_TRICK, move2 = MOVE_PROTECT, move3 = MOVE_TRICK_ROOM, move4 = MOVE_TAUNT
# 145 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq remainingofcheckonplayercript2_2
# 152 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq remainingofcheckonplayercript2_3
# 158 "data/maps/ISLANDNEW/scripts.pory"
	hidemonpic
# 159 "data/maps/ISLANDNEW/scripts.pory"
	msgbox remainingofcheckonplayercript_Text_4
remainingofcheckonplayercript2_1:
# 161 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_5
# 162 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 163 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
# 164 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 1, immadipfr
# 165 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 166 "data/maps/ISLANDNEW/scripts.pory"
	removeobject 1
# 167 "data/maps/ISLANDNEW/scripts.pory"
	releaseall
	return

remainingofcheckonplayercript2_2:
# 146 "data/maps/ISLANDNEW/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 147 "data/maps/ISLANDNEW/scripts.pory"
	msgbox remainingofcheckonplayercript_Text_3
# 148 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 149 "data/maps/ISLANDNEW/scripts.pory"
	call NicknamePartyMon
# 150 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
	goto remainingofcheckonplayercript2_1

remainingofcheckonplayercript2_3:
# 153 "data/maps/ISLANDNEW/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 154 "data/maps/ISLANDNEW/scripts.pory"
	msgbox remainingofcheckonplayercript_Text_3
# 155 "data/maps/ISLANDNEW/scripts.pory"
	call NicknameBoxMon
	goto remainingofcheckonplayercript2_1


remainingofcheckonplayercript3::
# 172 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 173 "data/maps/ISLANDNEW/scripts.pory"
	setvar VAR_0x8008, 3
# 174 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_0
# 175 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 1, letsago
# 176 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 177 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerletsago3
# 178 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 179 "data/maps/ISLANDNEW/scripts.pory"
	setvar VAR_0x8008, 4
# 180 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_1
# 181 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 182 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_2
# 183 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 184 "data/maps/ISLANDNEW/scripts.pory"
	givemon SPECIES_MR_MIME, 5, ITEM_LEPPA_BERRY, abilityNum = 1, move1 = MOVE_TRICK, move2 = MOVE_PROTECT, move3 = MOVE_TRICK_ROOM, move4 = MOVE_CONFUSION
# 185 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq remainingofcheckonplayercript3_2
# 192 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq remainingofcheckonplayercript3_3
# 198 "data/maps/ISLANDNEW/scripts.pory"
	hidemonpic
# 199 "data/maps/ISLANDNEW/scripts.pory"
	msgbox remainingofcheckonplayercript_Text_4
remainingofcheckonplayercript3_1:
# 201 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript3_Text_0
# 202 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 203 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
# 204 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 1, immadipfr
# 205 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 206 "data/maps/ISLANDNEW/scripts.pory"
	removeobject 1
# 207 "data/maps/ISLANDNEW/scripts.pory"
	releaseall
	return

remainingofcheckonplayercript3_2:
# 186 "data/maps/ISLANDNEW/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 187 "data/maps/ISLANDNEW/scripts.pory"
	msgbox remainingofcheckonplayercript_Text_3
# 188 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 189 "data/maps/ISLANDNEW/scripts.pory"
	call NicknamePartyMon
# 190 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
	goto remainingofcheckonplayercript3_1

remainingofcheckonplayercript3_3:
# 193 "data/maps/ISLANDNEW/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 194 "data/maps/ISLANDNEW/scripts.pory"
	msgbox remainingofcheckonplayercript_Text_3
# 195 "data/maps/ISLANDNEW/scripts.pory"
	call NicknameBoxMon
	goto remainingofcheckonplayercript3_1


remainingofcheckonplayercript4::
# 211 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 212 "data/maps/ISLANDNEW/scripts.pory"
	setvar VAR_0x8008, 3
# 213 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_0
# 214 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 1, letsago
# 215 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 216 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerletsago4
# 217 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 218 "data/maps/ISLANDNEW/scripts.pory"
	setvar VAR_0x8008, 4
# 219 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_1
# 220 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 221 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_2
# 222 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 223 "data/maps/ISLANDNEW/scripts.pory"
	givemon SPECIES_MR_MIME, 5, ITEM_LEPPA_BERRY, abilityNum = 1, move1 = MOVE_TRICK, move2 = MOVE_PROTECT, move3 = MOVE_TRICK_ROOM, move4 = MOVE_CONFUSION
# 224 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq remainingofcheckonplayercript4_2
# 231 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq remainingofcheckonplayercript4_3
# 237 "data/maps/ISLANDNEW/scripts.pory"
	hidemonpic
# 238 "data/maps/ISLANDNEW/scripts.pory"
	msgbox remainingofcheckonplayercript_Text_4
remainingofcheckonplayercript4_1:
# 240 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_5
# 241 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 242 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
# 243 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 1, immadipfr
# 244 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 245 "data/maps/ISLANDNEW/scripts.pory"
	removeobject 1
# 246 "data/maps/ISLANDNEW/scripts.pory"
	releaseall
	return

remainingofcheckonplayercript4_2:
# 225 "data/maps/ISLANDNEW/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 226 "data/maps/ISLANDNEW/scripts.pory"
	msgbox remainingofcheckonplayercript_Text_3
# 227 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 228 "data/maps/ISLANDNEW/scripts.pory"
	call NicknamePartyMon
# 229 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
	goto remainingofcheckonplayercript4_1

remainingofcheckonplayercript4_3:
# 232 "data/maps/ISLANDNEW/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 233 "data/maps/ISLANDNEW/scripts.pory"
	msgbox remainingofcheckonplayercript_Text_3
# 234 "data/maps/ISLANDNEW/scripts.pory"
	call NicknameBoxMon
	goto remainingofcheckonplayercript4_1


# 249 "data/maps/ISLANDNEW/scripts.pory"
wakeuphuman:
# 250 "data/maps/ISLANDNEW/scripts.pory"
	walk_down
# 250 "data/maps/ISLANDNEW/scripts.pory"
	walk_down
# 250 "data/maps/ISLANDNEW/scripts.pory"
	walk_down
# 250 "data/maps/ISLANDNEW/scripts.pory"
	walk_down
	step_end

# 253 "data/maps/ISLANDNEW/scripts.pory"
correctfaceingdirection2:
# 254 "data/maps/ISLANDNEW/scripts.pory"
	face_up
	step_end

# 257 "data/maps/ISLANDNEW/scripts.pory"
letsago:
# 258 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 258 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 258 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 258 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 258 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 258 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 258 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 258 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 258 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 258 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 258 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 258 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 258 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 258 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 258 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 258 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 259 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 259 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 259 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 260 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 260 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 260 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 261 "data/maps/ISLANDNEW/scripts.pory"
	face_right
	step_end

# 264 "data/maps/ISLANDNEW/scripts.pory"
playerletsago:
# 265 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 265 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 265 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 265 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 265 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 265 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 265 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 265 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 265 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 265 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 265 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 265 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 265 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 265 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 265 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 265 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 266 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 266 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 266 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 266 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 267 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 267 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 267 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 267 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
	step_end

# 270 "data/maps/ISLANDNEW/scripts.pory"
playerletsago2:
# 271 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 271 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 271 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 271 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 271 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 271 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 271 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 271 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 271 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 271 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 271 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 271 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 271 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 271 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 271 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 271 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 271 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 272 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 272 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 272 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 273 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 273 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 273 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 273 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
	step_end

# 276 "data/maps/ISLANDNEW/scripts.pory"
playerletsago3:
# 277 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 277 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 277 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 277 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 277 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 277 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 277 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 277 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 277 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 277 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 277 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 277 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 277 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 277 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 277 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 277 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 277 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 278 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 278 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 278 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 278 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 278 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 279 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 279 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 279 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 279 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
	step_end

# 282 "data/maps/ISLANDNEW/scripts.pory"
playerletsago4:
# 283 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 283 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 283 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 283 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 283 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 283 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 283 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 283 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 283 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 283 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 283 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 283 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 283 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 283 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 283 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 283 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 283 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 283 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 284 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 284 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 284 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 284 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 285 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 285 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 285 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 285 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
	step_end

# 288 "data/maps/ISLANDNEW/scripts.pory"
immadipfr:
# 289 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 289 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 289 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 289 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 289 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 289 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 289 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 289 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
	step_end

ISLANDNEW_Trigger_gocatchmondummy::
# 293 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 294 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, gocatchmon
# 295 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 296 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_gocatchmondummy_Text_0
# 297 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 298 "data/maps/ISLANDNEW/scripts.pory"
	releaseall
	return


ISLANDNEW_Trigger_gocatchmondummy2::
# 302 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 303 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, gocatchmon2
# 304 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 305 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_gocatchmondummy_Text_0
# 306 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 307 "data/maps/ISLANDNEW/scripts.pory"
	releaseall
	return


ISLANDNEW_Trigger_gocatchmondummy3::
# 311 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 312 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, gocatchmon3
# 313 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 314 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_gocatchmondummy_Text_0
# 315 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 316 "data/maps/ISLANDNEW/scripts.pory"
	releaseall
	return


# 320 "data/maps/ISLANDNEW/scripts.pory"
gocatchmon:
# 321 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
	step_end

# 324 "data/maps/ISLANDNEW/scripts.pory"
gocatchmon2:
# 325 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 326 "data/maps/ISLANDNEW/scripts.pory"
	face_up
	step_end

# 329 "data/maps/ISLANDNEW/scripts.pory"
gocatchmon3:
# 330 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 331 "data/maps/ISLANDNEW/scripts.pory"
	face_up
	step_end

ISLANDNEW_Sign_riddlermansighn::
# 335 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 336 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Sign_riddlermansighn_Text_0
# 337 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 338 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
# 339 "data/maps/ISLANDNEW/scripts.pory"
	releaseall
	return


ISLANDNEW_Sign_Seashorehousesign::
# 343 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 344 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Sign_Seashorehousesign_Text_0
# 345 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 346 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
# 347 "data/maps/ISLANDNEW/scripts.pory"
	releaseall
	return


ISLANDNEW_EventScript_wanderingdude1::
# 351 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 352 "data/maps/ISLANDNEW/scripts.pory"
	faceplayer
# 353 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_wanderingdude1_Text_0
# 354 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 355 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
# 356 "data/maps/ISLANDNEW/scripts.pory"
	releaseall
	return


ISLANDNEW_EventScript_wanderingdude2::
# 360 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 361 "data/maps/ISLANDNEW/scripts.pory"
	faceplayer
# 362 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_wanderingdude2_Text_0
# 363 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 364 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
# 365 "data/maps/ISLANDNEW/scripts.pory"
	releaseall
	return


ISLANDNEW_Trigger_triggerendscene1::
# 369 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 370 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, checkonplayerlastime
# 371 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 372 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, checkonplayerlookatlady
# 373 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 374 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggerendscene1_Text_0
# 375 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 376 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, byemartlady
# 377 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 378 "data/maps/ISLANDNEW/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 379 "data/maps/ISLANDNEW/scripts.pory"
	special GameClear
	return


ISLANDNEW_Trigger_triggerendscene2::
# 383 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 384 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, checkonplayerlastime
# 385 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 386 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, checkonplayerlookatlady
# 387 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 388 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggerendscene1_Text_0
# 389 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 390 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, byemartlady
# 391 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 392 "data/maps/ISLANDNEW/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 393 "data/maps/ISLANDNEW/scripts.pory"
	special GameClear
	return


ISLANDNEW_Trigger_triggerendscene3::
# 397 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 398 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, checkonplayerlastime
# 399 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 400 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, checkonplayerlookatlady
# 401 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 402 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggerendscene1_Text_0
# 403 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 404 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, byemartlady
# 405 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 406 "data/maps/ISLANDNEW/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 407 "data/maps/ISLANDNEW/scripts.pory"
	special GameClear
	return


ISLANDNEW_Trigger_triggerendscene4::
# 411 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 412 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, checkonplayerlastime
# 413 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 414 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, checkonplayerlookatlady
# 415 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 416 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggerendscene1_Text_0
# 417 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 418 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, byemartlady
# 419 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 420 "data/maps/ISLANDNEW/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 421 "data/maps/ISLANDNEW/scripts.pory"
	special GameClear
	return


ISLANDNEW_Trigger_triggerendscene5::
# 425 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 426 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, checkonplayerlastime
# 427 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 428 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, checkonplayerlookatlady
# 429 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 430 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggerendscene1_Text_0
# 431 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 432 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, byemartlady
# 433 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 434 "data/maps/ISLANDNEW/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 435 "data/maps/ISLANDNEW/scripts.pory"
	special GameClear
	return


ISLANDNEW_Trigger_triggerendscene6::
# 439 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 440 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, checkonplayerlastime
# 441 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 442 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, checkonplayerlookatlady
# 443 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 444 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggerendscene1_Text_0
# 445 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 446 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, byemartlady
# 447 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 448 "data/maps/ISLANDNEW/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 449 "data/maps/ISLANDNEW/scripts.pory"
	special GameClear
	return


ISLANDNEW_Trigger_triggerendscene7::
# 454 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 455 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, checkonplayerlastime
# 456 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 457 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, checkonplayerlookatlady
# 458 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 459 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggerendscene1_Text_0
# 460 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 461 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, byemartlady
# 462 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 463 "data/maps/ISLANDNEW/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 464 "data/maps/ISLANDNEW/scripts.pory"
	special GameClear
	return


ISLANDNEW_Trigger_triggerendscene8::
# 468 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 469 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, checkonplayerlastime
# 470 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 471 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, checkonplayerlookatlady
# 472 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 473 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggerendscene1_Text_0
# 474 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 475 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, byemartlady
# 476 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 477 "data/maps/ISLANDNEW/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 478 "data/maps/ISLANDNEW/scripts.pory"
	special GameClear
# 479 "data/maps/ISLANDNEW/scripts.pory"
	waitstate
	return


# 485 "data/maps/ISLANDNEW/scripts.pory"
checkonplayerlastime:
# 486 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 486 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 486 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 486 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 486 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 486 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 486 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 487 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 487 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 487 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 487 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
	step_end

# 490 "data/maps/ISLANDNEW/scripts.pory"
checkonplayerlookatlady:
# 491 "data/maps/ISLANDNEW/scripts.pory"
	face_down
	step_end

# 494 "data/maps/ISLANDNEW/scripts.pory"
byemartlady:
# 495 "data/maps/ISLANDNEW/scripts.pory"
	walk_down
# 495 "data/maps/ISLANDNEW/scripts.pory"
	walk_down
# 495 "data/maps/ISLANDNEW/scripts.pory"
	walk_down
# 495 "data/maps/ISLANDNEW/scripts.pory"
	walk_down
# 495 "data/maps/ISLANDNEW/scripts.pory"
	walk_down
# 495 "data/maps/ISLANDNEW/scripts.pory"
	walk_down
# 495 "data/maps/ISLANDNEW/scripts.pory"
	walk_down
	step_end

ISLANDNEW_Trigger_triggeroneforcutscene_Text_0:
# 8 "data/maps/ISLANDNEW/scripts.pory"
	.string "Hey! you finally woke up$"

ISLANDNEW_Trigger_triggeroneforcutscene_Text_1:
# 13 "data/maps/ISLANDNEW/scripts.pory"
	.string "the ship went down but you somehow\n"
	.string "survived.. who are you? ... ... ... you need\l"
	.string "to get to the johto region for\l"
	.string "research? well thats unfortunate. This\l"
	.string "island is closed off from most of the\l"
	.string "outside world. if you want to use one of\l"
	.string "our boats, youll have to complete the\l"
	.string "ISLAND CHALLENGE. but that is very\l"
	.string "hard as no one has been able to\l"
	.string "complete it yet. do YOU think you are up\l"
	.string "for the task?$"

ISLANDNEW_Trigger_triggeroneforcutscene_Text_2:
# 14 "data/maps/ISLANDNEW/scripts.pory"
	.string "accept the challenge$"

ISLANDNEW_Trigger_triggeroneforcutscene_Text_3:
# 16 "data/maps/ISLANDNEW/scripts.pory"
	.string "You are very confident$"

areyousure_Text_0:
# 83 "data/maps/ISLANDNEW/scripts.pory"
	.string "Are you sure? could be your only way\n"
	.string "off this island$"

remainingofcheckonplayercript_Text_0:
# 94 "data/maps/ISLANDNEW/scripts.pory"
	.string "Great! lets get you started$"

remainingofcheckonplayercript_Text_1:
# 100 "data/maps/ISLANDNEW/scripts.pory"
	.string "You might want to check out the\n"
	.string "mystery cave before challenging the\l"
	.string "other leaders.$"

remainingofcheckonplayercript_Text_2:
# 102 "data/maps/ISLANDNEW/scripts.pory"
	.string "you might as well take this pokemon to\n"
	.string "help you, as I have no use for it.$"

remainingofcheckonplayercript_Text_3:
# 107 "data/maps/ISLANDNEW/scripts.pory"
	.string "Recieved MR-MIME$"

remainingofcheckonplayercript_Text_4:
# 119 "data/maps/ISLANDNEW/scripts.pory"
	.string "No More Room$"

remainingofcheckonplayercript_Text_5:
# 121 "data/maps/ISLANDNEW/scripts.pory"
	.string "I'll be in the seashore house$"

remainingofcheckonplayercript3_Text_0:
# 201 "data/maps/ISLANDNEW/scripts.pory"
	.string "I'll be in the seashore house. talk to me when you want to start the first challenge$"

ISLANDNEW_Trigger_gocatchmondummy_Text_0:
# 296 "data/maps/ISLANDNEW/scripts.pory"
	.string "Check out the cool cave!!!$"

ISLANDNEW_Sign_riddlermansighn_Text_0:
# 336 "data/maps/ISLANDNEW/scripts.pory"
	.string "clevermans shop$"

ISLANDNEW_Sign_Seashorehousesign_Text_0:
# 344 "data/maps/ISLANDNEW/scripts.pory"
	.string "Seashore house$"

ISLANDNEW_EventScript_wanderingdude1_Text_0:
# 353 "data/maps/ISLANDNEW/scripts.pory"
	.string "You're weird... we dont have many\n"
	.string "foriegners I guess is what I mean.$"

ISLANDNEW_EventScript_wanderingdude2_Text_0:
# 362 "data/maps/ISLANDNEW/scripts.pory"
	.string "this island may be small but its a great\n"
	.string "place to sunbathe if you have lots of\l"
	.string "money$"

ISLANDNEW_Trigger_triggerendscene1_Text_0:
# 374 "data/maps/ISLANDNEW/scripts.pory"
	.string "You've done it....... I must come clean to\n"
	.string "you I am the leader of this island, and\l"
	.string "cleverman is the lockal trainer expert.\l"
	.string "I kinda wanted to have a little fun with\l"
	.string "some strangers so I picked you to do\l"
	.string "the ISLAND CHALLENGE... in all honesty I\l"
	.string "you Couldve left the island at any\l"
	.string "time... well its been nice knowing you.\l"
	.string "this boat will take you to to your\l"
	.string "destination... Hope you visit us again\l"
	.string "on better terms! Goodbye!$"
