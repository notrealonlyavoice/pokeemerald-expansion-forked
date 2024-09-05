# 2 "data/maps/SurfroomHM/scripts.pory"

# 3 "data/maps/SurfroomHM/scripts.pory"
SurfroomHM_MapScripts::
# 4 "data/maps/SurfroomHM/scripts.pory"
	.byte 0

REKTSHIPPP_EventScript_surfdudepuzzle::
# 11 "data/maps/SurfroomHM/scripts.pory"
	MSGBOX REKTSHIPPP_EventScript_surfdudepuzzle_Text_0
# 12 "data/maps/SurfroomHM/scripts.pory"
	MSGBOX REKTSHIPPP_EventScript_surfdudepuzzle_Text_1, MSGBOX_YESNO
# 13 "data/maps/SurfroomHM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq REKTSHIPPP_EventScript_surfdudepuzzle_1
# 49 "data/maps/SurfroomHM/scripts.pory"
	msgbox REKTSHIPPP_EventScript_surfdudepuzzle_Text_9
	return

REKTSHIPPP_EventScript_surfdudepuzzle_1:
# 14 "data/maps/SurfroomHM/scripts.pory"
	MSGBOX REKTSHIPPP_EventScript_surfdudepuzzle_Text_2
# 15 "data/maps/SurfroomHM/scripts.pory"
	MSGBOX REKTSHIPPP_EventScript_surfdudepuzzle_Text_3, MSGBOX_YESNO
# 16 "data/maps/SurfroomHM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq REKTSHIPPP_EventScript_surfdudepuzzle_4
# 22 "data/maps/SurfroomHM/scripts.pory"
	MSGBOX REKTSHIPPP_EventScript_surfdudepuzzle_Text_5
# 23 "data/maps/SurfroomHM/scripts.pory"
	waitmessage
# 24 "data/maps/SurfroomHM/scripts.pory"
	givemon SPECIES_FRILLISH, 5, ITEM_BERRY_JUICE, abilityNum = 0, move1 = MOVE_WILL_O_WISP, move2 = MOVE_WHIRLPOOL, move3 = MOVE_PAIN_SPLIT, move4 = MOVE_SURF
# 25 "data/maps/SurfroomHM/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq REKTSHIPPP_EventScript_surfdudepuzzle_7
# 36 "data/maps/SurfroomHM/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq REKTSHIPPP_EventScript_surfdudepuzzle_8
# 44 "data/maps/SurfroomHM/scripts.pory"
	hidemonpic
# 45 "data/maps/SurfroomHM/scripts.pory"
	msgbox REKTSHIPPP_EventScript_surfdudepuzzle_Text_8
	return

REKTSHIPPP_EventScript_surfdudepuzzle_4:
# 17 "data/maps/SurfroomHM/scripts.pory"
	MSGBOX REKTSHIPPP_EventScript_surfdudepuzzle_Text_4
# 18 "data/maps/SurfroomHM/scripts.pory"
	waitmessage
# 19 "data/maps/SurfroomHM/scripts.pory"
	closemessage
	return

REKTSHIPPP_EventScript_surfdudepuzzle_7:
# 26 "data/maps/SurfroomHM/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 27 "data/maps/SurfroomHM/scripts.pory"
	msgbox REKTSHIPPP_EventScript_surfdudepuzzle_Text_6
# 28 "data/maps/SurfroomHM/scripts.pory"
	msgbox REKTSHIPPP_EventScript_surfdudepuzzle_Text_7
# 29 "data/maps/SurfroomHM/scripts.pory"
	waitmessage
# 30 "data/maps/SurfroomHM/scripts.pory"
	removeobject 1
# 31 "data/maps/SurfroomHM/scripts.pory"
	setflag FLAG_BADGE05_GET
# 32 "data/maps/SurfroomHM/scripts.pory"
	setflag PLAYER_HAS_SURFMON
# 33 "data/maps/SurfroomHM/scripts.pory"
	call NicknamePartyMon
# 34 "data/maps/SurfroomHM/scripts.pory"
	closemessage
	return

REKTSHIPPP_EventScript_surfdudepuzzle_8:
# 37 "data/maps/SurfroomHM/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 38 "data/maps/SurfroomHM/scripts.pory"
	msgbox REKTSHIPPP_EventScript_surfdudepuzzle_Text_6
# 39 "data/maps/SurfroomHM/scripts.pory"
	setflag FLAG_BADGE05_GET
# 40 "data/maps/SurfroomHM/scripts.pory"
	setflag PLAYER_HAS_SURFMON
# 41 "data/maps/SurfroomHM/scripts.pory"
	call NicknameBoxMon
	return


REKTSHIPPP_EventScript_surfdudepuzzle_Text_0:
# 11 "data/maps/SurfroomHM/scripts.pory"
	.string "everyone else is gone, and i cant leave\n"
	.string "because im so old and tired... ... ... but\l"
	.string "you can save yourself! solve this little\l"
	.string "puzzle first and youll be free to go$"

REKTSHIPPP_EventScript_surfdudepuzzle_Text_1:
# 12 "data/maps/SurfroomHM/scripts.pory"
	.string "solve the puzzle?$"

REKTSHIPPP_EventScript_surfdudepuzzle_Text_2:
# 14 "data/maps/SurfroomHM/scripts.pory"
	.string "ok here goes. the GRASS and FIGHTING\n"
	.string "legendary from Unova has more attack\l"
	.string "than pincusion$"

REKTSHIPPP_EventScript_surfdudepuzzle_Text_3:
# 15 "data/maps/SurfroomHM/scripts.pory"
	.string "legendary is stonger right?$"

REKTSHIPPP_EventScript_surfdudepuzzle_Text_4:
# 17 "data/maps/SurfroomHM/scripts.pory"
	.string "careful now... we havent implimented\n"
	.string "soflock saves yet KEKW$"

REKTSHIPPP_EventScript_surfdudepuzzle_Text_5:
# 22 "data/maps/SurfroomHM/scripts.pory"
	.string "impressive, here take this pokemon and\n"
	.string "surf out of this hellscape.$"

REKTSHIPPP_EventScript_surfdudepuzzle_Text_6:
# 27 "data/maps/SurfroomHM/scripts.pory"
	.string "Recieved frillish$"

REKTSHIPPP_EventScript_surfdudepuzzle_Text_7:
# 28 "data/maps/SurfroomHM/scripts.pory"
	.string "ta-ta!$"

REKTSHIPPP_EventScript_surfdudepuzzle_Text_8:
# 45 "data/maps/SurfroomHM/scripts.pory"
	.string "No More Room$"

REKTSHIPPP_EventScript_surfdudepuzzle_Text_9:
# 49 "data/maps/SurfroomHM/scripts.pory"
	.string "I doubt you can escape without my\n"
	.string "help...$"
