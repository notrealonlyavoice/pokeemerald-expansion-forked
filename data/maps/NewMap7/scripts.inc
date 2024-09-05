# 1 "data/maps/NewMap7/scripts.pory"

# 2 "data/maps/NewMap7/scripts.pory"
NewMap7_MapScripts::
# 3 "data/maps/NewMap7/scripts.pory"
	.byte 0

NewMap7_EventScript_clopscript::
# 7 "data/maps/NewMap7/scripts.pory"
	lockall
# 8 "data/maps/NewMap7/scripts.pory"
	playmoncry SPECIES_DUSCLOPS, CRY_MODE_ENCOUNTER
# 9 "data/maps/NewMap7/scripts.pory"
	delay 40
# 10 "data/maps/NewMap7/scripts.pory"
	MSGBOX NewMap7_EventScript_clopscript_Text_0
# 11 "data/maps/NewMap7/scripts.pory"
	playmoncry SPECIES_DUSCLOPS, CRY_MODE_ENCOUNTER
# 12 "data/maps/NewMap7/scripts.pory"
	warpsilent MAP_NEW_MAP7, 17, 31
# 13 "data/maps/NewMap7/scripts.pory"
	waitmessage
# 14 "data/maps/NewMap7/scripts.pory"
	closemessage
# 15 "data/maps/NewMap7/scripts.pory"
	releaseall
	return


NewMap7_EventScript_clopscript_Text_0:
# 10 "data/maps/NewMap7/scripts.pory"
	.string "GYUUUUUU$"
