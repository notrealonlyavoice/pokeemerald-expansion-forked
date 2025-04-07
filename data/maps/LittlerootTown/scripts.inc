# 1 "data//maps/LittlerootTown/scripts.pory"

# 2 "data//maps/LittlerootTown/scripts.pory"
.set LOCALID_TWIN, 1
# 3 "data//maps/LittlerootTown/scripts.pory"
.set LOCALID_MOM, 4
# 4 "data//maps/LittlerootTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 5 "data//maps/LittlerootTown/scripts.pory"
.set LOCALID_BIRCH, 8
# 6 "data//maps/LittlerootTown/scripts.pory"
.set LOCALID_PIKACHU, 11
# 7 "data//maps/LittlerootTown/scripts.pory"

# 8 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 9 "data//maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 10 "data//maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 11 "data//maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 12 "data//maps/LittlerootTown/scripts.pory"
	.byte 0
# 13 "data//maps/LittlerootTown/scripts.pory"

# 14 "data//maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 15 "data//maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 16 "data//maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 17 "data//maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 18 "data//maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 19 "data//maps/LittlerootTown/scripts.pory"

# 20 "data//maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 21 "data//maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 22 "data//maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 23 "data//maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 24 "data//maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 25 "data//maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 26 "data//maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 27 "data//maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 28 "data//maps/LittlerootTown/scripts.pory"

# 29 "data//maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 30 "data//maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 31 "data//maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 32 "data//maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 33 "data//maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 34 "data//maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 35 "data//maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 36 "data//maps/LittlerootTown/scripts.pory"

# 37 "data//maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 38 "data//maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 39 "data//maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 40 "data//maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 41 "data//maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 42 "data//maps/LittlerootTown/scripts.pory"

# 43 "data//maps/LittlerootTown/scripts.pory"

# 44 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 45 "data//maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 46 "data//maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 47 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 48 "data//maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 49 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 50 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 51 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 52 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 53 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 54 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 55 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 56 "data//maps/LittlerootTown/scripts.pory"
	end
# 57 "data//maps/LittlerootTown/scripts.pory"

# 58 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 59 "data//maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 60 "data//maps/LittlerootTown/scripts.pory"
	return
# 61 "data//maps/LittlerootTown/scripts.pory"

# 62 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 63 "data//maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 64 "data//maps/LittlerootTown/scripts.pory"
	return
# 65 "data//maps/LittlerootTown/scripts.pory"

# 66 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 67 "data//maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 68 "data//maps/LittlerootTown/scripts.pory"
	return
# 69 "data//maps/LittlerootTown/scripts.pory"

# 70 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 71 "data//maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 72 "data//maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 73 "data//maps/LittlerootTown/scripts.pory"
	return
# 74 "data//maps/LittlerootTown/scripts.pory"

# 75 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 76 "data//maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 77 "data//maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 78 "data//maps/LittlerootTown/scripts.pory"
	return
# 79 "data//maps/LittlerootTown/scripts.pory"

# 80 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 81 "data//maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 8
# 82 "data//maps/LittlerootTown/scripts.pory"
	return
# 83 "data//maps/LittlerootTown/scripts.pory"

# 84 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 85 "data//maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 86 "data//maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 10, 1
# 87 "data//maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 88 "data//maps/LittlerootTown/scripts.pory"
	return
# 89 "data//maps/LittlerootTown/scripts.pory"

# 90 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 91 "data//maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 7, 2
# 92 "data//maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 93 "data//maps/LittlerootTown/scripts.pory"
	return
# 94 "data//maps/LittlerootTown/scripts.pory"

# 95 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 96 "data//maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 97 "data//maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 98 "data//maps/LittlerootTown/scripts.pory"
	checkplayergender
# 99 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 100 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 101 "data//maps/LittlerootTown/scripts.pory"
	return
# 102 "data//maps/LittlerootTown/scripts.pory"

# 103 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 104 "data//maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 5, 9
# 105 "data//maps/LittlerootTown/scripts.pory"
	return
# 106 "data//maps/LittlerootTown/scripts.pory"

# 107 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 108 "data//maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 9
# 109 "data//maps/LittlerootTown/scripts.pory"
	return
# 110 "data//maps/LittlerootTown/scripts.pory"

# 111 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 112 "data//maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 113 "data//maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 114 "data//maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 115 "data//maps/LittlerootTown/scripts.pory"
	.2byte 0
# 116 "data//maps/LittlerootTown/scripts.pory"

# 117 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 118 "data//maps/LittlerootTown/scripts.pory"
	lockall
# 119 "data//maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 120 "data//maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 121 "data//maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 122 "data//maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 123 "data//maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 124 "data//maps/LittlerootTown/scripts.pory"
	waitstate
# 125 "data//maps/LittlerootTown/scripts.pory"
	releaseall
# 126 "data//maps/LittlerootTown/scripts.pory"
	end
# 127 "data//maps/LittlerootTown/scripts.pory"

# 128 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 129 "data//maps/LittlerootTown/scripts.pory"
	lockall
# 130 "data//maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 131 "data//maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 132 "data//maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 133 "data//maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 134 "data//maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 135 "data//maps/LittlerootTown/scripts.pory"
	waitstate
# 136 "data//maps/LittlerootTown/scripts.pory"
	releaseall
# 137 "data//maps/LittlerootTown/scripts.pory"
	end
# 138 "data//maps/LittlerootTown/scripts.pory"

# 139 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 140 "data//maps/LittlerootTown/scripts.pory"
	delay 15
# 141 "data//maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 142 "data//maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 143 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 144 "data//maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 145 "data//maps/LittlerootTown/scripts.pory"
	waitdooranim
# 146 "data//maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 147 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 148 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 149 "data//maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 150 "data//maps/LittlerootTown/scripts.pory"
	waitdooranim
# 151 "data//maps/LittlerootTown/scripts.pory"
	delay 10
# 152 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 153 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 154 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 155 "data//maps/LittlerootTown/scripts.pory"
	closemessage
# 156 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
# 157 "data//maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 158 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 159 "data//maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 160 "data//maps/LittlerootTown/scripts.pory"
	waitdooranim
# 161 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouse
# 162 "data//maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 163 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 164 "data//maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 165 "data//maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 166 "data//maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
# 167 "data//maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 168 "data//maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 169 "data//maps/LittlerootTown/scripts.pory"
	waitdooranim
# 170 "data//maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 171 "data//maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 172 "data//maps/LittlerootTown/scripts.pory"
	return
# 173 "data//maps/LittlerootTown/scripts.pory"

# 174 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 175 "data//maps/LittlerootTown/scripts.pory"
	walk_down
# 176 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 177 "data//maps/LittlerootTown/scripts.pory"

# 178 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 179 "data//maps/LittlerootTown/scripts.pory"
	walk_down
# 180 "data//maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 181 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 182 "data//maps/LittlerootTown/scripts.pory"

# 183 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 184 "data//maps/LittlerootTown/scripts.pory"
	delay_16
# 185 "data//maps/LittlerootTown/scripts.pory"
	delay_8
# 186 "data//maps/LittlerootTown/scripts.pory"
	walk_up
# 187 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 188 "data//maps/LittlerootTown/scripts.pory"

# 189 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 190 "data//maps/LittlerootTown/scripts.pory"
	walk_up
# 191 "data//maps/LittlerootTown/scripts.pory"
	set_invisible
# 192 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 193 "data//maps/LittlerootTown/scripts.pory"

# 194 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 195 "data//maps/LittlerootTown/scripts.pory"
	delay_16
# 196 "data//maps/LittlerootTown/scripts.pory"
	delay_8
# 197 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 198 "data//maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 199 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 200 "data//maps/LittlerootTown/scripts.pory"

# 201 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 202 "data//maps/LittlerootTown/scripts.pory"
	walk_up
# 203 "data//maps/LittlerootTown/scripts.pory"
	walk_up
# 204 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 205 "data//maps/LittlerootTown/scripts.pory"

# 206 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 207 "data//maps/LittlerootTown/scripts.pory"
	jump_right
# 208 "data//maps/LittlerootTown/scripts.pory"
	delay_16
# 209 "data//maps/LittlerootTown/scripts.pory"
	delay_16
# 210 "data//maps/LittlerootTown/scripts.pory"
	delay_16
# 211 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 212 "data//maps/LittlerootTown/scripts.pory"

# 213 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 214 "data//maps/LittlerootTown/scripts.pory"
	lockall
# 215 "data//maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 216 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 217 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 218 "data//maps/LittlerootTown/scripts.pory"
	delay 80
# 219 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 220 "data//maps/LittlerootTown/scripts.pory"
	closemessage
# 221 "data//maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 222 "data//maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 223 "data//maps/LittlerootTown/scripts.pory"
	delay 20
# 224 "data//maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 225 "data//maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 226 "data//maps/LittlerootTown/scripts.pory"
	waitstate
# 227 "data//maps/LittlerootTown/scripts.pory"
	releaseall
# 228 "data//maps/LittlerootTown/scripts.pory"
	end
# 229 "data//maps/LittlerootTown/scripts.pory"

# 230 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 231 "data//maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 232 "data//maps/LittlerootTown/scripts.pory"
	.2byte 0
# 233 "data//maps/LittlerootTown/scripts.pory"

# 234 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 235 "data//maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 236 "data//maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 237 "data//maps/LittlerootTown/scripts.pory"
	checkplayergender
# 238 "data//maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 239 "data//maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 240 "data//maps/LittlerootTown/scripts.pory"
	end
# 241 "data//maps/LittlerootTown/scripts.pory"

# 242 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 243 "data//maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 244 "data//maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 245 "data//maps/LittlerootTown/scripts.pory"
	end
# 246 "data//maps/LittlerootTown/scripts.pory"

# 247 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 248 "data//maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 249 "data//maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 250 "data//maps/LittlerootTown/scripts.pory"
	end
# 251 "data//maps/LittlerootTown/scripts.pory"

# 252 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 253 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 254 "data//maps/LittlerootTown/scripts.pory"
	end
# 255 "data//maps/LittlerootTown/scripts.pory"

# 256 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 257 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 258 "data//maps/LittlerootTown/scripts.pory"
	end
# 259 "data//maps/LittlerootTown/scripts.pory"

# 260 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 261 "data//maps/LittlerootTown/scripts.pory"
	lock
# 262 "data//maps/LittlerootTown/scripts.pory"
	faceplayer
# 263 "data//maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 264 "data//maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 265 "data//maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 266 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 267 "data//maps/LittlerootTown/scripts.pory"
	release
# 268 "data//maps/LittlerootTown/scripts.pory"
	end
# 269 "data//maps/LittlerootTown/scripts.pory"

# 270 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 271 "data//maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 272 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 273 "data//maps/LittlerootTown/scripts.pory"
	closemessage
# 274 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 275 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 276 "data//maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 277 "data//maps/LittlerootTown/scripts.pory"
	release
# 278 "data//maps/LittlerootTown/scripts.pory"
	end
# 279 "data//maps/LittlerootTown/scripts.pory"

# 280 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 281 "data//maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 282 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 283 "data//maps/LittlerootTown/scripts.pory"
	release
# 284 "data//maps/LittlerootTown/scripts.pory"
	end
# 285 "data//maps/LittlerootTown/scripts.pory"

# 286 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 287 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 288 "data//maps/LittlerootTown/scripts.pory"
	release
# 289 "data//maps/LittlerootTown/scripts.pory"
	end
# 290 "data//maps/LittlerootTown/scripts.pory"

# 291 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 292 "data//maps/LittlerootTown/scripts.pory"
	lockall
# 293 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 294 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 295 "data//maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 296 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 297 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 298 "data//maps/LittlerootTown/scripts.pory"
	releaseall
# 299 "data//maps/LittlerootTown/scripts.pory"
	end
# 300 "data//maps/LittlerootTown/scripts.pory"

# 301 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 302 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 303 "data//maps/LittlerootTown/scripts.pory"
	closemessage
# 304 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 305 "data//maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 306 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 307 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 308 "data//maps/LittlerootTown/scripts.pory"
	closemessage
# 309 "data//maps/LittlerootTown/scripts.pory"
	return
# 310 "data//maps/LittlerootTown/scripts.pory"

# 311 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 312 "data//maps/LittlerootTown/scripts.pory"
	face_right
# 313 "data//maps/LittlerootTown/scripts.pory"
	delay_8
# 314 "data//maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 315 "data//maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 316 "data//maps/LittlerootTown/scripts.pory"
	delay_8
# 317 "data//maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 318 "data//maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 319 "data//maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 320 "data//maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 321 "data//maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 322 "data//maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 323 "data//maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 324 "data//maps/LittlerootTown/scripts.pory"
	face_down
# 325 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 326 "data//maps/LittlerootTown/scripts.pory"

# 327 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 328 "data//maps/LittlerootTown/scripts.pory"
	walk_down
# 329 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 330 "data//maps/LittlerootTown/scripts.pory"

# 331 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 332 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 333 "data//maps/LittlerootTown/scripts.pory"
	walk_down
# 334 "data//maps/LittlerootTown/scripts.pory"
	walk_down
# 335 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 336 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 337 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 338 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 339 "data//maps/LittlerootTown/scripts.pory"
	walk_up
# 340 "data//maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 341 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 342 "data//maps/LittlerootTown/scripts.pory"

# 343 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 344 "data//maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 345 "data//maps/LittlerootTown/scripts.pory"
	walk_down
# 346 "data//maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 347 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 348 "data//maps/LittlerootTown/scripts.pory"

# 349 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 350 "data//maps/LittlerootTown/scripts.pory"
	lockall
# 351 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 352 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 353 "data//maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 354 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 355 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 356 "data//maps/LittlerootTown/scripts.pory"
	releaseall
# 357 "data//maps/LittlerootTown/scripts.pory"
	end
# 358 "data//maps/LittlerootTown/scripts.pory"

# 359 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 360 "data//maps/LittlerootTown/scripts.pory"
	face_right
# 361 "data//maps/LittlerootTown/scripts.pory"
	delay_8
# 362 "data//maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 363 "data//maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 364 "data//maps/LittlerootTown/scripts.pory"
	delay_8
# 365 "data//maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 366 "data//maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 367 "data//maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 368 "data//maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 369 "data//maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 370 "data//maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 371 "data//maps/LittlerootTown/scripts.pory"
	face_down
# 372 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 373 "data//maps/LittlerootTown/scripts.pory"

# 374 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 375 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 376 "data//maps/LittlerootTown/scripts.pory"
	walk_down
# 377 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 378 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 379 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 380 "data//maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 381 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 382 "data//maps/LittlerootTown/scripts.pory"

# 383 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 384 "data//maps/LittlerootTown/scripts.pory"
	lockall
# 385 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 386 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 387 "data//maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 388 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 389 "data//maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 390 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 391 "data//maps/LittlerootTown/scripts.pory"
	closemessage
# 392 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 393 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 394 "data//maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 395 "data//maps/LittlerootTown/scripts.pory"
	releaseall
# 396 "data//maps/LittlerootTown/scripts.pory"
	end
# 397 "data//maps/LittlerootTown/scripts.pory"

# 398 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 399 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 400 "data//maps/LittlerootTown/scripts.pory"
	end
# 401 "data//maps/LittlerootTown/scripts.pory"

# 402 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 403 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 404 "data//maps/LittlerootTown/scripts.pory"
	end
# 405 "data//maps/LittlerootTown/scripts.pory"

# 406 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 407 "data//maps/LittlerootTown/scripts.pory"
	lockall
# 408 "data//maps/LittlerootTown/scripts.pory"
	checkplayergender
# 409 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 410 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 411 "data//maps/LittlerootTown/scripts.pory"
	releaseall
# 412 "data//maps/LittlerootTown/scripts.pory"
	end
# 413 "data//maps/LittlerootTown/scripts.pory"

# 414 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 415 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 416 "data//maps/LittlerootTown/scripts.pory"
	return
# 417 "data//maps/LittlerootTown/scripts.pory"

# 418 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 419 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 420 "data//maps/LittlerootTown/scripts.pory"
	return
# 421 "data//maps/LittlerootTown/scripts.pory"

# 422 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 423 "data//maps/LittlerootTown/scripts.pory"
	lockall
# 424 "data//maps/LittlerootTown/scripts.pory"
	checkplayergender
# 425 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 426 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 427 "data//maps/LittlerootTown/scripts.pory"
	releaseall
# 428 "data//maps/LittlerootTown/scripts.pory"
	end
# 429 "data//maps/LittlerootTown/scripts.pory"

# 430 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 431 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 432 "data//maps/LittlerootTown/scripts.pory"
	return
# 433 "data//maps/LittlerootTown/scripts.pory"

# 434 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 435 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 436 "data//maps/LittlerootTown/scripts.pory"
	return
# 437 "data//maps/LittlerootTown/scripts.pory"

# 438 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 439 "data//maps/LittlerootTown/scripts.pory"
	lockall
# 440 "data//maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 441 "data//maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 10, 9
# 442 "data//maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 443 "data//maps/LittlerootTown/scripts.pory"
	end
# 444 "data//maps/LittlerootTown/scripts.pory"

# 445 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 446 "data//maps/LittlerootTown/scripts.pory"
	lockall
# 447 "data//maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 448 "data//maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 11, 9
# 449 "data//maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 450 "data//maps/LittlerootTown/scripts.pory"
	end
# 451 "data//maps/LittlerootTown/scripts.pory"

# 452 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 453 "data//maps/LittlerootTown/scripts.pory"
	lockall
# 454 "data//maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 455 "data//maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 456 "data//maps/LittlerootTown/scripts.pory"
	end
# 457 "data//maps/LittlerootTown/scripts.pory"

# 458 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 459 "data//maps/LittlerootTown/scripts.pory"
	lockall
# 460 "data//maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 461 "data//maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 462 "data//maps/LittlerootTown/scripts.pory"
	end
# 463 "data//maps/LittlerootTown/scripts.pory"

# 464 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 465 "data//maps/LittlerootTown/scripts.pory"
	lockall
# 466 "data//maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 467 "data//maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 468 "data//maps/LittlerootTown/scripts.pory"
	end
# 469 "data//maps/LittlerootTown/scripts.pory"

# 470 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 471 "data//maps/LittlerootTown/scripts.pory"
	lockall
# 472 "data//maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 473 "data//maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 474 "data//maps/LittlerootTown/scripts.pory"
	end
# 475 "data//maps/LittlerootTown/scripts.pory"

# 476 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 477 "data//maps/LittlerootTown/scripts.pory"
	checkplayergender
# 478 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 479 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 480 "data//maps/LittlerootTown/scripts.pory"
	checkplayergender
# 481 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 482 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 483 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 484 "data//maps/LittlerootTown/scripts.pory"
	closemessage
# 485 "data//maps/LittlerootTown/scripts.pory"
	checkplayergender
# 486 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 487 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 488 "data//maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 489 "data//maps/LittlerootTown/scripts.pory"
	checkplayergender
# 490 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 491 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 492 "data//maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 493 "data//maps/LittlerootTown/scripts.pory"
	end
# 494 "data//maps/LittlerootTown/scripts.pory"

# 495 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 496 "data//maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 497 "data//maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 498 "data//maps/LittlerootTown/scripts.pory"
	return
# 499 "data//maps/LittlerootTown/scripts.pory"

# 500 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 501 "data//maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 502 "data//maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 503 "data//maps/LittlerootTown/scripts.pory"
	return
# 504 "data//maps/LittlerootTown/scripts.pory"

# 505 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 506 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 507 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 508 "data//maps/LittlerootTown/scripts.pory"
	return
# 509 "data//maps/LittlerootTown/scripts.pory"

# 510 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 511 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 512 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 513 "data//maps/LittlerootTown/scripts.pory"
	return
# 514 "data//maps/LittlerootTown/scripts.pory"

# 515 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 516 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 517 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 518 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 519 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 520 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 521 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 522 "data//maps/LittlerootTown/scripts.pory"
	return
# 523 "data//maps/LittlerootTown/scripts.pory"

# 524 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 525 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 526 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 527 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 528 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 529 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 530 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 531 "data//maps/LittlerootTown/scripts.pory"
	return
# 532 "data//maps/LittlerootTown/scripts.pory"

# 533 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 534 "data//maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 535 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 536 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 537 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 538 "data//maps/LittlerootTown/scripts.pory"
	return
# 539 "data//maps/LittlerootTown/scripts.pory"

# 540 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 541 "data//maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 542 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 543 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 544 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 545 "data//maps/LittlerootTown/scripts.pory"
	return
# 546 "data//maps/LittlerootTown/scripts.pory"

# 547 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 548 "data//maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 549 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 550 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 551 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 552 "data//maps/LittlerootTown/scripts.pory"
	return
# 553 "data//maps/LittlerootTown/scripts.pory"

# 554 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 555 "data//maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 556 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 557 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 558 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 559 "data//maps/LittlerootTown/scripts.pory"
	return
# 560 "data//maps/LittlerootTown/scripts.pory"

# 561 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 562 "data//maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 563 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 564 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 565 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 566 "data//maps/LittlerootTown/scripts.pory"
	return
# 567 "data//maps/LittlerootTown/scripts.pory"

# 568 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 569 "data//maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 570 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 571 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 572 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 573 "data//maps/LittlerootTown/scripts.pory"
	return
# 574 "data//maps/LittlerootTown/scripts.pory"

# 575 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 576 "data//maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 577 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 578 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 579 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 580 "data//maps/LittlerootTown/scripts.pory"
	return
# 581 "data//maps/LittlerootTown/scripts.pory"

# 582 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 583 "data//maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 584 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 585 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 586 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 587 "data//maps/LittlerootTown/scripts.pory"
	return
# 588 "data//maps/LittlerootTown/scripts.pory"

# 589 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 590 "data//maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 591 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 592 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 593 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 594 "data//maps/LittlerootTown/scripts.pory"
	return
# 595 "data//maps/LittlerootTown/scripts.pory"

# 596 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 597 "data//maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 598 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 599 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 600 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 601 "data//maps/LittlerootTown/scripts.pory"
	return
# 602 "data//maps/LittlerootTown/scripts.pory"

# 603 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 604 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 605 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 606 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 607 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 608 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 609 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 610 "data//maps/LittlerootTown/scripts.pory"
	return
# 611 "data//maps/LittlerootTown/scripts.pory"

# 612 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 613 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 614 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 615 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 616 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 617 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 618 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 619 "data//maps/LittlerootTown/scripts.pory"
	return
# 620 "data//maps/LittlerootTown/scripts.pory"

# 621 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 622 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 623 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 624 "data//maps/LittlerootTown/scripts.pory"
	return
# 625 "data//maps/LittlerootTown/scripts.pory"

# 626 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 627 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 628 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 629 "data//maps/LittlerootTown/scripts.pory"
	return
# 630 "data//maps/LittlerootTown/scripts.pory"

# 631 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 632 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 633 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 634 "data//maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 635 "data//maps/LittlerootTown/scripts.pory"
	waitdooranim
# 636 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 637 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 638 "data//maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 639 "data//maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 640 "data//maps/LittlerootTown/scripts.pory"
	waitdooranim
# 641 "data//maps/LittlerootTown/scripts.pory"
	return
# 642 "data//maps/LittlerootTown/scripts.pory"

# 643 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 644 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 645 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 646 "data//maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 647 "data//maps/LittlerootTown/scripts.pory"
	waitdooranim
# 648 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 649 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 650 "data//maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 651 "data//maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 652 "data//maps/LittlerootTown/scripts.pory"
	waitdooranim
# 653 "data//maps/LittlerootTown/scripts.pory"
	return
# 654 "data//maps/LittlerootTown/scripts.pory"

# 655 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 656 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 657 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 658 "data//maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 659 "data//maps/LittlerootTown/scripts.pory"
	waitdooranim
# 660 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 661 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 662 "data//maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 663 "data//maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 664 "data//maps/LittlerootTown/scripts.pory"
	waitdooranim
# 665 "data//maps/LittlerootTown/scripts.pory"
	return
# 666 "data//maps/LittlerootTown/scripts.pory"

# 667 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 668 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 669 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 670 "data//maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 671 "data//maps/LittlerootTown/scripts.pory"
	waitdooranim
# 672 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 673 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 674 "data//maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 675 "data//maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 676 "data//maps/LittlerootTown/scripts.pory"
	waitdooranim
# 677 "data//maps/LittlerootTown/scripts.pory"
	return
# 678 "data//maps/LittlerootTown/scripts.pory"

# 679 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 680 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 681 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 682 "data//maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 683 "data//maps/LittlerootTown/scripts.pory"
	waitdooranim
# 684 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 685 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 686 "data//maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 687 "data//maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 688 "data//maps/LittlerootTown/scripts.pory"
	waitdooranim
# 689 "data//maps/LittlerootTown/scripts.pory"
	return
# 690 "data//maps/LittlerootTown/scripts.pory"

# 691 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 692 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 693 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 694 "data//maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 695 "data//maps/LittlerootTown/scripts.pory"
	waitdooranim
# 696 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 697 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 698 "data//maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 699 "data//maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 700 "data//maps/LittlerootTown/scripts.pory"
	waitdooranim
# 701 "data//maps/LittlerootTown/scripts.pory"
	return
# 702 "data//maps/LittlerootTown/scripts.pory"

# 703 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 704 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 705 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 706 "data//maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 707 "data//maps/LittlerootTown/scripts.pory"
	waitdooranim
# 708 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 709 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 710 "data//maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 711 "data//maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 712 "data//maps/LittlerootTown/scripts.pory"
	waitdooranim
# 713 "data//maps/LittlerootTown/scripts.pory"
	return
# 714 "data//maps/LittlerootTown/scripts.pory"

# 715 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 716 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 717 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 718 "data//maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 719 "data//maps/LittlerootTown/scripts.pory"
	waitdooranim
# 720 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 721 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 722 "data//maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 723 "data//maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 724 "data//maps/LittlerootTown/scripts.pory"
	waitdooranim
# 725 "data//maps/LittlerootTown/scripts.pory"
	return
# 726 "data//maps/LittlerootTown/scripts.pory"

# 727 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 728 "data//maps/LittlerootTown/scripts.pory"
	walk_up
# 729 "data//maps/LittlerootTown/scripts.pory"
	walk_up
# 730 "data//maps/LittlerootTown/scripts.pory"
	walk_up
# 731 "data//maps/LittlerootTown/scripts.pory"
	walk_up
# 732 "data//maps/LittlerootTown/scripts.pory"
	walk_up
# 733 "data//maps/LittlerootTown/scripts.pory"
	walk_up
# 734 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 735 "data//maps/LittlerootTown/scripts.pory"

# 736 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 737 "data//maps/LittlerootTown/scripts.pory"
	walk_up
# 738 "data//maps/LittlerootTown/scripts.pory"
	walk_up
# 739 "data//maps/LittlerootTown/scripts.pory"
	walk_up
# 740 "data//maps/LittlerootTown/scripts.pory"
	walk_up
# 741 "data//maps/LittlerootTown/scripts.pory"
	walk_up
# 742 "data//maps/LittlerootTown/scripts.pory"
	walk_up
# 743 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 744 "data//maps/LittlerootTown/scripts.pory"

# 745 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 746 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 747 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 748 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 749 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 750 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 751 "data//maps/LittlerootTown/scripts.pory"

# 752 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 753 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 754 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 755 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 756 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 757 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 758 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 759 "data//maps/LittlerootTown/scripts.pory"

# 760 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 761 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 762 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 763 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 764 "data//maps/LittlerootTown/scripts.pory"

# 765 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 766 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 767 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 768 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 769 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 770 "data//maps/LittlerootTown/scripts.pory"

# 771 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 772 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 773 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 774 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 775 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 776 "data//maps/LittlerootTown/scripts.pory"

# 777 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 778 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 779 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 780 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 781 "data//maps/LittlerootTown/scripts.pory"

# 782 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 783 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 784 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 785 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 786 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 787 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 788 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 789 "data//maps/LittlerootTown/scripts.pory"

# 790 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 791 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 792 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 793 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 794 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 795 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 796 "data//maps/LittlerootTown/scripts.pory"

# 797 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 798 "data//maps/LittlerootTown/scripts.pory"
	walk_down
# 799 "data//maps/LittlerootTown/scripts.pory"
	walk_down
# 800 "data//maps/LittlerootTown/scripts.pory"
	walk_down
# 801 "data//maps/LittlerootTown/scripts.pory"
	walk_down
# 802 "data//maps/LittlerootTown/scripts.pory"
	walk_down
# 803 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 804 "data//maps/LittlerootTown/scripts.pory"

# 805 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 806 "data//maps/LittlerootTown/scripts.pory"
	walk_down
# 807 "data//maps/LittlerootTown/scripts.pory"
	walk_down
# 808 "data//maps/LittlerootTown/scripts.pory"
	walk_down
# 809 "data//maps/LittlerootTown/scripts.pory"
	walk_down
# 810 "data//maps/LittlerootTown/scripts.pory"
	walk_down
# 811 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 812 "data//maps/LittlerootTown/scripts.pory"

# 813 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 814 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 815 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 816 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 817 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 818 "data//maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 819 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 820 "data//maps/LittlerootTown/scripts.pory"

# 821 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 822 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 823 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 824 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 825 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 826 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 827 "data//maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 828 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 829 "data//maps/LittlerootTown/scripts.pory"

# 830 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 831 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 832 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 833 "data//maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 834 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 835 "data//maps/LittlerootTown/scripts.pory"

# 836 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 837 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 838 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 839 "data//maps/LittlerootTown/scripts.pory"
	walk_left
# 840 "data//maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 841 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 842 "data//maps/LittlerootTown/scripts.pory"

# 843 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 844 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 845 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 846 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 847 "data//maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 848 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 849 "data//maps/LittlerootTown/scripts.pory"

# 850 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 851 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 852 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 853 "data//maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 854 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 855 "data//maps/LittlerootTown/scripts.pory"

# 856 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_Pikachutriggered:
# 857 "data//maps/LittlerootTown/scripts.pory"
	walk_down
# 858 "data//maps/LittlerootTown/scripts.pory"
	walk_down
# 859 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 860 "data//maps/LittlerootTown/scripts.pory"

# 861 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 862 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 863 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 864 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 865 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 866 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 867 "data//maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 868 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 869 "data//maps/LittlerootTown/scripts.pory"

# 870 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 871 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 872 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 873 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 874 "data//maps/LittlerootTown/scripts.pory"
	walk_right
# 875 "data//maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 876 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 877 "data//maps/LittlerootTown/scripts.pory"

# 878 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 879 "data//maps/LittlerootTown/scripts.pory"
	walk_up
# 880 "data//maps/LittlerootTown/scripts.pory"
	step_end
# 881 "data//maps/LittlerootTown/scripts.pory"

# 882 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 883 "data//maps/LittlerootTown/scripts.pory"
	lock
# 884 "data//maps/LittlerootTown/scripts.pory"
	faceplayer
# 885 "data//maps/LittlerootTown/scripts.pory"
	checkplayergender
# 886 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 887 "data//maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 888 "data//maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 889 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 890 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 891 "data//maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 892 "data//maps/LittlerootTown/scripts.pory"
	waitdooranim
# 893 "data//maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 894 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 895 "data//maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 896 "data//maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 897 "data//maps/LittlerootTown/scripts.pory"
	waitdooranim
# 898 "data//maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 899 "data//maps/LittlerootTown/scripts.pory"
	end
# 900 "data//maps/LittlerootTown/scripts.pory"

# 901 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 902 "data//maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 903 "data//maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 904 "data//maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 905 "data//maps/LittlerootTown/scripts.pory"
	release
# 906 "data//maps/LittlerootTown/scripts.pory"
	end
# 907 "data//maps/LittlerootTown/scripts.pory"

# 908 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 909 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 910 "data//maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 911 "data//maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 912 "data//maps/LittlerootTown/scripts.pory"
	waitfanfare
# 913 "data//maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 914 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 915 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 916 "data//maps/LittlerootTown/scripts.pory"
	closemessage
# 917 "data//maps/LittlerootTown/scripts.pory"
	delay 30
# 918 "data//maps/LittlerootTown/scripts.pory"
	return
# 919 "data//maps/LittlerootTown/scripts.pory"

# 920 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 921 "data//maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 922 "data//maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 923 "data//maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 924 "data//maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN.\p"
# 925 "data//maps/LittlerootTown/scripts.pory"
	.string "How do you like it?\n"
# 926 "data//maps/LittlerootTown/scripts.pory"
	.string "This is our new home!\p"
# 927 "data//maps/LittlerootTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 928 "data//maps/LittlerootTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 929 "data//maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 930 "data//maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 931 "data//maps/LittlerootTown/scripts.pory"

# 932 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 933 "data//maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 934 "data//maps/LittlerootTown/scripts.pory"

# 935 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 936 "data//maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 937 "data//maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to PROF. BIRCH?\p"
# 938 "data//maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable POKéMON!\n"
# 939 "data//maps/LittlerootTown/scripts.pory"
	.string "You got it from PROF. BIRCH. How nice!\p"
# 940 "data//maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 941 "data//maps/LittlerootTown/scripts.pory"
	.string "You look good together with POKéMON!\p"
# 942 "data//maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 943 "data//maps/LittlerootTown/scripts.pory"
	.string "adventure, wear these RUNNING SHOES.\p"
# 944 "data//maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 945 "data//maps/LittlerootTown/scripts.pory"

# 946 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 947 "data//maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 948 "data//maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES.$"
# 949 "data//maps/LittlerootTown/scripts.pory"

# 950 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 951 "data//maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 952 "data//maps/LittlerootTown/scripts.pory"
	.string "instructions.\p"
# 953 "data//maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 954 "data//maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!\p"
# 955 "data//maps/LittlerootTown/scripts.pory"
	.string "“Slip on these RUNNING SHOES and race\n"
# 956 "data//maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”$"
# 957 "data//maps/LittlerootTown/scripts.pory"

# 958 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 959 "data//maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 960 "data//maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 961 "data//maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 962 "data//maps/LittlerootTown/scripts.pory"
	.string "POKéMON now…\l"
# 963 "data//maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 964 "data//maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 965 "data//maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 966 "data//maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 967 "data//maps/LittlerootTown/scripts.pory"

# 968 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 969 "data//maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 970 "data//maps/LittlerootTown/scripts.pory"
	.string "and POKéMON.\p"
# 971 "data//maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 972 "data//maps/LittlerootTown/scripts.pory"

# 973 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 974 "data//maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
# 975 "data//maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 976 "data//maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 977 "data//maps/LittlerootTown/scripts.pory"
	.string "When does PROF. BIRCH spend time\n"
# 978 "data//maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 979 "data//maps/LittlerootTown/scripts.pory"

# 980 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 981 "data//maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 982 "data//maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 983 "data//maps/LittlerootTown/scripts.pory"
	.string "wild POKéMON will jump out!$"
# 984 "data//maps/LittlerootTown/scripts.pory"

# 985 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 986 "data//maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 987 "data//maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 988 "data//maps/LittlerootTown/scripts.pory"

# 989 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 990 "data//maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 991 "data//maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 992 "data//maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 993 "data//maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 994 "data//maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 995 "data//maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 996 "data//maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 997 "data//maps/LittlerootTown/scripts.pory"

# 998 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 999 "data//maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
# 1000 "data//maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 1001 "data//maps/LittlerootTown/scripts.pory"

# 1002 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 1003 "data//maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 1004 "data//maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 1005 "data//maps/LittlerootTown/scripts.pory"

# 1006 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1007 "data//maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 1008 "data//maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1009 "data//maps/LittlerootTown/scripts.pory"

# 1010 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1011 "data//maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"
# 1012 "data//maps/LittlerootTown/scripts.pory"

# 1013 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1014 "data//maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 1015 "data//maps/LittlerootTown/scripts.pory"

# 1016 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1017 "data//maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"
# 1018 "data//maps/LittlerootTown/scripts.pory"

# 1019 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1020 "data//maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
# 1021 "data//maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1022 "data//maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1023 "data//maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1024 "data//maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1025 "data//maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1026 "data//maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1027 "data//maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1028 "data//maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"
# 1029 "data//maps/LittlerootTown/scripts.pory"

# 1030 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_Wildmonjoinedyou:
# 1031 "data//maps/LittlerootTown/scripts.pory"
	.string "The wild pikachu joined the Battle!$"
# 1032 "data//maps/LittlerootTown/scripts.pory"

# 1033 "data//maps/LittlerootTown/scripts.pory"

# 1034 "data//maps/LittlerootTown/scripts.pory"

# 1035 "data//maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Trytestbattle::
# 1036 "data//maps/LittlerootTown/scripts.pory"
    applymovement LOCALID_PIKACHU, LittlerootTown_Movement_Pikachutriggered
# 1037 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1038 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_Wildmonjoinedyou, MSGBOX_DEFAULT
# 1039 "data//maps/LittlerootTown/scripts.pory"
    multi_fixed_2_vs_2 TRAINER_MAXIE_MOSSDEEP, MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand, TRAINER_TABITHA_MOSSDEEP, MossdeepCity_SpaceCenter_Text_TabithaDefeat, PARTNER_THE_CAVE
# 1040 "data//maps/LittlerootTown/scripts.pory"
	switch VAR_RESULT
# 1041 "data//maps/LittlerootTown/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha
# 1042 "data//maps/LittlerootTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1043 "data//maps/LittlerootTown/scripts.pory"
	special SetCB2WhiteOut
# 1044 "data//maps/LittlerootTown/scripts.pory"
	waitstate

LittlerootTown_EventScript_Porytest::
# 1049 "data//maps/LittlerootTown/scripts.pory"
	lockall
# 1050 "data//maps/LittlerootTown/scripts.pory"
	faceplayer
# 1051 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Porytest_Text_0
# 1052 "data//maps/LittlerootTown/scripts.pory"
	givemon SPECIES_CHIKORITA, 13, ITEM_POWER_CHARM
# 1053 "data//maps/LittlerootTown/scripts.pory"
	giveitem ITEM_POCKET_SAND
# 1054 "data//maps/LittlerootTown/scripts.pory"
	giveitem ITEM_CRACKED_LENS
# 1055 "data//maps/LittlerootTown/scripts.pory"
	giveitem ITEM_ASSAULT_COAT
# 1056 "data//maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1057 "data//maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1058 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Porytest_Text_1
# 1059 "data//maps/LittlerootTown/scripts.pory"
	setvar VAR_UNUSED_0x40F7, 2
# 1060 "data//maps/LittlerootTown/scripts.pory"
	setvar VAR_UNUSED_0x40F8, 3
# 1061 "data//maps/LittlerootTown/scripts.pory"
	closemessage
# 1062 "data//maps/LittlerootTown/scripts.pory"
	releaseall
	return


LittlerootTown_EventScript_PIKA::
# 1068 "data//maps/LittlerootTown/scripts.pory"
	lockall
# 1069 "data//maps/LittlerootTown/scripts.pory"
	faceplayer
# 1070 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_PIKA_Text_0
# 1071 "data//maps/LittlerootTown/scripts.pory"
	closemessage
# 1072 "data//maps/LittlerootTown/scripts.pory"
	releaseall
	return


LittlerootTown_EventScript_TriggerNeedmons::
# 1076 "data//maps/LittlerootTown/scripts.pory"
	compare VAR_UNUSED_0x40FF, 1
	goto_if_eq LittlerootTown_EventScript_TriggerNeedmons_1
	return

LittlerootTown_EventScript_TriggerNeedmons_1:
# 1077 "data//maps/LittlerootTown/scripts.pory"
	lockall
# 1078 "data//maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TriggerNeedmons_Text_0
# 1079 "data//maps/LittlerootTown/scripts.pory"
	waitmessage
# 1080 "data//maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, collectmonstostartrun
# 1081 "data//maps/LittlerootTown/scripts.pory"
	waitmovement 10
# 1082 "data//maps/LittlerootTown/scripts.pory"
	closemessage
# 1083 "data//maps/LittlerootTown/scripts.pory"
	releaseall
	return


# 1088 "data//maps/LittlerootTown/scripts.pory"
collectmonstostartrun:
# 1089 "data//maps/LittlerootTown/scripts.pory"
	walk_down
# 1089 "data//maps/LittlerootTown/scripts.pory"
	walk_down
	step_end

LittlerootTown_EventScript_Porytest_Text_0:
# 1051 "data//maps/LittlerootTown/scripts.pory"
	.string "hi$"

LittlerootTown_EventScript_Porytest_Text_1:
# 1058 "data//maps/LittlerootTown/scripts.pory"
	.string "Recieved Chikorita$"

LittlerootTown_EventScript_PIKA_Text_0:
# 1070 "data//maps/LittlerootTown/scripts.pory"
	.string "The Pikachu seems unintrested$"

LittlerootTown_EventScript_TriggerNeedmons_Text_0:
# 1078 "data//maps/LittlerootTown/scripts.pory"
	.string "Visit lab to start run$"
