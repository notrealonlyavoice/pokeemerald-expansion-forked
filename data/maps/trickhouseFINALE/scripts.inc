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
    call CableClub_OnResume
# 11 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, trickhouseFINALE_EventScript_PressButton1
# 12 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_eq VAR_TEMP_2, 1, trickhouseFINALE_EventScript_PressButton2
# 13 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_eq VAR_TEMP_3, 1, trickhouseFINALE_EventScript_PressButton3
# 14 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_eq VAR_TEMP_4, 1, trickhouseFINALE_EventScript_PressButton4
# 15 "data/maps/trickhouseFINALE/scripts.pory"
	call trickhouseFINALE_EventScript_UpdateSwitchMetatiles
# 16 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 17 "data/maps/trickhouseFINALE/scripts.pory"

# 18 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_OnTransition:
# 19 "data/maps/trickhouseFINALE/scripts.pory"
    setrespawn HEAL_LOCATION_TRICKHOUSE_FINALE
# 20 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_TEMP_1, 0
# 21 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_TEMP_2, 0
# 22 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_TEMP_3, 0
# 23 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_TEMP_4, 0
# 24 "data/maps/trickhouseFINALE/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 1, trickhouseFINALE_EventScript_TeleportedTransition
# 25 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 26 "data/maps/trickhouseFINALE/scripts.pory"

# 27 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_OnLoad:
# 28 "data/maps/trickhouseFINALE/scripts.pory"
	call trickhouseFINALE_EventScript_UpdateSwitchMetatiles
# 29 "data/maps/trickhouseFINALE/scripts.pory"
    goto_if_set FLAG_realitempicked, trickhouseFINALE_EventScript_respawntile
# 30 "data/maps/trickhouseFINALE/scripts.pory"
    goto_if_eq VAR_UNUSED_0x40FD, 1, trickhouseFINALE_EventScript_respawnswitch2
# 31 "data/maps/trickhouseFINALE/scripts.pory"
    goto_if_eq VAR_UNUSED_0x40DC, 1, trickhouseFINALE_EventScript_respawnswitch3
# 32 "data/maps/trickhouseFINALE/scripts.pory"
    goto_if_eq VAR_UNUSED_0x40FC, 1, trickhouseFINALE_EventScript_respawnswitch4
# 33 "data/maps/trickhouseFINALE/scripts.pory"
    goto_if_eq VAR_UNUSED_0x40DB, 1, trickhouseFINALE_EventScript_respawnswitch5
# 34 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 35 "data/maps/trickhouseFINALE/scripts.pory"
 
# 36 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_OnFrame:
# 37 "data/maps/trickhouseFINALE/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 1, trickhouseFINALE_EventScript_ClearState2
# 38 "data/maps/trickhouseFINALE/scripts.pory"
	.2byte 0
# 39 "data/maps/trickhouseFINALE/scripts.pory"

# 40 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_Scroll::
# 41 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 42 "data/maps/trickhouseFINALE/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_2_STATE, 0, trickhouseFINALE_EventScript_FoundScroll
# 43 "data/maps/trickhouseFINALE/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 44 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 45 "data/maps/trickhouseFINALE/scripts.pory"

# 46 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_FoundScroll::
# 47 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_2_STATE, 1
# 48 "data/maps/trickhouseFINALE/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 49 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 50 "data/maps/trickhouseFINALE/scripts.pory"

# 51 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_respawntile::
# 52 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 3, 15, METATILE_TrickHousePuzzle_Door_Shuttered, FALSE
# 53 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 54 "data/maps/trickhouseFINALE/scripts.pory"

# 55 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_respawnswitch2::
# 56 "data/maps/trickhouseFINALE/scripts.pory"
    setmetatile 13, 4, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Up, FALSE
# 57 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 18, 12, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 58 "data/maps/trickhouseFINALE/scripts.pory"
    setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2
# 59 "data/maps/trickhouseFINALE/scripts.pory"
	Return
# 60 "data/maps/trickhouseFINALE/scripts.pory"

# 61 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_respawnswitch3::
# 62 "data/maps/trickhouseFINALE/scripts.pory"
    setmetatile 22, 17, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Down, FALSE
# 63 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 30, 32, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 64 "data/maps/trickhouseFINALE/scripts.pory"
    setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3
# 65 "data/maps/trickhouseFINALE/scripts.pory"
	Return
# 66 "data/maps/trickhouseFINALE/scripts.pory"

# 67 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_respawnswitch4::
# 68 "data/maps/trickhouseFINALE/scripts.pory"
    setmetatile 25, 22, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Right, FALSE
# 69 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 28, 2, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 70 "data/maps/trickhouseFINALE/scripts.pory"
    setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4
# 71 "data/maps/trickhouseFINALE/scripts.pory"
	Return
# 72 "data/maps/trickhouseFINALE/scripts.pory"

# 73 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_respawnswitch5::
# 74 "data/maps/trickhouseFINALE/scripts.pory"
    setmetatile 37, 18, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Left, FALSE
# 75 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 2, 10, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 76 "data/maps/trickhouseFINALE/scripts.pory"
    setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5
# 77 "data/maps/trickhouseFINALE/scripts.pory"
	Return
# 78 "data/maps/trickhouseFINALE/scripts.pory"

# 79 "data/maps/trickhouseFINALE/scripts.pory"

# 80 "data/maps/trickhouseFINALE/scripts.pory"

# 81 "data/maps/trickhouseFINALE/scripts.pory"

# 82 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_Button1::
# 83 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 84 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_TEMP_1, 1
# 85 "data/maps/trickhouseFINALE/scripts.pory"
	playse SE_PIN
# 86 "data/maps/trickhouseFINALE/scripts.pory"
	call trickhouseFINALE_EventScript_PressButton1
# 87 "data/maps/trickhouseFINALE/scripts.pory"
	special DrawWholeMapView
# 88 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 89 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 90 "data/maps/trickhouseFINALE/scripts.pory"

# 91 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_Button2::
# 92 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 93 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_TEMP_2, 1
# 94 "data/maps/trickhouseFINALE/scripts.pory"
	playse SE_PIN
# 95 "data/maps/trickhouseFINALE/scripts.pory"
	call trickhouseFINALE_EventScript_PressButton2
# 96 "data/maps/trickhouseFINALE/scripts.pory"
	special DrawWholeMapView
# 97 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 98 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 99 "data/maps/trickhouseFINALE/scripts.pory"

# 100 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_Button3::
# 101 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 102 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_TEMP_3, 1
# 103 "data/maps/trickhouseFINALE/scripts.pory"
	playse SE_PIN
# 104 "data/maps/trickhouseFINALE/scripts.pory"
	call trickhouseFINALE_EventScript_PressButton3
# 105 "data/maps/trickhouseFINALE/scripts.pory"
	special DrawWholeMapView
# 106 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 107 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 108 "data/maps/trickhouseFINALE/scripts.pory"

# 109 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_Button4::
# 110 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 111 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_TEMP_4, 1
# 112 "data/maps/trickhouseFINALE/scripts.pory"
	playse SE_PIN
# 113 "data/maps/trickhouseFINALE/scripts.pory"
	call trickhouseFINALE_EventScript_PressButton4
# 114 "data/maps/trickhouseFINALE/scripts.pory"
	special DrawWholeMapView
# 115 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 116 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 117 "data/maps/trickhouseFINALE/scripts.pory"

# 118 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_PressButton1::
# 119 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 27, 37, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
# 120 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 13, 33, METATILE_TrickHousePuzzle_Door_Shuttered, FALSE
# 121 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 122 "data/maps/trickhouseFINALE/scripts.pory"

# 123 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_PressButton2::
# 124 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 13, 30, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
# 125 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 30, 38, METATILE_TrickHousePuzzle_Door_Shuttered, FALSE
# 126 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 127 "data/maps/trickhouseFINALE/scripts.pory"

# 128 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_PressButton3::
# 129 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 18, 24, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
# 130 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 23, 24, METATILE_TrickHousePuzzle_Door_Shuttered, FALSE
# 131 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 132 "data/maps/trickhouseFINALE/scripts.pory"

# 133 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_PressButton4::
# 134 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 18, 28, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
# 135 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 23, 28, METATILE_TrickHousePuzzle_Door_Shuttered, FALSE
# 136 "data/maps/trickhouseFINALE/scripts.pory"
	return
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

# 162 "data/maps/trickhouseFINALE/scripts.pory"

# 163 "data/maps/trickhouseFINALE/scripts.pory"
@ Puzzle Room 7 in RSE uses whatever puzzle Mossdeep Gym uses
# 164 "data/maps/trickhouseFINALE/scripts.pory"
@ Because Mossdeep Gym was redesigned for Emerald, theres a good deal of leftover script from the old R/S puzzle
# 165 "data/maps/trickhouseFINALE/scripts.pory"

# 166 "data/maps/trickhouseFINALE/scripts.pory"

# 167 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_UpdateSwitchMetatiles::
# 168 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, trickhouseFINALE_EventScript_SetSwitch1MetatilesOn
# 169 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, trickhouseFINALE_EventScript_SetSwitch2MetatilesOn
# 170 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, trickhouseFINALE_EventScript_SetSwitch3MetatilesOn
# 171 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, trickhouseFINALE_EventScript_SetSwitch4MetatilesOn
# 172 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, trickhouseFINALE_EventScript_SetSwitch5MetatilesOn
# 173 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 174 "data/maps/trickhouseFINALE/scripts.pory"

# 175 "data/maps/trickhouseFINALE/scripts.pory"
@ Leftover from R/S, none of the below metatile scripts are ever called
# 176 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch1MetatilesOn::
# 177 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 20, 37, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Up, FALSE
# 178 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 34, 38, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 179 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 180 "data/maps/trickhouseFINALE/scripts.pory"

# 181 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch2MetatilesOn::
# 182 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40FD, 1
# 183 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 13, 4, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Up, FALSE
# 184 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 18, 12, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 185 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 186 "data/maps/trickhouseFINALE/scripts.pory"

# 187 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch3MetatilesOn::
# 188 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40DC, 1
# 189 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 22, 17, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Down, FALSE
# 190 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 30, 32, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 191 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 192 "data/maps/trickhouseFINALE/scripts.pory"

# 193 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch4MetatilesOn::
# 194 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40FC, 1
# 195 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 25, 22, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Right, FALSE
# 196 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 28, 2, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 197 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 198 "data/maps/trickhouseFINALE/scripts.pory"

# 199 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch5MetatilesOn::
# 200 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40DB, 1
# 201 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 37, 18, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Left, FALSE
# 202 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 2, 10, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 203 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 204 "data/maps/trickhouseFINALE/scripts.pory"

# 205 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch1MetatilesOff::
# 206 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 20, 37, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Down, FALSE
# 207 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 34, 38, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 208 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 209 "data/maps/trickhouseFINALE/scripts.pory"

# 210 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch2MetatilesOff::
# 211 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 13, 4, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Down, FALSE
# 212 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 18, 12, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 213 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 214 "data/maps/trickhouseFINALE/scripts.pory"

# 215 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch3MetatilesOff::
# 216 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 22, 17, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Up, FALSE
# 217 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 30, 32, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 218 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 219 "data/maps/trickhouseFINALE/scripts.pory"

# 220 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch4MetatilesOff::
# 221 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 25, 22, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Left, FALSE
# 222 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 2, 28, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 223 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 224 "data/maps/trickhouseFINALE/scripts.pory"

# 225 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch5MetatilesOff::
# 226 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 27, 18, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Up, FALSE
# 227 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 10, 25, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 228 "data/maps/trickhouseFINALE/scripts.pory"
	return
# 229 "data/maps/trickhouseFINALE/scripts.pory"

# 230 "data/maps/trickhouseFINALE/scripts.pory"

# 231 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_TeleportedTransition::
# 232 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 233 "data/maps/trickhouseFINALE/scripts.pory"

# 234 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_ClearState2::
# 235 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 0
# 236 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 237 "data/maps/trickhouseFINALE/scripts.pory"

# 238 "data/maps/trickhouseFINALE/scripts.pory"

# 239 "data/maps/trickhouseFINALE/scripts.pory"

# 240 "data/maps/trickhouseFINALE/scripts.pory"
@ Unused, leftover from R/S
# 241 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_TeleportPad::
# 242 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 243 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 1
# 244 "data/maps/trickhouseFINALE/scripts.pory"
	warpteleport MAP_ROUTE110_TRICK_HOUSE_PUZZLE7, 3, 19
# 245 "data/maps/trickhouseFINALE/scripts.pory"
	waitstate
# 246 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 247 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 248 "data/maps/trickhouseFINALE/scripts.pory"

# 249 "data/maps/trickhouseFINALE/scripts.pory"
@ All the below switch scripts are unused leftover from R/S
# 250 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_Switch1::
# 251 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 252 "data/maps/trickhouseFINALE/scripts.pory"
	delay 32
# 253 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, trickhouseFINALE_EventScript_SetSwitch1MetatilesOn
# 254 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, trickhouseFINALE_EventScript_SetSwitch1MetatilesOff
# 255 "data/maps/trickhouseFINALE/scripts.pory"
	special DrawWholeMapView
# 256 "data/maps/trickhouseFINALE/scripts.pory"
	playse SE_CLICK
# 257 "data/maps/trickhouseFINALE/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, trickhouseFINALE_EventScript_SetSwitch1On
# 258 "data/maps/trickhouseFINALE/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, trickhouseFINALE_EventScript_SetSwitch1Off
# 259 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 260 "data/maps/trickhouseFINALE/scripts.pory"

# 261 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_Switch2::
# 262 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 263 "data/maps/trickhouseFINALE/scripts.pory"
	delay 32
# 264 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40FD, 1
# 265 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, trickhouseFINALE_EventScript_SetSwitch2MetatilesOn
# 266 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, trickhouseFINALE_EventScript_SetSwitch2MetatilesOff
# 267 "data/maps/trickhouseFINALE/scripts.pory"
	special DrawWholeMapView
# 268 "data/maps/trickhouseFINALE/scripts.pory"
	playse SE_CLICK
# 269 "data/maps/trickhouseFINALE/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, trickhouseFINALE_EventScript_SetSwitch2On
# 270 "data/maps/trickhouseFINALE/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, trickhouseFINALE_EventScript_SetSwitch2Off
# 271 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 272 "data/maps/trickhouseFINALE/scripts.pory"

# 273 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_Switch3::
# 274 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 275 "data/maps/trickhouseFINALE/scripts.pory"
	delay 32
# 276 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40DC, 1
# 277 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, trickhouseFINALE_EventScript_SetSwitch3MetatilesOn
# 278 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, trickhouseFINALE_EventScript_SetSwitch3MetatilesOff
# 279 "data/maps/trickhouseFINALE/scripts.pory"
	special DrawWholeMapView
# 280 "data/maps/trickhouseFINALE/scripts.pory"
	playse SE_CLICK
# 281 "data/maps/trickhouseFINALE/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, trickhouseFINALE_EventScript_SetSwitch3On
# 282 "data/maps/trickhouseFINALE/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, trickhouseFINALE_EventScript_SetSwitch3Off
# 283 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 284 "data/maps/trickhouseFINALE/scripts.pory"

# 285 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_Switch4::
# 286 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 287 "data/maps/trickhouseFINALE/scripts.pory"
	delay 32
# 288 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40FC, 1
# 289 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, trickhouseFINALE_EventScript_SetSwitch4MetatilesOn
# 290 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, trickhouseFINALE_EventScript_SetSwitch4MetatilesOff
# 291 "data/maps/trickhouseFINALE/scripts.pory"
	special DrawWholeMapView
# 292 "data/maps/trickhouseFINALE/scripts.pory"
	playse SE_CLICK
# 293 "data/maps/trickhouseFINALE/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, trickhouseFINALE_EventScript_SetSwitch4On
# 294 "data/maps/trickhouseFINALE/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, trickhouseFINALE_EventScript_SetSwitch4Off
# 295 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 296 "data/maps/trickhouseFINALE/scripts.pory"

# 297 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_Switch5::
# 298 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 299 "data/maps/trickhouseFINALE/scripts.pory"
	delay 32
# 300 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40DB, 1
# 301 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, trickhouseFINALE_EventScript_SetSwitch5MetatilesOn
# 302 "data/maps/trickhouseFINALE/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, trickhouseFINALE_EventScript_SetSwitch5MetatilesOff
# 303 "data/maps/trickhouseFINALE/scripts.pory"
	special DrawWholeMapView
# 304 "data/maps/trickhouseFINALE/scripts.pory"
	playse SE_CLICK
# 305 "data/maps/trickhouseFINALE/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, trickhouseFINALE_EventScript_SetSwitch5On
# 306 "data/maps/trickhouseFINALE/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, trickhouseFINALE_EventScript_SetSwitch5Off
# 307 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 308 "data/maps/trickhouseFINALE/scripts.pory"

# 309 "data/maps/trickhouseFINALE/scripts.pory"
@ All the below switch scripts are unused leftover from R/S
# 310 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch1On::
# 311 "data/maps/trickhouseFINALE/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1
# 312 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 313 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 314 "data/maps/trickhouseFINALE/scripts.pory"

# 315 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch1Off::
# 316 "data/maps/trickhouseFINALE/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1
# 317 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 318 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 319 "data/maps/trickhouseFINALE/scripts.pory"

# 320 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch2On::
# 321 "data/maps/trickhouseFINALE/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2
# 322 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40FD, 1
# 323 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 324 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 325 "data/maps/trickhouseFINALE/scripts.pory"

# 326 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch2Off::
# 327 "data/maps/trickhouseFINALE/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2
# 328 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40FD, 0
# 329 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 330 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 331 "data/maps/trickhouseFINALE/scripts.pory"

# 332 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch3On::
# 333 "data/maps/trickhouseFINALE/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3
# 334 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40DC, 1
# 335 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 336 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 337 "data/maps/trickhouseFINALE/scripts.pory"

# 338 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch3Off::
# 339 "data/maps/trickhouseFINALE/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3
# 340 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40DC, 0
# 341 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 342 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 343 "data/maps/trickhouseFINALE/scripts.pory"

# 344 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch4On::
# 345 "data/maps/trickhouseFINALE/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4
# 346 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40FC, 1
# 347 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 348 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 349 "data/maps/trickhouseFINALE/scripts.pory"

# 350 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch4Off::
# 351 "data/maps/trickhouseFINALE/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4
# 352 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40FC, 0
# 353 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 354 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 355 "data/maps/trickhouseFINALE/scripts.pory"

# 356 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch5On::
# 357 "data/maps/trickhouseFINALE/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5
# 358 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40DB, 1
# 359 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 360 "data/maps/trickhouseFINALE/scripts.pory"
	end
# 361 "data/maps/trickhouseFINALE/scripts.pory"

# 362 "data/maps/trickhouseFINALE/scripts.pory"
trickhouseFINALE_EventScript_SetSwitch5Off::
# 363 "data/maps/trickhouseFINALE/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5
# 364 "data/maps/trickhouseFINALE/scripts.pory"
    setvar VAR_UNUSED_0x40DB, 0
# 365 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
# 366 "data/maps/trickhouseFINALE/scripts.pory"
	end

trickhouseFINALE_EventScript_Duditem::
# 372 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 373 "data/maps/trickhouseFINALE/scripts.pory"
	MSGBOX trickhouseFINALE_EventScript_Duditem_Text_0
# 374 "data/maps/trickhouseFINALE/scripts.pory"
	closemessage
# 375 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
	return


trickhouseFINALE_EventScript_realitem::
# 379 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 380 "data/maps/trickhouseFINALE/scripts.pory"
	MSGBOX trickhouseFINALE_EventScript_realitem_Text_0
# 381 "data/maps/trickhouseFINALE/scripts.pory"
	setflag FLAG_realitempicked
# 382 "data/maps/trickhouseFINALE/scripts.pory"
	setmetatile 3, 15, METATILE_TrickHousePuzzle_Door_Shuttered, FALSE
# 383 "data/maps/trickhouseFINALE/scripts.pory"
	closemessage
# 384 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
	return


trickhouseFINALE_EventScript_finalriddle::
# 388 "data/maps/trickhouseFINALE/scripts.pory"
	MSGBOX trickhouseFINALE_EventScript_finalriddle_Text_0
# 389 "data/maps/trickhouseFINALE/scripts.pory"
	MSGBOX trickhouseFINALE_EventScript_finalriddle_Text_1, MSGBOX_YESNO
# 390 "data/maps/trickhouseFINALE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq trickhouseFINALE_EventScript_finalriddle_1
# 404 "data/maps/trickhouseFINALE/scripts.pory"
	MSGBOX trickhouseFINALE_EventScript_finalriddle_Text_3
# 405 "data/maps/trickhouseFINALE/scripts.pory"
	closemessage
	return

trickhouseFINALE_EventScript_finalriddle_1:
# 391 "data/maps/trickhouseFINALE/scripts.pory"
	message trickhouseFINALE_EventScript_finalriddle_Text_2
# 392 "data/maps/trickhouseFINALE/scripts.pory"
	multichoice 25, 5, MULTI_RIDDLE_FINAL, 0
# 393 "data/maps/trickhouseFINALE/scripts.pory"
	closemessage
# 394 "data/maps/trickhouseFINALE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq trickhouseFINALE_EventScript_finalriddle_4
# 397 "data/maps/trickhouseFINALE/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq trickhouseFINALE_EventScript_finalriddle_5
# 400 "data/maps/trickhouseFINALE/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq trickhouseFINALE_EventScript_finalriddle_6
	return

trickhouseFINALE_EventScript_finalriddle_4:
# 395 "data/maps/trickhouseFINALE/scripts.pory"
	call RFFailed
	return

trickhouseFINALE_EventScript_finalriddle_5:
# 398 "data/maps/trickhouseFINALE/scripts.pory"
	call RFFailed
	return

trickhouseFINALE_EventScript_finalriddle_6:
# 401 "data/maps/trickhouseFINALE/scripts.pory"
	call RFCorrect
	return


RFFailed::
# 413 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 414 "data/maps/trickhouseFINALE/scripts.pory"
	MSGBOX RFFailed_Text_0
# 415 "data/maps/trickhouseFINALE/scripts.pory"
	waitmessage
# 416 "data/maps/trickhouseFINALE/scripts.pory"
	clearflag FLAG_realitempicked
# 417 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_UNUSED_0x40FD, 0
# 418 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_UNUSED_0x40DC, 0
# 419 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_UNUSED_0x40FC, 0
# 420 "data/maps/trickhouseFINALE/scripts.pory"
	setvar VAR_UNUSED_0x40DB, 0
# 421 "data/maps/trickhouseFINALE/scripts.pory"
	fadescreen FADE_TO_BLACK
# 422 "data/maps/trickhouseFINALE/scripts.pory"
	warpsilent MAP_TRICKHOUSE_FINALE, 20, 39
# 423 "data/maps/trickhouseFINALE/scripts.pory"
	waitstate
	return


RFCorrect::
# 427 "data/maps/trickhouseFINALE/scripts.pory"
	lockall
# 428 "data/maps/trickhouseFINALE/scripts.pory"
	MSGBOX RFCorrect_Text_0
# 429 "data/maps/trickhouseFINALE/scripts.pory"
	delay 20
# 430 "data/maps/trickhouseFINALE/scripts.pory"
	MSGBOX RFCorrect_Text_0
# 431 "data/maps/trickhouseFINALE/scripts.pory"
	delay 20
# 432 "data/maps/trickhouseFINALE/scripts.pory"
	MSGBOX RFCorrect_Text_1
# 433 "data/maps/trickhouseFINALE/scripts.pory"
	waitmessage
# 434 "data/maps/trickhouseFINALE/scripts.pory"
	closemessage
# 435 "data/maps/trickhouseFINALE/scripts.pory"
	applymovement 6, ominouswalkfr
# 436 "data/maps/trickhouseFINALE/scripts.pory"
	waitmovement 0
# 437 "data/maps/trickhouseFINALE/scripts.pory"
	removeobject 6
# 438 "data/maps/trickhouseFINALE/scripts.pory"
	releaseall
	return


# 442 "data/maps/trickhouseFINALE/scripts.pory"
ominouswalkfr:
# 443 "data/maps/trickhouseFINALE/scripts.pory"
	walk_up
# 443 "data/maps/trickhouseFINALE/scripts.pory"
	walk_up
# 443 "data/maps/trickhouseFINALE/scripts.pory"
	walk_up
# 443 "data/maps/trickhouseFINALE/scripts.pory"
	walk_up
# 443 "data/maps/trickhouseFINALE/scripts.pory"
	walk_up
# 443 "data/maps/trickhouseFINALE/scripts.pory"
	walk_up
# 443 "data/maps/trickhouseFINALE/scripts.pory"
	walk_up
	step_end

trickhouseFINALE_EventScript_Duditem_Text_0:
# 373 "data/maps/trickhouseFINALE/scripts.pory"
	.string "It's a Dud!$"

trickhouseFINALE_EventScript_realitem_Text_0:
# 380 "data/maps/trickhouseFINALE/scripts.pory"
	.string "A gear clicked somewhere in the floor$"

trickhouseFINALE_EventScript_finalriddle_Text_0:
# 388 "data/maps/trickhouseFINALE/scripts.pory"
	.string "This is it... one final riddle!$"

trickhouseFINALE_EventScript_finalriddle_Text_1:
# 389 "data/maps/trickhouseFINALE/scripts.pory"
	.string "Begin the Final riddle?$"

trickhouseFINALE_EventScript_finalriddle_Text_2:
# 391 "data/maps/trickhouseFINALE/scripts.pory"
	.string "Ha! lets see how attentive you've been!\n"
	.string "How many children have appeared\l"
	.string "through this hack?$"

trickhouseFINALE_EventScript_finalriddle_Text_3:
# 404 "data/maps/trickhouseFINALE/scripts.pory"
	.string ".... wut-$"

RFFailed_Text_0:
# 414 "data/maps/trickhouseFINALE/scripts.pory"
	.string "HAH! you players these days never pay\n"
	.string "attention!$"

RFCorrect_Text_0:
# 428 "data/maps/trickhouseFINALE/scripts.pory"
	.string ".....$"

RFCorrect_Text_1:
# 432 "data/maps/trickhouseFINALE/scripts.pory"
	.string "very well. meet me in the room ahead for\n"
	.string "our final showdown!$"
