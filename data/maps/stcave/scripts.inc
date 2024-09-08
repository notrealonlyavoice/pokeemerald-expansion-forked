# 1 "data/maps/stcave/scripts.pory"

# 2 "data/maps/stcave/scripts.pory"
stcave_MapScripts::
# 3 "data/maps/stcave/scripts.pory"
	.byte 0

stcave_EventScript_samehikerasbefore::
# 7 "data/maps/stcave/scripts.pory"
	lockall
# 8 "data/maps/stcave/scripts.pory"
	MSGBOX stcave_EventScript_samehikerasbefore_Text_0
# 9 "data/maps/stcave/scripts.pory"
	waitmessage
# 10 "data/maps/stcave/scripts.pory"
	closemessage
# 11 "data/maps/stcave/scripts.pory"
	releaseall
	return


stcave_EventScript_samehikerasbefore_Text_0:
# 8 "data/maps/stcave/scripts.pory"
	.string "remember to save often during puzzles!$"
