# 1 "data/maps/ISLANDNEW2/scripts.pory"

# 2 "data/maps/ISLANDNEW2/scripts.pory"
ISLANDNEW2_MapScripts::
# 3 "data/maps/ISLANDNEW2/scripts.pory"
	.byte 0

ISLANDNEW2_Trigger_haventstartedtrout::
# 7 "data/maps/ISLANDNEW2/scripts.pory"
	compare VAR_0x8006, 3
	goto_if_eq ISLANDNEW2_Trigger_haventstartedtrout_1
# 12 "data/maps/ISLANDNEW2/scripts.pory"
	compare VAR_0x8006, 2
	goto_if_eq ISLANDNEW2_Trigger_haventstartedtrout_2
	return

ISLANDNEW2_Trigger_haventstartedtrout_1:
# 8 "data/maps/ISLANDNEW2/scripts.pory"
	lockall
# 9 "data/maps/ISLANDNEW2/scripts.pory"
	MSGBOX ISLANDNEW2_Trigger_haventstartedtrout_Text_0
# 10 "data/maps/ISLANDNEW2/scripts.pory"
	releaseall
	return

ISLANDNEW2_Trigger_haventstartedtrout_2:
# 13 "data/maps/ISLANDNEW2/scripts.pory"
	lockall
# 14 "data/maps/ISLANDNEW2/scripts.pory"
	MSGBOX ISLANDNEW2_Trigger_haventstartedtrout_Text_1
# 15 "data/maps/ISLANDNEW2/scripts.pory"
	waitmessage
# 16 "data/maps/ISLANDNEW2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, troutnotyet
# 17 "data/maps/ISLANDNEW2/scripts.pory"
	waitmovement 0
# 18 "data/maps/ISLANDNEW2/scripts.pory"
	releaseall
	return


# 22 "data/maps/ISLANDNEW2/scripts.pory"
troutnotyet:
# 23 "data/maps/ISLANDNEW2/scripts.pory"
	walk_right
# 23 "data/maps/ISLANDNEW2/scripts.pory"
	walk_right
	step_end

ISLANDNEW2_EventScript_boygoaheadif::
# 27 "data/maps/ISLANDNEW2/scripts.pory"
	compare VAR_0x8006, 3
	goto_if_eq ISLANDNEW2_EventScript_boygoaheadif_1
# 33 "data/maps/ISLANDNEW2/scripts.pory"
	compare VAR_0x8006, 2
	goto_if_eq ISLANDNEW2_EventScript_boygoaheadif_2
	return

ISLANDNEW2_EventScript_boygoaheadif_1:
# 28 "data/maps/ISLANDNEW2/scripts.pory"
	lockall
# 29 "data/maps/ISLANDNEW2/scripts.pory"
	MSGBOX ISLANDNEW2_EventScript_boygoaheadif_Text_0
# 30 "data/maps/ISLANDNEW2/scripts.pory"
	closemessage
# 31 "data/maps/ISLANDNEW2/scripts.pory"
	releaseall
	return

ISLANDNEW2_EventScript_boygoaheadif_2:
# 34 "data/maps/ISLANDNEW2/scripts.pory"
	lockall
# 35 "data/maps/ISLANDNEW2/scripts.pory"
	MSGBOX ISLANDNEW2_EventScript_boygoaheadif_Text_1
# 36 "data/maps/ISLANDNEW2/scripts.pory"
	closemessage
# 37 "data/maps/ISLANDNEW2/scripts.pory"
	releaseall
	return


ISLANDNEW2_Trigger_haventstartedtrout_Text_0:
# 9 "data/maps/ISLANDNEW2/scripts.pory"
	.string "this path will probably softlock you, so\n"
	.string "please save$"

ISLANDNEW2_Trigger_haventstartedtrout_Text_1:
# 14 "data/maps/ISLANDNEW2/scripts.pory"
	.string "this path has to do with MASTER TROUT's\n"
	.string "challenge which you havent started.$"

ISLANDNEW2_EventScript_boygoaheadif_Text_0:
# 29 "data/maps/ISLANDNEW2/scripts.pory"
	.string "go on through$"

ISLANDNEW2_EventScript_boygoaheadif_Text_1:
# 35 "data/maps/ISLANDNEW2/scripts.pory"
	.string "sorry, cant let you through$"
