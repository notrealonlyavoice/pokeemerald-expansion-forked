ISLANDNEW_MapScripts::
# 2 "data/maps/ISLANDNEW/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDNEW_MapScripts_OnTransition
# 3 "data/maps/ISLANDNEW/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


ISLANDNEW_MapScripts_OnTransition::
# 7 "data/maps/ISLANDNEW/scripts.pory"
	call respawnendingnpc
	end


respawnendingnpc::
# 13 "data/maps/ISLANDNEW/scripts.pory"
	goto_if_set FLAG_respawnnpc, respawnendingnpc_2
# 16 "data/maps/ISLANDNEW/scripts.pory"
	hideobjectat 4, MAP_ISLANDNEW
respawnendingnpc_1:
	end

respawnendingnpc_2:
# 14 "data/maps/ISLANDNEW/scripts.pory"
	showobjectat 4, MAP_ISLANDNEW
	goto respawnendingnpc_1


ISLANDNEW_Trigger_triggeroneforcutscene::
# 22 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, correctfaceingdirection2
# 23 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_0
# 24 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 25 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
# 26 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 1, wakeuphuman
# 27 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 28 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_1
# 29 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_2, MSGBOX_YESNO
# 30 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDNEW_Trigger_triggeroneforcutscene_1
# 36 "data/maps/ISLANDNEW/scripts.pory"
	call areyousure
	return

ISLANDNEW_Trigger_triggeroneforcutscene_1:
# 31 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_3
# 32 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 33 "data/maps/ISLANDNEW/scripts.pory"
	setvar ( VAR_0x8006 ), 2
# 34 "data/maps/ISLANDNEW/scripts.pory"
	call remainingofcheckonplayercript
	return


ISLANDNEW_Trigger_triggeroneforcutscene2::
# 41 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, correctfaceingdirection2
# 42 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_0
# 43 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 44 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
# 45 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 1, wakeuphuman
# 46 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 47 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_1
# 48 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_2, MSGBOX_YESNO
# 49 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDNEW_Trigger_triggeroneforcutscene2_1
# 55 "data/maps/ISLANDNEW/scripts.pory"
	call areyousure
	return

ISLANDNEW_Trigger_triggeroneforcutscene2_1:
# 50 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_3
# 51 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 52 "data/maps/ISLANDNEW/scripts.pory"
	setvar ( VAR_0x8006 ), 2
# 53 "data/maps/ISLANDNEW/scripts.pory"
	call remainingofcheckonplayercript2
	return


ISLANDNEW_Trigger_triggeroneforcutscene3::
# 60 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, correctfaceingdirection2
# 61 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_0
# 62 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 63 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
# 64 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 1, wakeuphuman
# 65 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 66 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_1
# 67 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_2, MSGBOX_YESNO
# 68 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDNEW_Trigger_triggeroneforcutscene3_1
# 74 "data/maps/ISLANDNEW/scripts.pory"
	call areyousure
	return

ISLANDNEW_Trigger_triggeroneforcutscene3_1:
# 69 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_3
# 70 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 71 "data/maps/ISLANDNEW/scripts.pory"
	setvar ( VAR_0x8006 ), 2
# 72 "data/maps/ISLANDNEW/scripts.pory"
	call remainingofcheckonplayercript3
	return


ISLANDNEW_Trigger_triggeroneforcutscene4::
# 79 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, correctfaceingdirection2
# 80 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_0
# 81 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 82 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
# 83 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 1, wakeuphuman
# 84 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 85 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_1
# 86 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_2, MSGBOX_YESNO
# 87 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDNEW_Trigger_triggeroneforcutscene4_1
# 93 "data/maps/ISLANDNEW/scripts.pory"
	call areyousure
	return

ISLANDNEW_Trigger_triggeroneforcutscene4_1:
# 88 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggeroneforcutscene_Text_3
# 89 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 90 "data/maps/ISLANDNEW/scripts.pory"
	setvar ( VAR_0x8006 ), 2
# 91 "data/maps/ISLANDNEW/scripts.pory"
	call remainingofcheckonplayercript4
	return


areyousure::
# 98 "data/maps/ISLANDNEW/scripts.pory"
	msgbox areyousure_Text_0, MSGBOX_YESNO
# 99 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq areyousure_1
# 102 "data/maps/ISLANDNEW/scripts.pory"
	call remainingofcheckonplayercript
	return

areyousure_1:
# 100 "data/maps/ISLANDNEW/scripts.pory"
	call areyousure
	return


remainingofcheckonplayercript::
# 107 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 108 "data/maps/ISLANDNEW/scripts.pory"
	setvar VAR_0x8008, 3
# 109 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_0
# 110 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 1, letsago
# 111 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 112 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerletsago
# 113 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 114 "data/maps/ISLANDNEW/scripts.pory"
	setvar VAR_0x8008, 4
# 115 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_1
# 116 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 117 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_2
# 118 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 119 "data/maps/ISLANDNEW/scripts.pory"
	givemon SPECIES_MR_MIME, 5, ITEM_LEPPA_BERRY, abilityNum = 1, move1 = MOVE_TRICK, move2 = MOVE_PROTECT, move3 = MOVE_TRICK_ROOM, move4 = MOVE_CONFUSION
# 120 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq remainingofcheckonplayercript_2
# 127 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq remainingofcheckonplayercript_3
# 133 "data/maps/ISLANDNEW/scripts.pory"
	hidemonpic
# 134 "data/maps/ISLANDNEW/scripts.pory"
	msgbox remainingofcheckonplayercript_Text_4
remainingofcheckonplayercript_1:
# 136 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_5
# 137 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 138 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
# 139 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 1, immadipfr
# 140 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 141 "data/maps/ISLANDNEW/scripts.pory"
	removeobject 1
# 142 "data/maps/ISLANDNEW/scripts.pory"
	releaseall
	return

remainingofcheckonplayercript_2:
# 121 "data/maps/ISLANDNEW/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 122 "data/maps/ISLANDNEW/scripts.pory"
	msgbox remainingofcheckonplayercript_Text_3
# 123 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 124 "data/maps/ISLANDNEW/scripts.pory"
	call NicknamePartyMon
# 125 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
	goto remainingofcheckonplayercript_1

remainingofcheckonplayercript_3:
# 128 "data/maps/ISLANDNEW/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 129 "data/maps/ISLANDNEW/scripts.pory"
	msgbox remainingofcheckonplayercript_Text_3
# 130 "data/maps/ISLANDNEW/scripts.pory"
	call NicknameBoxMon
	goto remainingofcheckonplayercript_1


remainingofcheckonplayercript2::
# 147 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 148 "data/maps/ISLANDNEW/scripts.pory"
	setvar VAR_0x8008, 3
# 149 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_0
# 150 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 1, letsago
# 151 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 152 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerletsago2
# 153 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 154 "data/maps/ISLANDNEW/scripts.pory"
	setvar VAR_0x8008, 4
# 155 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_1
# 156 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 157 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_2
# 158 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 159 "data/maps/ISLANDNEW/scripts.pory"
	givemon SPECIES_MR_MIME, 5, ITEM_LEPPA_BERRY, abilityNum = 1, move1 = MOVE_TRICK, move2 = MOVE_PROTECT, move3 = MOVE_TRICK_ROOM, move4 = MOVE_TAUNT
# 160 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq remainingofcheckonplayercript2_2
# 167 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq remainingofcheckonplayercript2_3
# 173 "data/maps/ISLANDNEW/scripts.pory"
	hidemonpic
# 174 "data/maps/ISLANDNEW/scripts.pory"
	msgbox remainingofcheckonplayercript_Text_4
remainingofcheckonplayercript2_1:
# 176 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_5
# 177 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 178 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
# 179 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 1, immadipfr
# 180 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 181 "data/maps/ISLANDNEW/scripts.pory"
	removeobject 1
# 182 "data/maps/ISLANDNEW/scripts.pory"
	releaseall
	return

remainingofcheckonplayercript2_2:
# 161 "data/maps/ISLANDNEW/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 162 "data/maps/ISLANDNEW/scripts.pory"
	msgbox remainingofcheckonplayercript_Text_3
# 163 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 164 "data/maps/ISLANDNEW/scripts.pory"
	call NicknamePartyMon
# 165 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
	goto remainingofcheckonplayercript2_1

remainingofcheckonplayercript2_3:
# 168 "data/maps/ISLANDNEW/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 169 "data/maps/ISLANDNEW/scripts.pory"
	msgbox remainingofcheckonplayercript_Text_3
# 170 "data/maps/ISLANDNEW/scripts.pory"
	call NicknameBoxMon
	goto remainingofcheckonplayercript2_1


remainingofcheckonplayercript3::
# 187 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 188 "data/maps/ISLANDNEW/scripts.pory"
	setvar VAR_0x8008, 3
# 189 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_0
# 190 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 1, letsago
# 191 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 192 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerletsago3
# 193 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 194 "data/maps/ISLANDNEW/scripts.pory"
	setvar VAR_0x8008, 4
# 195 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_1
# 196 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 197 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_2
# 198 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 199 "data/maps/ISLANDNEW/scripts.pory"
	givemon SPECIES_MR_MIME, 5, ITEM_LEPPA_BERRY, abilityNum = 1, move1 = MOVE_TRICK, move2 = MOVE_PROTECT, move3 = MOVE_TRICK_ROOM, move4 = MOVE_CONFUSION
# 200 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq remainingofcheckonplayercript3_2
# 207 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq remainingofcheckonplayercript3_3
# 213 "data/maps/ISLANDNEW/scripts.pory"
	hidemonpic
# 214 "data/maps/ISLANDNEW/scripts.pory"
	msgbox remainingofcheckonplayercript_Text_4
remainingofcheckonplayercript3_1:
# 216 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript3_Text_0
# 217 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 218 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
# 219 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 1, immadipfr
# 220 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 221 "data/maps/ISLANDNEW/scripts.pory"
	removeobject 1
# 222 "data/maps/ISLANDNEW/scripts.pory"
	releaseall
	return

remainingofcheckonplayercript3_2:
# 201 "data/maps/ISLANDNEW/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 202 "data/maps/ISLANDNEW/scripts.pory"
	msgbox remainingofcheckonplayercript_Text_3
# 203 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 204 "data/maps/ISLANDNEW/scripts.pory"
	call NicknamePartyMon
# 205 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
	goto remainingofcheckonplayercript3_1

remainingofcheckonplayercript3_3:
# 208 "data/maps/ISLANDNEW/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 209 "data/maps/ISLANDNEW/scripts.pory"
	msgbox remainingofcheckonplayercript_Text_3
# 210 "data/maps/ISLANDNEW/scripts.pory"
	call NicknameBoxMon
	goto remainingofcheckonplayercript3_1


remainingofcheckonplayercript4::
# 226 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 227 "data/maps/ISLANDNEW/scripts.pory"
	setvar VAR_0x8008, 3
# 228 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_0
# 229 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 1, letsago
# 230 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 231 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerletsago4
# 232 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 233 "data/maps/ISLANDNEW/scripts.pory"
	setvar VAR_0x8008, 4
# 234 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_1
# 235 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 236 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_2
# 237 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 238 "data/maps/ISLANDNEW/scripts.pory"
	givemon SPECIES_MR_MIME, 5, ITEM_LEPPA_BERRY, abilityNum = 1, move1 = MOVE_TRICK, move2 = MOVE_PROTECT, move3 = MOVE_TRICK_ROOM, move4 = MOVE_CONFUSION
# 239 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq remainingofcheckonplayercript4_2
# 246 "data/maps/ISLANDNEW/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq remainingofcheckonplayercript4_3
# 252 "data/maps/ISLANDNEW/scripts.pory"
	hidemonpic
# 253 "data/maps/ISLANDNEW/scripts.pory"
	msgbox remainingofcheckonplayercript_Text_4
remainingofcheckonplayercript4_1:
# 255 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX remainingofcheckonplayercript_Text_5
# 256 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 257 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
# 258 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 1, immadipfr
# 259 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 260 "data/maps/ISLANDNEW/scripts.pory"
	removeobject 1
# 261 "data/maps/ISLANDNEW/scripts.pory"
	releaseall
	return

remainingofcheckonplayercript4_2:
# 240 "data/maps/ISLANDNEW/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 241 "data/maps/ISLANDNEW/scripts.pory"
	msgbox remainingofcheckonplayercript_Text_3
# 242 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 243 "data/maps/ISLANDNEW/scripts.pory"
	call NicknamePartyMon
# 244 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
	goto remainingofcheckonplayercript4_1

remainingofcheckonplayercript4_3:
# 247 "data/maps/ISLANDNEW/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 248 "data/maps/ISLANDNEW/scripts.pory"
	msgbox remainingofcheckonplayercript_Text_3
# 249 "data/maps/ISLANDNEW/scripts.pory"
	call NicknameBoxMon
	goto remainingofcheckonplayercript4_1


# 264 "data/maps/ISLANDNEW/scripts.pory"
wakeuphuman:
# 265 "data/maps/ISLANDNEW/scripts.pory"
	walk_down
# 265 "data/maps/ISLANDNEW/scripts.pory"
	walk_down
# 265 "data/maps/ISLANDNEW/scripts.pory"
	walk_down
# 265 "data/maps/ISLANDNEW/scripts.pory"
	walk_down
	step_end

# 268 "data/maps/ISLANDNEW/scripts.pory"
correctfaceingdirection2:
# 269 "data/maps/ISLANDNEW/scripts.pory"
	face_up
	step_end

# 272 "data/maps/ISLANDNEW/scripts.pory"
letsago:
# 273 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 273 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 273 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 273 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 273 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 273 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 273 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 273 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 273 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 273 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 273 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 273 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 273 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 273 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 273 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 273 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 274 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 274 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 274 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 275 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 275 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 275 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 276 "data/maps/ISLANDNEW/scripts.pory"
	face_right
	step_end

# 279 "data/maps/ISLANDNEW/scripts.pory"
playerletsago:
# 280 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 280 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 280 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 280 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 280 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 280 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 280 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 280 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 280 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 280 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 280 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 280 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 280 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 280 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 280 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 280 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 281 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 281 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 281 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 281 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 282 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 282 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 282 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 282 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
	step_end

# 285 "data/maps/ISLANDNEW/scripts.pory"
playerletsago2:
# 286 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 286 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 286 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 286 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 286 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 286 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 286 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 286 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 286 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 286 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 286 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 286 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 286 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 286 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 286 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 286 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 286 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 287 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 287 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 287 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 288 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 288 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 288 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 288 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
	step_end

# 291 "data/maps/ISLANDNEW/scripts.pory"
playerletsago3:
# 292 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 292 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 292 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 292 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 292 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 292 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 292 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 292 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 292 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 292 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 292 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 292 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 292 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 292 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 292 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 292 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 292 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 293 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 293 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 293 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 293 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 293 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 294 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 294 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 294 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 294 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
	step_end

# 297 "data/maps/ISLANDNEW/scripts.pory"
playerletsago4:
# 298 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 298 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 298 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 298 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 298 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 298 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 298 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 298 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 298 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 298 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 298 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 298 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 298 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 298 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 298 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 298 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 298 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 298 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 299 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 299 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 299 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 299 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 300 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 300 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 300 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 300 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
	step_end

# 303 "data/maps/ISLANDNEW/scripts.pory"
immadipfr:
# 304 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 304 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 304 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 304 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 304 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 304 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 304 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 304 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
	step_end

ISLANDNEW_Trigger_gocatchmondummy::
# 308 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 309 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, gocatchmon
# 310 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 311 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_gocatchmondummy_Text_0
# 312 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 313 "data/maps/ISLANDNEW/scripts.pory"
	releaseall
	return


ISLANDNEW_Trigger_gocatchmondummy2::
# 317 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 318 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, gocatchmon2
# 319 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 320 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_gocatchmondummy_Text_0
# 321 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 322 "data/maps/ISLANDNEW/scripts.pory"
	releaseall
	return


ISLANDNEW_Trigger_gocatchmondummy3::
# 326 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 327 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, gocatchmon3
# 328 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 329 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_gocatchmondummy_Text_0
# 330 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 331 "data/maps/ISLANDNEW/scripts.pory"
	releaseall
	return


ISLANDNEW_EventScript_restuppls::
# 335 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 336 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_restuppls_Text_0
# 337 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 338 "data/maps/ISLANDNEW/scripts.pory"
	playfanfare MUS_HEAL
# 339 "data/maps/ISLANDNEW/scripts.pory"
	special HealPlayerParty
# 340 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_restuppls_Text_1
# 341 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 342 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
# 343 "data/maps/ISLANDNEW/scripts.pory"
	releaseall
	return


# 347 "data/maps/ISLANDNEW/scripts.pory"
gocatchmon:
# 348 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
	step_end

# 351 "data/maps/ISLANDNEW/scripts.pory"
gocatchmon2:
# 352 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 353 "data/maps/ISLANDNEW/scripts.pory"
	face_up
	step_end

# 356 "data/maps/ISLANDNEW/scripts.pory"
gocatchmon3:
# 357 "data/maps/ISLANDNEW/scripts.pory"
	walk_right
# 358 "data/maps/ISLANDNEW/scripts.pory"
	face_up
	step_end

ISLANDNEW_Sign_riddlermansighn::
# 362 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 363 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Sign_riddlermansighn_Text_0
# 364 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 365 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
# 366 "data/maps/ISLANDNEW/scripts.pory"
	releaseall
	return


ISLANDNEW_Sign_Seashorehousesign::
# 370 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 371 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Sign_Seashorehousesign_Text_0
# 372 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 373 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
# 374 "data/maps/ISLANDNEW/scripts.pory"
	releaseall
	return


ISLANDNEW_EventScript_wanderingdude1::
# 378 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 379 "data/maps/ISLANDNEW/scripts.pory"
	faceplayer
# 380 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_wanderingdude1_Text_0
# 381 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 382 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
# 383 "data/maps/ISLANDNEW/scripts.pory"
	releaseall
	return


ISLANDNEW_EventScript_wanderingdude2::
# 387 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 388 "data/maps/ISLANDNEW/scripts.pory"
	faceplayer
# 389 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_EventScript_wanderingdude2_Text_0
# 390 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 391 "data/maps/ISLANDNEW/scripts.pory"
	closemessage
# 392 "data/maps/ISLANDNEW/scripts.pory"
	releaseall
	return


ISLANDNEW_Trigger_triggerendscene1::
# 396 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 397 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, checkonplayerlastime
# 398 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 399 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, checkonplayerlookatlady
# 400 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 401 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggerendscene1_Text_0
# 402 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 403 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, byemartlady
# 404 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 405 "data/maps/ISLANDNEW/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 406 "data/maps/ISLANDNEW/scripts.pory"
	special GameClear
	return


ISLANDNEW_Trigger_triggerendscene2::
# 410 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 411 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, checkonplayerlastime
# 412 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 413 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, checkonplayerlookatlady
# 414 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 415 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggerendscene1_Text_0
# 416 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 417 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, byemartlady
# 418 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 419 "data/maps/ISLANDNEW/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 420 "data/maps/ISLANDNEW/scripts.pory"
	special GameClear
	return


ISLANDNEW_Trigger_triggerendscene3::
# 424 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 425 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, checkonplayerlastime
# 426 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 427 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, checkonplayerlookatlady
# 428 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 429 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggerendscene1_Text_0
# 430 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 431 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, byemartlady
# 432 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 433 "data/maps/ISLANDNEW/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 434 "data/maps/ISLANDNEW/scripts.pory"
	special GameClear
	return


ISLANDNEW_Trigger_triggerendscene4::
# 438 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 439 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, checkonplayerlastime
# 440 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 441 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, checkonplayerlookatlady
# 442 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 443 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggerendscene1_Text_0
# 444 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 445 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, byemartlady
# 446 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 447 "data/maps/ISLANDNEW/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 448 "data/maps/ISLANDNEW/scripts.pory"
	special GameClear
	return


ISLANDNEW_Trigger_triggerendscene5::
# 452 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 453 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, checkonplayerlastime
# 454 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 455 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, checkonplayerlookatlady
# 456 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 457 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggerendscene5_Text_0
# 458 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 459 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, byemartlady
# 460 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 461 "data/maps/ISLANDNEW/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 462 "data/maps/ISLANDNEW/scripts.pory"
	special GameClear
	return


ISLANDNEW_Trigger_triggerendscene6::
# 466 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 467 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, checkonplayerlastime
# 468 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 469 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, checkonplayerlookatlady
# 470 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 471 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggerendscene5_Text_0
# 472 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 473 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, byemartlady
# 474 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 475 "data/maps/ISLANDNEW/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 476 "data/maps/ISLANDNEW/scripts.pory"
	special GameClear
	return


ISLANDNEW_Trigger_triggerendscene7::
# 481 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 482 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, checkonplayerlastime
# 483 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 484 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, checkonplayerlookatlady
# 485 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 486 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggerendscene1_Text_0
# 487 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 488 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, byemartlady
# 489 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 490 "data/maps/ISLANDNEW/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 491 "data/maps/ISLANDNEW/scripts.pory"
	special GameClear
	return


ISLANDNEW_Trigger_triggerendscene8::
# 495 "data/maps/ISLANDNEW/scripts.pory"
	lockall
# 496 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, checkonplayerlastime
# 497 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 498 "data/maps/ISLANDNEW/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, checkonplayerlookatlady
# 499 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 500 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggerendscene1_Text_0
# 501 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 502 "data/maps/ISLANDNEW/scripts.pory"
	applymovement 4, byemartlady
# 503 "data/maps/ISLANDNEW/scripts.pory"
	waitmovement 0
# 504 "data/maps/ISLANDNEW/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 505 "data/maps/ISLANDNEW/scripts.pory"
	MSGBOX ISLANDNEW_Trigger_triggerendscene1_Text_0
# 506 "data/maps/ISLANDNEW/scripts.pory"
	waitmessage
# 507 "data/maps/ISLANDNEW/scripts.pory"
	special GameClear
# 508 "data/maps/ISLANDNEW/scripts.pory"
	waitstate
	return


# 514 "data/maps/ISLANDNEW/scripts.pory"
checkonplayerlastime:
# 515 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 515 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 515 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 515 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 515 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 515 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 515 "data/maps/ISLANDNEW/scripts.pory"
	walk_left
# 516 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 516 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
# 516 "data/maps/ISLANDNEW/scripts.pory"
	walk_up
	step_end

# 519 "data/maps/ISLANDNEW/scripts.pory"
checkonplayerlookatlady:
# 520 "data/maps/ISLANDNEW/scripts.pory"
	face_down
	step_end

# 523 "data/maps/ISLANDNEW/scripts.pory"
byemartlady:
# 524 "data/maps/ISLANDNEW/scripts.pory"
	walk_down
# 524 "data/maps/ISLANDNEW/scripts.pory"
	walk_down
# 524 "data/maps/ISLANDNEW/scripts.pory"
	walk_down
# 524 "data/maps/ISLANDNEW/scripts.pory"
	walk_down
# 524 "data/maps/ISLANDNEW/scripts.pory"
	walk_down
# 524 "data/maps/ISLANDNEW/scripts.pory"
	walk_down
# 524 "data/maps/ISLANDNEW/scripts.pory"
	walk_down
	step_end

ISLANDNEW_Trigger_triggeroneforcutscene_Text_0:
# 23 "data/maps/ISLANDNEW/scripts.pory"
	.string "Hey! you finally woke up$"

ISLANDNEW_Trigger_triggeroneforcutscene_Text_1:
# 28 "data/maps/ISLANDNEW/scripts.pory"
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
# 29 "data/maps/ISLANDNEW/scripts.pory"
	.string "accept the challenge$"

ISLANDNEW_Trigger_triggeroneforcutscene_Text_3:
# 31 "data/maps/ISLANDNEW/scripts.pory"
	.string "You are very confident$"

areyousure_Text_0:
# 98 "data/maps/ISLANDNEW/scripts.pory"
	.string "Are you sure? could be your only way\n"
	.string "off this island$"

remainingofcheckonplayercript_Text_0:
# 109 "data/maps/ISLANDNEW/scripts.pory"
	.string "Great! lets get you started$"

remainingofcheckonplayercript_Text_1:
# 115 "data/maps/ISLANDNEW/scripts.pory"
	.string "You might want to check out the\n"
	.string "mystery cave before challenging the\l"
	.string "other leaders.$"

remainingofcheckonplayercript_Text_2:
# 117 "data/maps/ISLANDNEW/scripts.pory"
	.string "you might as well take this pokemon to\n"
	.string "help you, as I have no use for it.$"

remainingofcheckonplayercript_Text_3:
# 122 "data/maps/ISLANDNEW/scripts.pory"
	.string "Recieved MR-MIME$"

remainingofcheckonplayercript_Text_4:
# 134 "data/maps/ISLANDNEW/scripts.pory"
	.string "No More Room$"

remainingofcheckonplayercript_Text_5:
# 136 "data/maps/ISLANDNEW/scripts.pory"
	.string "I'll be in the seashore house$"

remainingofcheckonplayercript3_Text_0:
# 216 "data/maps/ISLANDNEW/scripts.pory"
	.string "I'll be in the seashore house. talk to me when you want to start the first challenge$"

ISLANDNEW_Trigger_gocatchmondummy_Text_0:
# 311 "data/maps/ISLANDNEW/scripts.pory"
	.string "Check out the cool cave!!!$"

ISLANDNEW_EventScript_restuppls_Text_0:
# 336 "data/maps/ISLANDNEW/scripts.pory"
	.string "I suppose I can heal your pokemon$"

ISLANDNEW_EventScript_restuppls_Text_1:
# 340 "data/maps/ISLANDNEW/scripts.pory"
	.string "All better now$"

ISLANDNEW_Sign_riddlermansighn_Text_0:
# 363 "data/maps/ISLANDNEW/scripts.pory"
	.string "clevermans shop$"

ISLANDNEW_Sign_Seashorehousesign_Text_0:
# 371 "data/maps/ISLANDNEW/scripts.pory"
	.string "Seashore house$"

ISLANDNEW_EventScript_wanderingdude1_Text_0:
# 380 "data/maps/ISLANDNEW/scripts.pory"
	.string "You're weird... we dont have many\n"
	.string "foriegners I guess is what I mean.$"

ISLANDNEW_EventScript_wanderingdude2_Text_0:
# 389 "data/maps/ISLANDNEW/scripts.pory"
	.string "this island may be small but its a great\n"
	.string "place to sunbathe if you have lots of\l"
	.string "money$"

ISLANDNEW_Trigger_triggerendscene1_Text_0:
# 401 "data/maps/ISLANDNEW/scripts.pory"
	.string "congrats on finishing this madness.\n"
	.string "Huge thanks to my two bugtesters.\l"
	.string "Boringperson and Matthew. also massive\l"
	.string "thanks to TEAM AQUA HIDEOUT (kyogre\l"
	.string "praise be!) and Ghoulsash for trainer\l"
	.string "see scripts. hopefully some updates in\l"
	.string "the future to make this less scruffy$"

ISLANDNEW_Trigger_triggerendscene5_Text_0:
# 457 "data/maps/ISLANDNEW/scripts.pory"
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
