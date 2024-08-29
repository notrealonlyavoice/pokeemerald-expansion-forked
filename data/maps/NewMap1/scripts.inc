# 1 "data/maps/NewMap1/scripts.pory"

# 2 "data/maps/NewMap1/scripts.pory"
NewMap1_MapScripts::
# 3 "data/maps/NewMap1/scripts.pory"
	.byte 0

ScriptForTailSetup::
# 7 "data/maps/NewMap1/scripts.pory"
	MSGBOX ScriptForTailSetup_Text_0
# 8 "data/maps/NewMap1/scripts.pory"
	MSGBOX ScriptForTailSetup_Text_1, MSGBOX_YESNO
# 9 "data/maps/NewMap1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ScriptForTailSetup_1
# 13 "data/maps/NewMap1/scripts.pory"
	MSGBOX ScriptForTailSetup_Text_2
# 14 "data/maps/NewMap1/scripts.pory"
	waitmessage
# 15 "data/maps/NewMap1/scripts.pory"
	closemessage
# 16 "data/maps/NewMap1/scripts.pory"
	applymovement 1, Maxleave
# 17 "data/maps/NewMap1/scripts.pory"
	waitmovement 0
# 18 "data/maps/NewMap1/scripts.pory"
	removeobject 1
	return

ScriptForTailSetup_1:
# 10 "data/maps/NewMap1/scripts.pory"
	trainerbattle_single TRAINER_JODY, Max_Intro, Max_Outro, PostTailbattle
	return


NewMap1_Trigger_triggerbattleNOW::
# 25 "data/maps/NewMap1/scripts.pory"
	applymovement 1, TriggerMAX
# 26 "data/maps/NewMap1/scripts.pory"
	waitmovement 0
# 27 "data/maps/NewMap1/scripts.pory"
	call ScriptForTailSetup
# 28 "data/maps/NewMap1/scripts.pory"
	setvar VAR_UNUSED_0x40FD, 4
	return


PostTailbattle::
# 41 "data/maps/NewMap1/scripts.pory"
	lockall
# 42 "data/maps/NewMap1/scripts.pory"
	MSGBOX PostTailbattle_Text_0
# 43 "data/maps/NewMap1/scripts.pory"
	waitmessage
# 44 "data/maps/NewMap1/scripts.pory"
	giveitem ITEM_LAGGING_TAIL
# 45 "data/maps/NewMap1/scripts.pory"
	applymovement 1, Maxleave
# 46 "data/maps/NewMap1/scripts.pory"
	waitmovement 0
# 47 "data/maps/NewMap1/scripts.pory"
	removeobject 1
# 48 "data/maps/NewMap1/scripts.pory"
	setflag FLAG_UNUSED_0x02D
# 49 "data/maps/NewMap1/scripts.pory"
	releaseall
	return


# 54 "data/maps/NewMap1/scripts.pory"
Maxleave:
# 55 "data/maps/NewMap1/scripts.pory"
	walk_left
# 55 "data/maps/NewMap1/scripts.pory"
	walk_left
# 55 "data/maps/NewMap1/scripts.pory"
	walk_left
# 55 "data/maps/NewMap1/scripts.pory"
	walk_left
# 55 "data/maps/NewMap1/scripts.pory"
	walk_left
# 55 "data/maps/NewMap1/scripts.pory"
	walk_left
# 55 "data/maps/NewMap1/scripts.pory"
	walk_left
	step_end

# 59 "data/maps/NewMap1/scripts.pory"
TriggerMAX:
# 60 "data/maps/NewMap1/scripts.pory"
	walk_right
# 60 "data/maps/NewMap1/scripts.pory"
	walk_right
# 60 "data/maps/NewMap1/scripts.pory"
	walk_right
# 60 "data/maps/NewMap1/scripts.pory"
	walk_right
	step_end

NewMap1_Eventscript_CutsceneTriggerPlayerFriend::
# 64 "data/maps/NewMap1/scripts.pory"
	lockall
# 65 "data/maps/NewMap1/scripts.pory"
	faceplayer
# 66 "data/maps/NewMap1/scripts.pory"
	msgbox NewMap1_Eventscript_CutsceneTriggerPlayerFriend_Text_0
# 67 "data/maps/NewMap1/scripts.pory"
	MSGBOX NewMap1_Eventscript_CutsceneTriggerPlayerFriend_Text_1, MSGBOX_YESNO
# 68 "data/maps/NewMap1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewMap1_Eventscript_CutsceneTriggerPlayerFriend_1
# 107 "data/maps/NewMap1/scripts.pory"
	closemessage
	return

NewMap1_Eventscript_CutsceneTriggerPlayerFriend_1:
# 69 "data/maps/NewMap1/scripts.pory"
	MSGBOX NewMap1_Eventscript_CutsceneTriggerPlayerFriend_Text_2
# 70 "data/maps/NewMap1/scripts.pory"
	waitmessage
# 71 "data/maps/NewMap1/scripts.pory"
	call ShipWrekCut
# 72 "data/maps/NewMap1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 73 "data/maps/NewMap1/scripts.pory"
	delay 20
# 74 "data/maps/NewMap1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 75 "data/maps/NewMap1/scripts.pory"
	call ShipWrekCut
# 76 "data/maps/NewMap1/scripts.pory"
	MSGBOX NewMap1_Eventscript_CutsceneTriggerPlayerFriend_Text_3
# 77 "data/maps/NewMap1/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 78 "data/maps/NewMap1/scripts.pory"
	doweather
# 79 "data/maps/NewMap1/scripts.pory"
	call ShipWrekCut
# 80 "data/maps/NewMap1/scripts.pory"
	MSGBOX NewMap1_Eventscript_CutsceneTriggerPlayerFriend_Text_4
# 81 "data/maps/NewMap1/scripts.pory"
	waitmessage
# 82 "data/maps/NewMap1/scripts.pory"
	call ShipWrekCut
# 83 "data/maps/NewMap1/scripts.pory"
	delay 20
# 84 "data/maps/NewMap1/scripts.pory"
	applymovement OBJ_EVENT_GFX_SCIENTIST_2, PANIC
# 85 "data/maps/NewMap1/scripts.pory"
	waitmovement 0
# 86 "data/maps/NewMap1/scripts.pory"
	MSGBOX NewMap1_Eventscript_CutsceneTriggerPlayerFriend_Text_5
# 87 "data/maps/NewMap1/scripts.pory"
	call ShipWrekCut
# 88 "data/maps/NewMap1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 89 "data/maps/NewMap1/scripts.pory"
	delay 5
# 90 "data/maps/NewMap1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 91 "data/maps/NewMap1/scripts.pory"
	call ShipWrekCut
# 92 "data/maps/NewMap1/scripts.pory"
	MSGBOX NewMap1_Eventscript_CutsceneTriggerPlayerFriend_Text_6
# 93 "data/maps/NewMap1/scripts.pory"
	waitmessage
# 94 "data/maps/NewMap1/scripts.pory"
	call ShipWrekCut
# 95 "data/maps/NewMap1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 96 "data/maps/NewMap1/scripts.pory"
	delay 15
# 97 "data/maps/NewMap1/scripts.pory"
	warpsilent MAP_NEW_MAP3, 2, 10
# 98 "data/maps/NewMap1/scripts.pory"
	waitstate
	end


ShipWrekCut::
# 113 "data/maps/NewMap1/scripts.pory"
	delay 30
# 114 "data/maps/NewMap1/scripts.pory"
	setvar VAR_0x8004, 2
# 115 "data/maps/NewMap1/scripts.pory"
	setvar VAR_0x8005, 6
# 116 "data/maps/NewMap1/scripts.pory"
	setvar VAR_0x8006, 8
# 117 "data/maps/NewMap1/scripts.pory"
	setvar VAR_0x8007, 4
# 118 "data/maps/NewMap1/scripts.pory"
	special ShakeCamera
# 119 "data/maps/NewMap1/scripts.pory"
	waitstate
# 120 "data/maps/NewMap1/scripts.pory"
	delay 60
	return


# 123 "data/maps/NewMap1/scripts.pory"
PANIC:
# 124 "data/maps/NewMap1/scripts.pory"
	walk_right
# 124 "data/maps/NewMap1/scripts.pory"
	walk_right
# 124 "data/maps/NewMap1/scripts.pory"
	walk_right
# 124 "data/maps/NewMap1/scripts.pory"
	walk_right
# 124 "data/maps/NewMap1/scripts.pory"
	walk_right
# 124 "data/maps/NewMap1/scripts.pory"
	walk_right
# 124 "data/maps/NewMap1/scripts.pory"
	walk_right
# 124 "data/maps/NewMap1/scripts.pory"
	walk_right
	step_end

NewMap1_Eventscript_defaultpanicscientist::
# 128 "data/maps/NewMap1/scripts.pory"
	lockall
# 129 "data/maps/NewMap1/scripts.pory"
	faceplayer
# 130 "data/maps/NewMap1/scripts.pory"
	MSGBOX NewMap1_Eventscript_defaultpanicscientist_Text_0
# 131 "data/maps/NewMap1/scripts.pory"
	releaseall
	return


ScriptForTailSetup_Text_0:
# 7 "data/maps/NewMap1/scripts.pory"
	.string "HEY! I HAVE ITEM THAT MAKE POKEMON GO\n"
	.string "BRRR, BATTLE ME AND GET ITEM OK?$"

ScriptForTailSetup_Text_1:
# 8 "data/maps/NewMap1/scripts.pory"
	.string "battle maniac?$"

ScriptForTailSetup_Text_2:
# 13 "data/maps/NewMap1/scripts.pory"
	.string "OK! YOU MISSED YOUR MOMENT.$"

PostTailbattle_Text_0:
# 42 "data/maps/NewMap1/scripts.pory"
	.string "FINE, TAKE MY ITEM. TEEHEE$"

NewMap1_Eventscript_CutsceneTriggerPlayerFriend_Text_0:
# 66 "data/maps/NewMap1/scripts.pory"
	.string "Hey, what do you mean you dont\n"
	.string "remember??? I'm your best friend!\l"
	.string "Anyways you ready to go have some fun\l"
	.string "or do you still want to explore the ship$"

NewMap1_Eventscript_CutsceneTriggerPlayerFriend_Text_1:
# 67 "data/maps/NewMap1/scripts.pory"
	.string "done exploring?$"

NewMap1_Eventscript_CutsceneTriggerPlayerFriend_Text_2:
# 69 "data/maps/NewMap1/scripts.pory"
	.string "Nice! Now lets-- ... ... ... ?$"

NewMap1_Eventscript_CutsceneTriggerPlayerFriend_Text_3:
# 76 "data/maps/NewMap1/scripts.pory"
	.string "WHATS HAPPENING?--$"

NewMap1_Eventscript_CutsceneTriggerPlayerFriend_Text_4:
# 80 "data/maps/NewMap1/scripts.pory"
	.string "EVERYONE REMAIN CALM, WE HAVE RUN INTO\n"
	.string "AN UNEXPECTED STORM THAT--$"

NewMap1_Eventscript_CutsceneTriggerPlayerFriend_Text_5:
# 86 "data/maps/NewMap1/scripts.pory"
	.string "WE'RE GONNA DIEEE$"

NewMap1_Eventscript_CutsceneTriggerPlayerFriend_Text_6:
# 92 "data/maps/NewMap1/scripts.pory"
	.string "we need to--$"

NewMap1_Eventscript_defaultpanicscientist_Text_0:
# 130 "data/maps/NewMap1/scripts.pory"
	.string "you have good pokemon, you will be much\n"
	.string "help during our research$"

Max_Intro::
# 32 "data/maps/NewMap1/scripts.pory"
	.string "OK! BUT I VERY STRONG!$"

Max_Outro::
# 36 "data/maps/NewMap1/scripts.pory"
	.string "NO WAY! YOU CHEAT!$"
