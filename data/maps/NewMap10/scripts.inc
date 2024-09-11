# 1 "data/maps/NewMap10/scripts.pory"

# 2 "data/maps/NewMap10/scripts.pory"
NewMap10_MapScripts::
# 3 "data/maps/NewMap10/scripts.pory"
.byte 0

NewMap10_Eventscript_finalbattlelesgo::
# 7 "data/maps/NewMap10/scripts.pory"
	MSGBOX NewMap10_Eventscript_finalbattlelesgo_Text_0
# 8 "data/maps/NewMap10/scripts.pory"
	waitmessage
# 9 "data/maps/NewMap10/scripts.pory"
	trainerbattle_double TRAINER_LEROY, cleveman_Intro, cleverman_Outro, Postclevermanbattle
	return


Postclevermanbattle::
# 22 "data/maps/NewMap10/scripts.pory"
	lockall
# 23 "data/maps/NewMap10/scripts.pory"
	MSGBOX Postclevermanbattle_Text_0
# 24 "data/maps/NewMap10/scripts.pory"
	delay 40
# 25 "data/maps/NewMap10/scripts.pory"
	fadescreen FADE_TO_BLACK
# 26 "data/maps/NewMap10/scripts.pory"
	setvar VAR_UNUSED_0x409B, 1
# 27 "data/maps/NewMap10/scripts.pory"
	delay 40
# 28 "data/maps/NewMap10/scripts.pory"
	warpsilent MAP_ISLANDNEW, 32, 4
# 29 "data/maps/NewMap10/scripts.pory"
	waitstate
	return


NewMap10_Eventscript_finalbattlelesgo_Text_0:
# 7 "data/maps/NewMap10/scripts.pory"
	.string "You have arrived at the finale.. im\n"
	.string "impressed youve made it this far... beat\l"
	.string "me and you'll be free to go home.....$"

Postclevermanbattle_Text_0:
# 23 "data/maps/NewMap10/scripts.pory"
	.string "I have no reason to keep you here any longer$"

cleveman_Intro::
# 13 "data/maps/NewMap10/scripts.pory"
	.string "FIGHT WITH ALL YOU GOT$"

cleverman_Outro::
# 17 "data/maps/NewMap10/scripts.pory"
	.string "you are truly clever....$"
