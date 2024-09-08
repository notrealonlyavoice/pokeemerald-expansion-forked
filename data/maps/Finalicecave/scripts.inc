# 1 "data/maps/Finalicecave/scripts.pory"

# 2 "data/maps/Finalicecave/scripts.pory"
Finalicecave_MapScripts::
# 3 "data/maps/Finalicecave/scripts.pory"
	.byte 0

Finalicecave_EventScript_KidMiles::
# 8 "data/maps/Finalicecave/scripts.pory"
	MSGBOX Finalicecave_EventScript_KidMiles_Text_0
# 9 "data/maps/Finalicecave/scripts.pory"
	waitmessage
# 10 "data/maps/Finalicecave/scripts.pory"
	trainerbattle_single TRAINER_ALBERT, Miles_Intro, Miles_Outro, PostMilesbattle
	return


PostMilesbattle::
# 22 "data/maps/Finalicecave/scripts.pory"
	lockall
# 23 "data/maps/Finalicecave/scripts.pory"
	MSGBOX PostMilesbattle_Text_0
# 24 "data/maps/Finalicecave/scripts.pory"
	waitmessage
# 25 "data/maps/Finalicecave/scripts.pory"
	msgbox PostMilesbattle_Text_1
# 26 "data/maps/Finalicecave/scripts.pory"
	waitmessage
# 27 "data/maps/Finalicecave/scripts.pory"
	applymovement 1, Milesscoot
# 28 "data/maps/Finalicecave/scripts.pory"
	closemessage
# 30 "data/maps/Finalicecave/scripts.pory"
	waitmovement 0
	end


# 34 "data/maps/Finalicecave/scripts.pory"
Milesscoot:
# 35 "data/maps/Finalicecave/scripts.pory"
	walk_up
# 36 "data/maps/Finalicecave/scripts.pory"
	walk_left
# 37 "data/maps/Finalicecave/scripts.pory"
	face_right
	step_end

Finalicecave_EventScript_KidMiles_Text_0:
# 8 "data/maps/Finalicecave/scripts.pory"
	.string "Yoooooo. Super rad that you found me\n"
	.string "bro! isnt this cave lit??? Oh.... Island\l"
	.string "challenge. I guess I could spare a\l"
	.string "couple mins to beat you in STYLE!$"

PostMilesbattle_Text_0:
# 23 "data/maps/Finalicecave/scripts.pory"
	.string "Dam. Your battle strats are lokey slick\n"
	.string "my dude.$"

PostMilesbattle_Text_1:
# 25 "data/maps/Finalicecave/scripts.pory"
	.string "You might be ready to finish the ISLAND\n"
	.string "CHALLENGES after all...$"

Miles_Intro::
# 13 "data/maps/Finalicecave/scripts.pory"
	.string "WOOHOO!$"

Miles_Outro::
# 17 "data/maps/Finalicecave/scripts.pory"
	.string "Nowaybrohow---?$"
