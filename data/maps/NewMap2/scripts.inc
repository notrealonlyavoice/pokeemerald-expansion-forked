# 1 "data/maps/NewMap2/scripts.pory"

# 2 "data/maps/NewMap2/scripts.pory"
NewMap2_MapScripts::
# 3 "data/maps/NewMap2/scripts.pory"
	.byte 0

NewMap2_EventScript_SashTrade::
# 7 "data/maps/NewMap2/scripts.pory"
	goto_if_set NO_SASH_HASKOFFING, NewMap2_EventScript_SashTrade_1
# 14 "data/maps/NewMap2/scripts.pory"
	faceplayer
# 15 "data/maps/NewMap2/scripts.pory"
	msgbox NewMap2_EventScript_SashTrade_Text_1
# 16 "data/maps/NewMap2/scripts.pory"
	msgbox NewMap2_EventScript_SashTrade_Text_2, MSGBOX_YESNO
# 17 "data/maps/NewMap2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewMap2_EventScript_SashTrade_4
# 41 "data/maps/NewMap2/scripts.pory"
	msgbox NewMap2_EventScript_SashTrade_Text_6
# 42 "data/maps/NewMap2/scripts.pory"
	closemessage
	return

NewMap2_EventScript_SashTrade_1:
# 8 "data/maps/NewMap2/scripts.pory"
	faceplayer
# 9 "data/maps/NewMap2/scripts.pory"
	msgbox NewMap2_EventScript_SashTrade_Text_0
# 10 "data/maps/NewMap2/scripts.pory"
	waitmessage
# 11 "data/maps/NewMap2/scripts.pory"
	closemessage
	return

NewMap2_EventScript_SashTrade_4:
# 18 "data/maps/NewMap2/scripts.pory"
	removeitem ITEM_FOCUS_SASH
# 19 "data/maps/NewMap2/scripts.pory"
	givemon SPECIES_KOFFING, 5, ITEM_CUSTAP_BERRY, abilityNum = 0, move1 = MOVE_WILL_O_WISP, move2 = MOVE_GASTRO_ACID, move3 = MOVE_ENDURE, move4 = MOVE_TAUNT
# 20 "data/maps/NewMap2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewMap2_EventScript_SashTrade_7
# 29 "data/maps/NewMap2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewMap2_EventScript_SashTrade_8
# 36 "data/maps/NewMap2/scripts.pory"
	hidemonpic
# 37 "data/maps/NewMap2/scripts.pory"
	msgbox NewMap2_EventScript_SashTrade_Text_5
	return

NewMap2_EventScript_SashTrade_7:
# 21 "data/maps/NewMap2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 22 "data/maps/NewMap2/scripts.pory"
	msgbox NewMap2_EventScript_SashTrade_Text_3
# 23 "data/maps/NewMap2/scripts.pory"
	msgbox NewMap2_EventScript_SashTrade_Text_4
# 24 "data/maps/NewMap2/scripts.pory"
	waitmessage
# 25 "data/maps/NewMap2/scripts.pory"
	setflag NO_SASH_HASKOFFING
# 26 "data/maps/NewMap2/scripts.pory"
	call NicknamePartyMon
# 27 "data/maps/NewMap2/scripts.pory"
	closemessage
	return

NewMap2_EventScript_SashTrade_8:
# 30 "data/maps/NewMap2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 31 "data/maps/NewMap2/scripts.pory"
	msgbox NewMap2_EventScript_SashTrade_Text_3
# 32 "data/maps/NewMap2/scripts.pory"
	setflag NO_SASH_HASKOFFING
# 33 "data/maps/NewMap2/scripts.pory"
	call NicknameBoxMon
	return


NewMap2_EventScript_RandomSceneryBoy::
# 48 "data/maps/NewMap2/scripts.pory"
	lockall
# 49 "data/maps/NewMap2/scripts.pory"
	msgbox NewMap2_EventScript_RandomSceneryBoy_Text_0
# 50 "data/maps/NewMap2/scripts.pory"
	releaseall
	return


NewMap2_EventScript_SashTrade_Text_0:
# 9 "data/maps/NewMap2/scripts.pory"
	.string "go explore the ship and find your friend$"

NewMap2_EventScript_SashTrade_Text_1:
# 15 "data/maps/NewMap2/scripts.pory"
	.string "Would you like to make a trade. I have a\n"
	.string "useful pokemon that makes other\l"
	.string "INTRESTING POKEMON very weak. Do you\l"
	.string "want this pokemon in exchange for that\l"
	.string "focus sash you have?$"

NewMap2_EventScript_SashTrade_Text_2:
# 16 "data/maps/NewMap2/scripts.pory"
	.string "make the trade?$"

NewMap2_EventScript_SashTrade_Text_3:
# 22 "data/maps/NewMap2/scripts.pory"
	.string "Recieved Koffing$"

NewMap2_EventScript_SashTrade_Text_4:
# 23 "data/maps/NewMap2/scripts.pory"
	.string "pleasure doing business with you$"

NewMap2_EventScript_SashTrade_Text_5:
# 37 "data/maps/NewMap2/scripts.pory"
	.string "No More Room$"

NewMap2_EventScript_SashTrade_Text_6:
# 41 "data/maps/NewMap2/scripts.pory"
	.string "unfortunate. hope you change your mind\n"
	.string "before its too late.$"

NewMap2_EventScript_RandomSceneryBoy_Text_0:
# 49 "data/maps/NewMap2/scripts.pory"
	.string "THE ROOMS ARE SO BIG!$"
