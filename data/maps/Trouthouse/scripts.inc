# 1 "data/maps/Trouthouse/scripts.pory"

# 2 "data/maps/Trouthouse/scripts.pory"
Trouthouse_MapScripts::
# 3 "data/maps/Trouthouse/scripts.pory"
	.byte 0

Trouthouse_EventScript_Troutgrnadaughter::
# 8 "data/maps/Trouthouse/scripts.pory"
	compare VAR_0x8006, 3
	goto_if_eq Trouthouse_EventScript_Troutgrnadaughter_1
# 17 "data/maps/Trouthouse/scripts.pory"
	lockall
# 18 "data/maps/Trouthouse/scripts.pory"
	MSGBOX Trouthouse_EventScript_Troutgrnadaughter_Text_1
# 19 "data/maps/Trouthouse/scripts.pory"
	closemessage
	return

Trouthouse_EventScript_Troutgrnadaughter_1:
# 10 "data/maps/Trouthouse/scripts.pory"
	lockall
# 11 "data/maps/Trouthouse/scripts.pory"
	MSGBOX Trouthouse_EventScript_Troutgrnadaughter_Text_0
# 12 "data/maps/Trouthouse/scripts.pory"
	setvar ( VAR_0x8006 ), 4
# 13 "data/maps/Trouthouse/scripts.pory"
	closemessage
# 14 "data/maps/Trouthouse/scripts.pory"
	releaseall
	return


Trouthouse_EventScript_Troutgrnadaughter_Text_0:
# 11 "data/maps/Trouthouse/scripts.pory"
	.string "oh... Youre doing grandpa trouts\n"
	.string "challenge? Its very hard but i know the\l"
	.string "combination to help you. The\l"
	.string "combination is ABABCCCBCBABCBABCBA\l"
	.string "SWITCHED!$"

Trouthouse_EventScript_Troutgrnadaughter_Text_1:
# 18 "data/maps/Trouthouse/scripts.pory"
	.string "I gave you the password already. go\n"
	.string "away$"
