# 1 "data/maps/REKTSHIPPP/scripts.pory"

# 2 "data/maps/REKTSHIPPP/scripts.pory"
REKTSHIPPP_MapScripts::
# 3 "data/maps/REKTSHIPPP/scripts.pory"
	.byte 0

REKTSHIPPP_Trigger_dontgoback::
# 7 "data/maps/REKTSHIPPP/scripts.pory"
	MSGBOX REKTSHIPPP_Trigger_dontgoback_Text_0
# 8 "data/maps/REKTSHIPPP/scripts.pory"
	waitmessage
# 9 "data/maps/REKTSHIPPP/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, dongobackmove
# 10 "data/maps/REKTSHIPPP/scripts.pory"
	closemessage
	return


# 13 "data/maps/REKTSHIPPP/scripts.pory"
dongobackmove:
# 14 "data/maps/REKTSHIPPP/scripts.pory"
	walk_right
# 14 "data/maps/REKTSHIPPP/scripts.pory"
	walk_right
	step_end

REKTSHIPPP_Trigger_shipwreckshake::
# 18 "data/maps/REKTSHIPPP/scripts.pory"
	lockall
# 19 "data/maps/REKTSHIPPP/scripts.pory"
	call ShipWrekCut
# 20 "data/maps/REKTSHIPPP/scripts.pory"
	releaseall
	return


REKTSHIPPP_EventScript_strengthpuzzleskip::
# 25 "data/maps/REKTSHIPPP/scripts.pory"
	lockall
# 26 "data/maps/REKTSHIPPP/scripts.pory"
	giveitem ITEM_HM_STRENGTH
# 27 "data/maps/REKTSHIPPP/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 28 "data/maps/REKTSHIPPP/scripts.pory"
	setflag FLAG_BADGE04_GET
# 29 "data/maps/REKTSHIPPP/scripts.pory"
	msgbox REKTSHIPPP_EventScript_strengthpuzzleskip_Text_0
# 30 "data/maps/REKTSHIPPP/scripts.pory"
	removeobject 1
# 31 "data/maps/REKTSHIPPP/scripts.pory"
	setflag PLAYER_HAS_STRENGTH
# 32 "data/maps/REKTSHIPPP/scripts.pory"
	waitmessage
# 33 "data/maps/REKTSHIPPP/scripts.pory"
	releaseall
	end


REKTSHIPPP_Trigger_endofship::
# 39 "data/maps/REKTSHIPPP/scripts.pory"
	MSGBOX REKTSHIPPP_Trigger_endofship_Text_0
# 40 "data/maps/REKTSHIPPP/scripts.pory"
	waitmessage
# 41 "data/maps/REKTSHIPPP/scripts.pory"
	closemessage
# 42 "data/maps/REKTSHIPPP/scripts.pory"
	fadescreen FADE_TO_BLACK
# 43 "data/maps/REKTSHIPPP/scripts.pory"
	delay 50
# 44 "data/maps/REKTSHIPPP/scripts.pory"
	warpsilent MAP_ISLANDNEW, 10, 32
# 45 "data/maps/REKTSHIPPP/scripts.pory"
	waitstate
	end


REKTSHIPPP_Trigger_dontgoback_Text_0:
# 7 "data/maps/REKTSHIPPP/scripts.pory"
	.string "there is no use$"

REKTSHIPPP_EventScript_strengthpuzzleskip_Text_0:
# 29 "data/maps/REKTSHIPPP/scripts.pory"
	.string "Picked up Item$"

REKTSHIPPP_Trigger_endofship_Text_0:
# 39 "data/maps/REKTSHIPPP/scripts.pory"
	.string "you feel your body weakening... you must\n"
	.string "have been injured in the wreck$"
