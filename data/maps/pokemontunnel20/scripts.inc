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
# 26 "data/maps/pokemontunnel20/scripts.pory"
	applymovement 1, troutscoot
# 27 "data/maps/pokemontunnel20/scripts.pory"
	closemessage
# 28 "data/maps/pokemontunnel20/scripts.pory"
	setvar VAR_0x8006, 5
# 29 "data/maps/pokemontunnel20/scripts.pory"
	setvar VAR_0x8008, 9
# 30 "data/maps/pokemontunnel20/scripts.pory"
	waitmovement 0
	end


# 34 "data/maps/pokemontunnel20/scripts.pory"
troutscoot:
# 35 "data/maps/pokemontunnel20/scripts.pory"
	walk_left
	step_end

pokemontunnel20_EventScript_grampatrout_Text_0:
# 7 "data/maps/pokemontunnel20/scripts.pory"
	.string "Impressive that you found me. I\n"
	.string "normally use only 1 pokemon, but you\l"
	.string "have potential. I'll use two today. I\l"
	.string "hope you give this all you got!$"

PostTroutbattle_Text_0:
# 22 "data/maps/pokemontunnel20/scripts.pory"
	.string "you have far surpassed what I\n"
	.string "expected. I wish you luck in the other\l"
	.string "challenges$"

PostTroutbattle_Text_1:
# 24 "data/maps/pokemontunnel20/scripts.pory"
	.string "take the door behind me to avoid\n"
	.string "getting lost in the CONJOINED CAVES$"

Trout_Intro::
# 12 "data/maps/pokemontunnel20/scripts.pory"
	.string "FIGHT!$"

Trout_Outro::
# 16 "data/maps/pokemontunnel20/scripts.pory"
	.string "W-what?$"
