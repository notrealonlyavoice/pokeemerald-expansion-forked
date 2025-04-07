# 1 "data//maps/BirchlabReal/scripts.pory"

# 2 "data//maps/BirchlabReal/scripts.pory"
BirchlabReal_MapScripts::
# 3 "data//maps/BirchlabReal/scripts.pory"
	.byte 0

BirchlabReal_EventScript_givestartrun::
# 7 "data//maps/BirchlabReal/scripts.pory"
	lockall
# 8 "data//maps/BirchlabReal/scripts.pory"
	msgbox BirchlabReal_EventScript_givestartrun_Text_0, MSGBOX_YESNO
# 9 "data//maps/BirchlabReal/scripts.pory"
	switch VAR_RESULT
# 10 "data//maps/BirchlabReal/scripts.pory"
	case YES, BirchlabReal_EventScript_givestartrun_2
# 19 "data//maps/BirchlabReal/scripts.pory"
	case NO, BirchlabReal_EventScript_givestartrun_3
# 23 "data//maps/BirchlabReal/scripts.pory"
	case MULTI_B_PRESSED, BirchlabReal_EventScript_givestartrun_4
	return

BirchlabReal_EventScript_givestartrun_2:
# 11 "data//maps/BirchlabReal/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 12 "data//maps/BirchlabReal/scripts.pory"
	givemon SPECIES_CHIKORITA, 5, ITEM_POWER_CHARM
# 13 "data//maps/BirchlabReal/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 14 "data//maps/BirchlabReal/scripts.pory"
	msgbox BirchlabReal_EventScript_givestartrun_Text_1
# 15 "data//maps/BirchlabReal/scripts.pory"
	waitmessage
# 16 "data//maps/BirchlabReal/scripts.pory"
	setvar VAR_UNUSED_0x40FF, 2
# 17 "data//maps/BirchlabReal/scripts.pory"
	msgbox BirchlabReal_EventScript_givestartrun_Text_2
# 18 "data//maps/BirchlabReal/scripts.pory"
	releaseall
	return

BirchlabReal_EventScript_givestartrun_3:
# 20 "data//maps/BirchlabReal/scripts.pory"
	msgbox BirchlabReal_EventScript_givestartrun_Text_3
# 21 "data//maps/BirchlabReal/scripts.pory"
	releaseall
	end

BirchlabReal_EventScript_givestartrun_4:
# 24 "data//maps/BirchlabReal/scripts.pory"
	msgbox BirchlabReal_EventScript_givestartrun_Text_3
# 25 "data//maps/BirchlabReal/scripts.pory"
	releaseall
	end


BirchlabReal_EventScript_givestartrun_Text_0:
# 8 "data//maps/BirchlabReal/scripts.pory"
	.string "are you ready to begin your run?$"

BirchlabReal_EventScript_givestartrun_Text_1:
# 14 "data//maps/BirchlabReal/scripts.pory"
	.string "Recieved Chikorita$"

BirchlabReal_EventScript_givestartrun_Text_2:
# 17 "data//maps/BirchlabReal/scripts.pory"
	.string "and may the odds, be in your favor.$"

BirchlabReal_EventScript_givestartrun_Text_3:
# 20 "data//maps/BirchlabReal/scripts.pory"
	.string "Hm, Alright.. best to wait$"
