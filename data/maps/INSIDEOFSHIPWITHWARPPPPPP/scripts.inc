# 1 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"

# 2 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
INSIDEOFSHIPWITHWARPPPPPP_MapScripts::
# 3 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	.byte 0

INSIDEOFSHIPWITHWARPPPPPP_EventScript_TrashBin::
# 7 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	lockall
# 8 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	msgbox INSIDEOFSHIPWITHWARPPPPPP_EventScript_TrashBin_Text_0
# 9 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	releaseall
	return


INSIDEOFSHIPWITHWARPPPPPP_EventScript_StarterNote::
# 14 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	lockall
# 15 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	msgbox INSIDEOFSHIPWITHWARPPPPPP_EventScript_StarterNote_Text_0
# 16 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	msgbox INSIDEOFSHIPWITHWARPPPPPP_EventScript_StarterNote_Text_1, MSGBOX_YESNO
# 17 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq INSIDEOFSHIPWITHWARPPPPPP_EventScript_StarterNote_2
# 27 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	hidemonpic
# 28 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	msgbox Item_NotChosen
INSIDEOFSHIPWITHWARPPPPPP_EventScript_StarterNote_1:
# 30 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	waitmessage
# 31 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	releaseall
	end

INSIDEOFSHIPWITHWARPPPPPP_EventScript_StarterNote_2:
# 18 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	giveitem ITEM_FOCUS_SASH
# 19 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 20 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	setvar VAR_UNUSED_0x40F7, 1
# 21 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	msgbox INSIDEOFSHIPWITHWARPPPPPP_EventScript_StarterNote_Text_2
# 22 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	removeobject 1
# 23 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	setflag STARTED_GAME
	goto INSIDEOFSHIPWITHWARPPPPPP_EventScript_StarterNote_1


LittlerootTown_Trigger_TriggerStarter::
# 45 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	lockall
# 46 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	msgbox LittlerootTown_Trigger_TriggerStarter_Text_0
# 47 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 48 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	waitmovement 0
# 49 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	releaseall
	return


# 55 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
StopPlayer:
# 56 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	walk_down
	step_end

INSIDEOFSHIPWITHWARPPPPPP_EventScript_TrashBin_Text_0:
# 8 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	.string "trash, yuck$"

INSIDEOFSHIPWITHWARPPPPPP_EventScript_StarterNote_Text_0:
# 15 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	.string "A note from mom is on item ball: Hope\n"
	.string "you are having fun on your journey,\l"
	.string "take this item to help you.$"

INSIDEOFSHIPWITHWARPPPPPP_EventScript_StarterNote_Text_1:
# 16 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	.string "Pick up Item?$"

INSIDEOFSHIPWITHWARPPPPPP_EventScript_StarterNote_Text_2:
# 21 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	.string "Picked up Item$"

LittlerootTown_Trigger_TriggerStarter_Text_0:
# 46 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	.string "Check your room$"

Item_NotChosen::
# 39 "data/maps/INSIDEOFSHIPWITHWARPPPPPP/scripts.pory"
	.string "You did not Pick up the Item$"
