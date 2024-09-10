# 1 "data/maps/trickhouseFINALE/scripts.pory"

# 2 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_MapScripts::
# 3 "data/maps/trickhouseFINALE/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, trickhouseFINALE_OnResume
# 4 "data/maps/trickhouseFINALE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, trickhouseFINALE_OnTransition
# 5 "data/maps/trickhouseFINALE/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, trickhouseFINALE_OnLoad
# 6 "data/maps/trickhouseFINALE/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, trickhouseFINALE_OnFrame
# 7 "data/maps/trickhouseFINALE/scripts.pory"
	.byte 0
# 8 "data/maps/trickhouseFINALE/scripts.pory"

# 9 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_OnResume:
# 10 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, trickhouseFINALE_EventScript_PressButton1
# 11 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_eq VAR_TEMP_2, 1, trickhouseFINALE_EventScript_PressButton2
# 12 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_eq VAR_TEMP_3, 1, trickhouseFINALE_EventScript_PressButton3
# 13 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_eq VAR_TEMP_4, 1, trickhouseFINALE_EventScript_PressButton4
# 14 "data/maps/trickhouseFINALE/scripts.pory"
	call trickhouseFINALE_EventScript_UpdateSwitchMetatiles
# 15 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 16 "data/maps/trickhouseFINALE/scripts.pory"

# 17 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_OnTransition:
# 18 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_TEMP_1, 0
# 19 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_TEMP_2, 0
# 20 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_TEMP_3, 0
# 21 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_TEMP_4, 0
# 22 "data/maps/trickhouseFINALE/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 1, trickhouseFINALE_EventScript_TeleportedTransition
# 23 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 24 "data/maps/trickhouseFINALE/scripts.pory"

# 25 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_OnLoad:
# 26 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 1, trickhouseFINALE_EventScript_UpdateSwitchMetatiles
# 27 "data/maps/trickhouseFINALE/scripts.pory"
    goto_if_set FLAG_realitempicked, trickhouseFINALE_EventScript_respawntile
# 28 "data/maps/trickhouseFINALE/scripts.pory"
    goto_if_eq VAR_UNUSED_0x40FD, 1, trickhouseFINALE_EventScript_respawnswitch2
# 29 "data/maps/trickhouseFINALE/scripts.pory"
    goto_if_eq VAR_UNUSED_0x40DC, 1, trickhouseFINALE_EventScript_respawnswitch3
# 30 "data/maps/trickhouseFINALE/scripts.pory"
    goto_if_eq VAR_UNUSED_0x40FC, 1, trickhouseFINALE_EventScript_respawnswitch4
# 31 "data/maps/trickhouseFINALE/scripts.pory"
    goto_if_eq VAR_UNUSED_0x40DB, 1, trickhouseFINALE_EventScript_respawnswitch5
# 32 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 33 "data/maps/trickhouseFINALE/scripts.pory"
 
# 34 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_OnFrame:
# 35 "data/maps/trickhouseFINALE/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 1, trickhouseFINALE_EventScript_ClearState2
# 36 "data/maps/trickhouseFINALE/scripts.pory"
	.2byte 0
# 37 "data/maps/trickhouseFINALE/scripts.pory"

# 38 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_Scroll::
# 39 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 40 "data/maps/trickhouseFINALE/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_2_STATE, 0, trickhouseFINALE_EventScript_FoundScroll
# 41 "data/maps/trickhouseFINALE/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 42 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 43 "data/maps/trickhouseFINALE/scripts.pory"

# 44 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_FoundScroll::
# 45 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_2_STATE, 1
# 46 "data/maps/trickhouseFINALE/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 47 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 48 "data/maps/trickhouseFINALE/scripts.pory"

# 49 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_respawntile::
# 50 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 3, 15, METATILE_TrickHousePuzzle_Door_Shuttered, FALSE
# 51 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 52 "data/maps/trickhouseFINALE/scripts.pory"

# 53 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_respawnswitch2::
# 54 "data/maps/trickhouseFINALE/scripts.pory"
    setmetatile 13, 4, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Up, FALSE
# 55 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 18, 12, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 56 "data/maps/trickhouseFINALE/scripts.pory"
    setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2
# 57 "data/maps/trickhouseFINALE/scripts.pory"
	Return
# 58 "data/maps/trickhouseFINALE/scripts.pory"

# 59 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_respawnswitch3::
# 60 "data/maps/trickhouseFINALE/scripts.pory"
    setmetatile 22, 17, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Down, FALSE
# 61 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 30, 32, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 62 "data/maps/trickhouseFINALE/scripts.pory"
    setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3
# 63 "data/maps/trickhouseFINALE/scripts.pory"
	Return
# 64 "data/maps/trickhouseFINALE/scripts.pory"

# 65 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_respawnswitch4::
# 66 "data/maps/trickhouseFINALE/scripts.pory"
    setmetatile 25, 22, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Right, FALSE
# 67 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 28, 2, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 68 "data/maps/trickhouseFINALE/scripts.pory"
    setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4
# 69 "data/maps/trickhouseFINALE/scripts.pory"
	Return
# 70 "data/maps/trickhouseFINALE/scripts.pory"

# 71 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_respawnswitch5::
# 72 "data/maps/trickhouseFINALE/scripts.pory"
    setmetatile 37, 18, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Left, FALSE
# 73 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 2, 10, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 74 "data/maps/trickhouseFINALE/scripts.pory"
    setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5
# 75 "data/maps/trickhouseFINALE/scripts.pory"
	Return
# 76 "data/maps/trickhouseFINALE/scripts.pory"

# 77 "data/maps/trickhouseFINALE/scripts.pory"

# 78 "data/maps/trickhouseFINALE/scripts.pory"

# 79 "data/maps/trickhouseFINALE/scripts.pory"

# 80 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_Button1::
# 81 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 82 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_TEMP_1, 1
# 83 "data/maps/trickhouseFINALE/scripts.pory"
	playse SE_PIN
# 84 "data/maps/trickhouseFINALE/scripts.pory"
	call trickhouseFINALE_EventScript_PressButton1
# 85 "data/maps/trickhouseFINALE/scripts.pory"
	special DrawWholeMapView
# 86 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 87 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 88 "data/maps/trickhouseFINALE/scripts.pory"

# 89 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_Button2::
# 90 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 91 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_TEMP_2, 1
# 92 "data/maps/trickhouseFINALE/scripts.pory"
	playse SE_PIN
# 93 "data/maps/trickhouseFINALE/scripts.pory"
	call trickhouseFINALE_EventScript_PressButton2
# 94 "data/maps/trickhouseFINALE/scripts.pory"
	special DrawWholeMapView
# 95 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 96 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 97 "data/maps/trickhouseFINALE/scripts.pory"

# 98 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_Button3::
# 99 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 100 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_TEMP_3, 1
# 101 "data/maps/trickhouseFINALE/scripts.pory"
	playse SE_PIN
# 102 "data/maps/trickhouseFINALE/scripts.pory"
	call trickhouseFINALE_EventScript_PressButton3
# 103 "data/maps/trickhouseFINALE/scripts.pory"
	special DrawWholeMapView
# 104 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 105 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 106 "data/maps/trickhouseFINALE/scripts.pory"

# 107 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_Button4::
# 108 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 109 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_TEMP_4, 1
# 110 "data/maps/trickhouseFINALE/scripts.pory"
	playse SE_PIN
# 111 "data/maps/trickhouseFINALE/scripts.pory"
	call trickhouseFINALE_EventScript_PressButton4
# 112 "data/maps/trickhouseFINALE/scripts.pory"
	special DrawWholeMapView
# 113 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 114 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 115 "data/maps/trickhouseFINALE/scripts.pory"

# 116 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_PressButton1::
# 117 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 27, 37, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
# 118 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 13, 33, METATILE_TrickHousePuzzle_Door_Shuttered, FALSE
# 119 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 120 "data/maps/trickhouseFINALE/scripts.pory"

# 121 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_PressButton2::
# 122 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 13, 30, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
# 123 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 30, 38, METATILE_TrickHousePuzzle_Door_Shuttered, FALSE
# 124 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 125 "data/maps/trickhouseFINALE/scripts.pory"

# 126 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_PressButton3::
# 127 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 18, 24, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
# 128 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 23, 24, METATILE_TrickHousePuzzle_Door_Shuttered, FALSE
# 129 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 130 "data/maps/trickhouseFINALE/scripts.pory"

# 131 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_PressButton4::
# 132 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 18, 28, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
# 133 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 23, 28, METATILE_TrickHousePuzzle_Door_Shuttered, FALSE
# 134 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 135 "data/maps/trickhouseFINALE/scripts.pory"

# 136 "data/maps/trickhouseFINALE/scripts.pory"

# 137 "data/maps/trickhouseFINALE/scripts.pory"

# 138 "data/maps/trickhouseFINALE/scripts.pory"

# 139 "data/maps/trickhouseFINALE/scripts.pory"

# 140 "data/maps/trickhouseFINALE/scripts.pory"

# 141 "data/maps/trickhouseFINALE/scripts.pory"

# 142 "data/maps/trickhouseFINALE/scripts.pory"

# 143 "data/maps/trickhouseFINALE/scripts.pory"

# 144 "data/maps/trickhouseFINALE/scripts.pory"

# 145 "data/maps/trickhouseFINALE/scripts.pory"

# 146 "data/maps/trickhouseFINALE/scripts.pory"

# 147 "data/maps/trickhouseFINALE/scripts.pory"

# 148 "data/maps/trickhouseFINALE/scripts.pory"

# 149 "data/maps/trickhouseFINALE/scripts.pory"

# 150 "data/maps/trickhouseFINALE/scripts.pory"

# 151 "data/maps/trickhouseFINALE/scripts.pory"

# 152 "data/maps/trickhouseFINALE/scripts.pory"

# 153 "data/maps/trickhouseFINALE/scripts.pory"

# 154 "data/maps/trickhouseFINALE/scripts.pory"

# 155 "data/maps/trickhouseFINALE/scripts.pory"

# 156 "data/maps/trickhouseFINALE/scripts.pory"

# 157 "data/maps/trickhouseFINALE/scripts.pory"

# 158 "data/maps/trickhouseFINALE/scripts.pory"

# 159 "data/maps/trickhouseFINALE/scripts.pory"

# 160 "data/maps/trickhouseFINALE/scripts.pory"

# 161 "data/maps/trickhouseFINALE/scripts.pory"
@ Puzzle Room 7 in RSE uses whatever puzzle Mossdeep Gym uses
# 162 "data/maps/trickhouseFINALE/scripts.pory"
@ Because Mossdeep Gym was redesigned for Emerald, theres a good deal of leftover script from the old R/S puzzle
# 163 "data/maps/trickhouseFINALE/scripts.pory"

# 164 "data/maps/trickhouseFINALE/scripts.pory"

# 165 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_UpdateSwitchMetatiles::
# 166 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, trickhouseFINALE_EventScript_SetSwitch1MetatilesOn
# 167 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, trickhouseFINALE_EventScript_SetSwitch2MetatilesOn
# 168 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, trickhouseFINALE_EventScript_SetSwitch3MetatilesOn
# 169 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, trickhouseFINALE_EventScript_SetSwitch4MetatilesOn
# 170 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, trickhouseFINALE_EventScript_SetSwitch5MetatilesOn
# 171 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 172 "data/maps/trickhouseFINALE/scripts.pory"

# 173 "data/maps/trickhouseFINALE/scripts.pory"
@ Leftover from R/S, none of the below metatile scripts are ever called
# 174 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch1MetatilesOn::
# 175 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 20, 37, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Up, FALSE
# 176 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 34, 38, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 177 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 178 "data/maps/trickhouseFINALE/scripts.pory"

# 179 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch2MetatilesOn::
# 180 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 13, 4, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Up, FALSE
# 181 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 18, 12, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 182 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 183 "data/maps/trickhouseFINALE/scripts.pory"

# 184 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch3MetatilesOn::
# 185 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 22, 17, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Down, FALSE
# 186 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 30, 32, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 187 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 188 "data/maps/trickhouseFINALE/scripts.pory"

# 189 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch4MetatilesOn::
# 190 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 25, 22, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Right, FALSE
# 191 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 28, 2, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 192 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 193 "data/maps/trickhouseFINALE/scripts.pory"

# 194 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch5MetatilesOn::
# 195 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 37, 18, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Left, FALSE
# 196 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 2, 10, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 197 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 198 "data/maps/trickhouseFINALE/scripts.pory"

# 199 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch1MetatilesOff::
# 200 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 20, 37, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Down, FALSE
# 201 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 34, 38, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 202 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 203 "data/maps/trickhouseFINALE/scripts.pory"

# 204 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch2MetatilesOff::
# 205 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 13, 4, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Down, FALSE
# 206 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 18, 12, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 207 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 208 "data/maps/trickhouseFINALE/scripts.pory"

# 209 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch3MetatilesOff::
# 210 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 22, 17, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Up, FALSE
# 211 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 30, 32, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 212 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 213 "data/maps/trickhouseFINALE/scripts.pory"

# 214 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch4MetatilesOff::
# 215 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 25, 22, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Left, FALSE
# 216 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 2, 28, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 217 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 218 "data/maps/trickhouseFINALE/scripts.pory"

# 219 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch5MetatilesOff::
# 220 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 27, 18, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Up, FALSE
# 221 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 10, 25, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 222 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 223 "data/maps/trickhouseFINALE/scripts.pory"

# 224 "data/maps/trickhouseFINALE/scripts.pory"

# 225 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_TeleportedTransition::
# 226 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 227 "data/maps/trickhouseFINALE/scripts.pory"

# 228 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_ClearState2::
# 229 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 0
# 230 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 231 "data/maps/trickhouseFINALE/scripts.pory"

# 232 "data/maps/trickhouseFINALE/scripts.pory"

# 233 "data/maps/trickhouseFINALE/scripts.pory"

# 234 "data/maps/trickhouseFINALE/scripts.pory"
@ Unused, leftover from R/S
# 235 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_TeleportPad::
# 236 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 237 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 1
# 238 "data/maps/trickhouseFINALE/scripts.pory"
	warpteleport MAP_ROUTE110_TRICK_HOUSE_PUZZLE7, 3, 19
# 239 "data/maps/trickhouseFINALE/scripts.pory"
	waitstate
# 240 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 241 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 242 "data/maps/trickhouseFINALE/scripts.pory"

# 243 "data/maps/trickhouseFINALE/scripts.pory"
@ All the below switch scripts are unused leftover from R/S
# 244 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_Switch1::
# 245 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 246 "data/maps/trickhouseFINALE/scripts.pory"
	delay 32
# 247 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, trickhouseFINALE_EventScript_SetSwitch1MetatilesOn
# 248 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, trickhouseFINALE_EventScript_SetSwitch1MetatilesOff
# 249 "data/maps/trickhouseFINALE/scripts.pory"
	special DrawWholeMapView
# 250 "data/maps/trickhouseFINALE/scripts.pory"
	playse SE_CLICK
# 251 "data/maps/trickhouseFINALE/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, trickhouseFINALE_EventScript_SetSwitch1On
# 252 "data/maps/trickhouseFINALE/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, trickhouseFINALE_EventScript_SetSwitch1Off
# 253 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 254 "data/maps/trickhouseFINALE/scripts.pory"

# 255 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_Switch2::
# 256 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 257 "data/maps/trickhouseFINALE/scripts.pory"
	delay 32
# 258 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40FD, 1
# 259 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, trickhouseFINALE_EventScript_SetSwitch2MetatilesOn
# 260 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, trickhouseFINALE_EventScript_SetSwitch2MetatilesOff
# 261 "data/maps/trickhouseFINALE/scripts.pory"
	special DrawWholeMapView
# 262 "data/maps/trickhouseFINALE/scripts.pory"
	playse SE_CLICK
# 263 "data/maps/trickhouseFINALE/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, trickhouseFINALE_EventScript_SetSwitch2On
# 264 "data/maps/trickhouseFINALE/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, trickhouseFINALE_EventScript_SetSwitch2Off
# 265 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 266 "data/maps/trickhouseFINALE/scripts.pory"

# 267 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_Switch3::
# 268 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 269 "data/maps/trickhouseFINALE/scripts.pory"
	delay 32
# 270 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40DC, 1
# 271 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, trickhouseFINALE_EventScript_SetSwitch3MetatilesOn
# 272 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, trickhouseFINALE_EventScript_SetSwitch3MetatilesOff
# 273 "data/maps/trickhouseFINALE/scripts.pory"
	special DrawWholeMapView
# 274 "data/maps/trickhouseFINALE/scripts.pory"
	playse SE_CLICK
# 275 "data/maps/trickhouseFINALE/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, trickhouseFINALE_EventScript_SetSwitch3On
# 276 "data/maps/trickhouseFINALE/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, trickhouseFINALE_EventScript_SetSwitch3Off
# 277 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 278 "data/maps/trickhouseFINALE/scripts.pory"

# 279 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_Switch4::
# 280 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 281 "data/maps/trickhouseFINALE/scripts.pory"
	delay 32
# 282 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40FC, 1
# 283 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, trickhouseFINALE_EventScript_SetSwitch4MetatilesOn
# 284 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, trickhouseFINALE_EventScript_SetSwitch4MetatilesOff
# 285 "data/maps/trickhouseFINALE/scripts.pory"
	special DrawWholeMapView
# 286 "data/maps/trickhouseFINALE/scripts.pory"
	playse SE_CLICK
# 287 "data/maps/trickhouseFINALE/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, trickhouseFINALE_EventScript_SetSwitch4On
# 288 "data/maps/trickhouseFINALE/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, trickhouseFINALE_EventScript_SetSwitch4Off
# 289 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 290 "data/maps/trickhouseFINALE/scripts.pory"

# 291 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_Switch5::
# 292 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 293 "data/maps/trickhouseFINALE/scripts.pory"
	delay 32
# 294 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40DB, 1
# 295 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, trickhouseFINALE_EventScript_SetSwitch5MetatilesOn
# 296 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, trickhouseFINALE_EventScript_SetSwitch5MetatilesOff
# 297 "data/maps/trickhouseFINALE/scripts.pory"
	special DrawWholeMapView
# 298 "data/maps/trickhouseFINALE/scripts.pory"
	playse SE_CLICK
# 299 "data/maps/trickhouseFINALE/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, trickhouseFINALE_EventScript_SetSwitch5On
# 300 "data/maps/trickhouseFINALE/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, trickhouseFINALE_EventScript_SetSwitch5Off
# 301 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 302 "data/maps/trickhouseFINALE/scripts.pory"

# 303 "data/maps/trickhouseFINALE/scripts.pory"
@ All the below switch scripts are unused leftover from R/S
# 304 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch1On::
# 305 "data/maps/trickhouseFINALE/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1
# 306 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 307 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 308 "data/maps/trickhouseFINALE/scripts.pory"

# 309 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch1Off::
# 310 "data/maps/trickhouseFINALE/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1
# 311 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 312 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 313 "data/maps/trickhouseFINALE/scripts.pory"

# 314 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch2On::
# 315 "data/maps/trickhouseFINALE/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2
# 316 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40FD, 1
# 317 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 318 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 319 "data/maps/trickhouseFINALE/scripts.pory"

# 320 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch2Off::
# 321 "data/maps/trickhouseFINALE/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2
# 322 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40FD, 0
# 323 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 324 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 325 "data/maps/trickhouseFINALE/scripts.pory"

# 326 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch3On::
# 327 "data/maps/trickhouseFINALE/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3
# 328 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40DC, 1
# 329 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 330 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 331 "data/maps/trickhouseFINALE/scripts.pory"

# 332 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch3Off::
# 333 "data/maps/trickhouseFINALE/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3
# 334 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40DC, 0
# 335 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 336 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 337 "data/maps/trickhouseFINALE/scripts.pory"

# 338 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch4On::
# 339 "data/maps/trickhouseFINALE/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4
# 340 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40FC, 1
# 341 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 342 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 343 "data/maps/trickhouseFINALE/scripts.pory"

# 344 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch4Off::
# 345 "data/maps/trickhouseFINALE/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4
# 346 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40FC, 0
# 347 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 348 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 349 "data/maps/trickhouseFINALE/scripts.pory"

# 350 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch5On::
# 351 "data/maps/trickhouseFINALE/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5
# 352 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40DB, 1
# 353 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 354 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 355 "data/maps/trickhouseFINALE/scripts.pory"

# 356 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch5Off::
# 357 "data/maps/trickhouseFINALE/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5
# 358 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40DB, 0
# 359 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 360 "data/maps/trickhouseFINALE/scripts.pory"
	end

trickhouseFINALE_EventScript_Duditem::
# 366 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 367 "data/maps/trickhouseFINALE/scripts.pory"
	MSGBOX trickhouseFINALE_EventScript_Duditem_Text_0
# 368 "data/maps/trickhouseFINALE/scripts.pory"
	closemessage
# 369 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
	return


trickhouseFINALE_EventScript_realitem::
# 373 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 374 "data/maps/trickhouseFINALE/scripts.pory"
	MSGBOX trickhouseFINALE_EventScript_realitem_Text_0
# 375 "data/maps/trickhouseFINALE/scripts.pory"
	setflag FLAG_realitempicked
# 376 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 3, 15, METATILE_TrickHousePuzzle_Door_Shuttered, FALSE
# 377 "data/maps/trickhouseFINALE/scripts.pory"
	closemessage
# 378 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
	return


trickhouseFINALE_EventScript_finalriddle::
# 382 "data/maps/trickhouseFINALE/scripts.pory"
	MSGBOX trickhouseFINALE_EventScript_finalriddle_Text_0
# 383 "data/maps/trickhouseFINALE/scripts.pory"
	MSGBOX trickhouseFINALE_EventScript_finalriddle_Text_1, MSGBOX_YESNO
# 384 "data/maps/trickhouseFINALE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq trickhouseFINALE_EventScript_finalriddle_1
# 398 "data/maps/trickhouseFINALE/scripts.pory"
	MSGBOX trickhouseFINALE_EventScript_finalriddle_Text_3
# 399 "data/maps/trickhouseFINALE/scripts.pory"
	closemessage
	return

trickhouseFINALE_EventScript_finalriddle_1:
# 385 "data/maps/trickhouseFINALE/scripts.pory"
	message trickhouseFINALE_EventScript_finalriddle_Text_2
# 386 "data/maps/trickhouseFINALE/scripts.pory"
	multichoice 25, 5, MULTI_RIDDLE_FINAL, 0
# 387 "data/maps/trickhouseFINALE/scripts.pory"
	closemessage
# 388 "data/maps/trickhouseFINALE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq trickhouseFINALE_EventScript_finalriddle_4
# 391 "data/maps/trickhouseFINALE/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq trickhouseFINALE_EventScript_finalriddle_5
# 394 "data/maps/trickhouseFINALE/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq trickhouseFINALE_EventScript_finalriddle_6
	return

trickhouseFINALE_EventScript_finalriddle_4:
# 389 "data/maps/trickhouseFINALE/scripts.pory"
	call RFFailed
	return

trickhouseFINALE_EventScript_finalriddle_5:
# 392 "data/maps/trickhouseFINALE/scripts.pory"
	call RFFailed
	return

trickhouseFINALE_EventScript_finalriddle_6:
# 395 "data/maps/trickhouseFINALE/scripts.pory"
	call RFCorrect
	return


RFFailed::
# 407 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 408 "data/maps/trickhouseFINALE/scripts.pory"
	MSGBOX RFFailed_Text_0
# 409 "data/maps/trickhouseFINALE/scripts.pory"
	waitmessage
# 410 "data/maps/trickhouseFINALE/scripts.pory"
	clearflag FLAG_realitempicked
# 411 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_UNUSED_0x40FD, 0
# 412 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_UNUSED_0x40DC, 0
# 413 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_UNUSED_0x40FC, 0
# 414 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_UNUSED_0x40DB, 0
# 415 "data/maps/trickhouseFINALE/scripts.pory"
	fadescreen FADE_TO_BLACK
# 416 "data/maps/trickhouseFINALE/scripts.pory"
	warpsilent MAP_TRICKHOUSE_FINALE, 20, 39
# 417 "data/maps/trickhouseFINALE/scripts.pory"
	waitstate
	return


RFCorrect::
# 421 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 422 "data/maps/trickhouseFINALE/scripts.pory"
	MSGBOX RFCorrect_Text_0
# 423 "data/maps/trickhouseFINALE/scripts.pory"
	delay 20
# 424 "data/maps/trickhouseFINALE/scripts.pory"
	MSGBOX RFCorrect_Text_0
# 425 "data/maps/trickhouseFINALE/scripts.pory"
	delay 20
# 426 "data/maps/trickhouseFINALE/scripts.pory"
	MSGBOX RFCorrect_Text_1
# 427 "data/maps/trickhouseFINALE/scripts.pory"
	waitmessage
# 428 "data/maps/trickhouseFINALE/scripts.pory"
	closemessage
# 429 "data/maps/trickhouseFINALE/scripts.pory"
	applymovement 6, ominouswalkfr
# 430 "data/maps/trickhouseFINALE/scripts.pory"
	waitmovement 0
# 431 "data/maps/trickhouseFINALE/scripts.pory"
	removeobject 6
# 432 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
	return


# 436 "data/maps/trickhouseFINALE/scripts.pory"
ominouswalkfr:
# 437 "data/maps/trickhouseFINALE/scripts.pory"
	walk_up
# 437 "data/maps/trickhouseFINALE/scripts.pory"
	walk_up
# 437 "data/maps/trickhouseFINALE/scripts.pory"
	walk_up
# 437 "data/maps/trickhouseFINALE/scripts.pory"
	walk_up
# 437 "data/maps/trickhouseFINALE/scripts.pory"
	walk_up
# 437 "data/maps/trickhouseFINALE/scripts.pory"
	walk_up
# 437 "data/maps/trickhouseFINALE/scripts.pory"
	walk_up
	step_end

trickhouseFINALE_EventScript_Duditem_Text_0:
# 367 "data/maps/trickhouseFINALE/scripts.pory"
	.string "It's a Dud!$"

trickhouseFINALE_EventScript_realitem_Text_0:
# 374 "data/maps/trickhouseFINALE/scripts.pory"
	.string "A gear clicked somewhere in the floor$"

trickhouseFINALE_EventScript_finalriddle_Text_0:
# 382 "data/maps/trickhouseFINALE/scripts.pory"
	.string "This is it... one final riddle!$"

trickhouseFINALE_EventScript_finalriddle_Text_1:
# 383 "data/maps/trickhouseFINALE/scripts.pory"
	.string "Begin the Final riddle?$"

trickhouseFINALE_EventScript_finalriddle_Text_2:
# 385 "data/maps/trickhouseFINALE/scripts.pory"
	.string "Ha! lets see how attentive you've been!\n"
	.string "How many children have appeared\l"
	.string "through this hack?$"

trickhouseFINALE_EventScript_finalriddle_Text_3:
# 398 "data/maps/trickhouseFINALE/scripts.pory"
	.string ".... wut-$"

RFFailed_Text_0:
# 408 "data/maps/trickhouseFINALE/scripts.pory"
	.string "HAH! you players these days never pay\n"
	.string "attention!$"

RFCorrect_Text_0:
# 422 "data/maps/trickhouseFINALE/scripts.pory"
	.string ".....$"

RFCorrect_Text_1:
# 426 "data/maps/trickhouseFINALE/scripts.pory"
	.string "very well. meet me in the room ahead for\n"
	.string "our final showdown!$"
