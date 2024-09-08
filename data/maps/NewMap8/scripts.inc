# 1 "data/maps/NewMap8/scripts.pory"

# 2 "data/maps/NewMap8/scripts.pory"
NewMap8_MapScripts::
# 3 "data/maps/NewMap8/scripts.pory"
	.byte 0

NewMap8_EventScript_leadermoria::
# 7 "data/maps/NewMap8/scripts.pory"
	MSGBOX NewMap8_EventScript_leadermoria_Text_0
# 8 "data/maps/NewMap8/scripts.pory"
	waitmessage
# 9 "data/maps/NewMap8/scripts.pory"
	trainerbattle_single TRAINER_MARY, Moria_Intro, Moria_Outro, PostMoriaBattle
	return


PostMoriaBattle::
# 21 "data/maps/NewMap8/scripts.pory"
	lockall
# 22 "data/maps/NewMap8/scripts.pory"
	MSGBOX PostMoriaBattle_Text_0
# 23 "data/maps/NewMap8/scripts.pory"
	waitmessage
# 24 "data/maps/NewMap8/scripts.pory"
	msgbox PostMoriaBattle_Text_1
# 25 "data/maps/NewMap8/scripts.pory"
	waitmessage
# 26 "data/maps/NewMap8/scripts.pory"
	fadescreen FADE_TO_BLACK
# 27 "data/maps/NewMap8/scripts.pory"
	setvar VAR_0x8006, 8
# 28 "data/maps/NewMap8/scripts.pory"
	setvar VAR_0x8008, 11
# 29 "data/maps/NewMap8/scripts.pory"
	delay 40
# 30 "data/maps/NewMap8/scripts.pory"
	warpsilent MAP_ISLANDNEW, 14, 18
# 31 "data/maps/NewMap8/scripts.pory"
	waitstate
	return


NewMap8_EventScript_leadermoria_Text_0:
# 7 "data/maps/NewMap8/scripts.pory"
	.string "You managed to navitage the\n"
	.string "treacherous SPINCLOPS FOREST without\l"
	.string "going insane. for that commend you.\l"
	.string "unfortunatly you now have to fight me\l"
	.string "and i'm afraid this is where your island\l"
	.string "challenge ends$"

PostMoriaBattle_Text_0:
# 22 "data/maps/NewMap8/scripts.pory"
	.string "Despite your pathetic team you have\n"
	.string "somehow overcome me in this battle. I\l"
	.string "commend you for your exceptional\l"
	.string "strategy.$"

PostMoriaBattle_Text_1:
# 24 "data/maps/NewMap8/scripts.pory"
	.string "I no longer have use for you. Return\n"
	.string "back to the main island and leave me in\l"
	.string "peace$"

Moria_Intro::
# 12 "data/maps/NewMap8/scripts.pory"
	.string "Prepare to lose.$"

Moria_Outro::
# 16 "data/maps/NewMap8/scripts.pory"
	.string "...$"
