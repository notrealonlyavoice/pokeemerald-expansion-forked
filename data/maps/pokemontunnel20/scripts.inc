# 1 "data/maps/pokemontunnel20/scripts.pory"

# 2 "data/maps/pokemontunnel20/scripts.pory"
pokemontunnel20_MapScripts::
# 3 "data/maps/pokemontunnel20/scripts.pory"
	.byte 0

pokemontunnel20_EventScript_grampatrout::
# 7 "data/maps/pokemontunnel20/scripts.pory"
	MSGBOX pokemontunnel20_EventScript_grampatrout_Text_0
# 8 "data/maps/pokemontunnel20/scripts.pory"
	waitmessage
# 9 "data/maps/pokemontunnel20/scripts.pory"
	trainerbattle_single TRAINER_WARREN, Trout_Intro, Trout_Outro, PostTroutbattle
	return


PostTroutbattle::
# 21 "data/maps/pokemontunnel20/scripts.pory"
	lockall
# 22 "data/maps/pokemontunnel20/scripts.pory"
	MSGBOX PostTroutbattle_Text_0
# 23 "data/maps/pokemontunnel20/scripts.pory"
	waitmessage
# 24 "data/maps/pokemontunnel20/scripts.pory"
	msgbox PostTroutbattle_Text_1
# 25 "data/maps/pokemontunnel20/scripts.pory"
	waitmessage
	end


pokemontunnel20_EventScript_grampatrout_Text_0:
# 7 "data/maps/pokemontunnel20/scripts.pory"
	.string "Impressive that you found me. I\n"
	.string "normally use only 1 pokemon, but you\l"
	.string "have potential. I'll use two today. I\l"
	.string "hope you give this all you got!$"

PostTroutbattle_Text_0:
# 22 "data/maps/pokemontunnel20/scripts.pory"
	.string "you have far surpasses what I\n"
	.string "expected. I wish you luck in the other\l"
	.string "challenges$"

PostTroutbattle_Text_1:
# 24 "data/maps/pokemontunnel20/scripts.pory"
	.string "Temp end for Beta.$"

Trout_Intro::
# 12 "data/maps/pokemontunnel20/scripts.pory"
	.string "FIGHT!$"

Trout_Outro::
# 16 "data/maps/pokemontunnel20/scripts.pory"
	.string "W-what?$"
