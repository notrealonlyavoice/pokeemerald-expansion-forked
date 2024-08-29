# 1 "data/maps/NewMap3/scripts.pory"

# 2 "data/maps/NewMap3/scripts.pory"
NewMap3_MapScripts::
# 3 "data/maps/NewMap3/scripts.pory"
	.byte 0

NewMap3_Trigger_loadinscene::
# 7 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, checkonfriend
# 8 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_Trigger_loadinscene_Text_0
# 9 "data/maps/NewMap3/scripts.pory"
	closemessage
# 10 "data/maps/NewMap3/scripts.pory"
	call ShipWrekCut
# 11 "data/maps/NewMap3/scripts.pory"
	delay 20
# 12 "data/maps/NewMap3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 13 "data/maps/NewMap3/scripts.pory"
	removeobject 1
# 14 "data/maps/NewMap3/scripts.pory"
	setvar VAR_0x8008, 1
# 15 "data/maps/NewMap3/scripts.pory"
	setflag FRIEND_IS_DED
# 16 "data/maps/NewMap3/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


NewMap3_Trigger_loadinscene2::
# 22 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, checkonfriend2
# 23 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_Trigger_loadinscene_Text_0
# 24 "data/maps/NewMap3/scripts.pory"
	closemessage
# 25 "data/maps/NewMap3/scripts.pory"
	call ShipWrekCut
# 26 "data/maps/NewMap3/scripts.pory"
	delay 20
# 27 "data/maps/NewMap3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 28 "data/maps/NewMap3/scripts.pory"
	removeobject 1
# 29 "data/maps/NewMap3/scripts.pory"
	setvar VAR_0x8008, 1
# 30 "data/maps/NewMap3/scripts.pory"
	setflag FRIEND_IS_DED
# 31 "data/maps/NewMap3/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


NewMap3_Trigger_loadinscene3::
# 35 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, checkonfriend3
# 36 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_Trigger_loadinscene_Text_0
# 37 "data/maps/NewMap3/scripts.pory"
	closemessage
# 38 "data/maps/NewMap3/scripts.pory"
	call ShipWrekCut
# 39 "data/maps/NewMap3/scripts.pory"
	delay 20
# 40 "data/maps/NewMap3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 41 "data/maps/NewMap3/scripts.pory"
	removeobject 1
# 42 "data/maps/NewMap3/scripts.pory"
	setvar VAR_0x8008, 1
# 43 "data/maps/NewMap3/scripts.pory"
	setflag FRIEND_IS_DED
# 44 "data/maps/NewMap3/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


NewMap3_Trigger_loadinscenedown::
# 50 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_Trigger_loadinscene_Text_0
# 51 "data/maps/NewMap3/scripts.pory"
	closemessage
# 52 "data/maps/NewMap3/scripts.pory"
	call ShipWrekCut
# 53 "data/maps/NewMap3/scripts.pory"
	delay 20
# 54 "data/maps/NewMap3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 55 "data/maps/NewMap3/scripts.pory"
	removeobject 1
# 56 "data/maps/NewMap3/scripts.pory"
	setvar VAR_0x8008, 1
# 57 "data/maps/NewMap3/scripts.pory"
	setflag FRIEND_IS_DED
# 58 "data/maps/NewMap3/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


# 63 "data/maps/NewMap3/scripts.pory"
checkonfriend:
# 64 "data/maps/NewMap3/scripts.pory"
	walk_down
	step_end

# 67 "data/maps/NewMap3/scripts.pory"
checkonfriend2:
# 68 "data/maps/NewMap3/scripts.pory"
	walk_left
# 69 "data/maps/NewMap3/scripts.pory"
	walk_down
	step_end

# 72 "data/maps/NewMap3/scripts.pory"
checkonfriend3:
# 73 "data/maps/NewMap3/scripts.pory"
	walk_left
# 74 "data/maps/NewMap3/scripts.pory"
	walk_down
	step_end

checkmovementsteps::
# 79 "data/maps/NewMap3/scripts.pory"
	compare VAR_FRIENDSHIP_STEP_COUNTER, 80
	goto_if_eq checkmovementsteps_1
	return

checkmovementsteps_1:
# 80 "data/maps/NewMap3/scripts.pory"
	MSGBOX checkmovementsteps_Text_0
	return


NewMap3_Trigger_loadinscene_Text_0:
# 8 "data/maps/NewMap3/scripts.pory"
	.string "SAVE YOURSELF! I CANT HOLD ON MUCH\n"
	.string "LONGER$"

checkmovementsteps_Text_0:
# 80 "data/maps/NewMap3/scripts.pory"
	.string "Placer text$"
