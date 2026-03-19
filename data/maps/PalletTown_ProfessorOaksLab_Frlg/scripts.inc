# 1 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
.equ PLAYER_STARTER_NUM,      VAR_TEMP_1
# 3 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
.equ PLAYER_STARTER_SPECIES,  VAR_TEMP_2
# 4 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
.equ RIVAL_STARTER_SPECIES,   VAR_TEMP_3
# 5 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
.equ RIVAL_STARTER_ID,        VAR_TEMP_4
# 6 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 7 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
.equ SHOWED_OAK_COMPLETE_DEX, FLAG_TEMP_2
# 8 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 9 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Frlg_MapScripts::
# 10 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_ProfessorOaksLab_OnTransition
# 11 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_ProfessorOaksLab_OnWarp
# 12 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_ProfessorOaksLab_OnFrame
# 13 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.byte 0
# 14 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 15 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_OnTransition::
# 16 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_VISITED_OAKS_LAB
# 17 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene
# 18 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene
# 19 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished
# 20 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck
# 21 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 22 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 23 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck::
# 24 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_OAK_SKIP_22_RIVAL_CHECK
# 25 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 26 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 27 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished::
# 28 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9
# 29 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 30 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 31 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene::
# 32 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 11
# 33 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_UP
# 34 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	savebgm MUS_RG_OAK
# 35 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 36 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 37 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene::
# 38 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 11
# 39 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_UP
# 40 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 41 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 42 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_OnWarp::
# 43 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene
# 44 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.2byte 0
# 45 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 46 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene::
# 47 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 48 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 49 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 50 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_OnFrame::
# 51 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_ChooseStarterScene
# 52 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene
# 53 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.2byte 0
# 54 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 55 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene:: @ 8169002 
# 56 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 57 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_FACING, DIR_NORTH
# 58 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 59 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 60 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 61 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_OAKS_LAB_PROF_OAK
# 62 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 3
# 63 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 64 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 65 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 66 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 67 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
# 68 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 69 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 70 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene::
# 71 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakSightingsOfRareMons
# 72 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 73 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth
# 74 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth
# 75 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 76 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 77 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalJustLetMeHandleEverything
# 78 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 79 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNeedYourHelpTooNeedToSeePokedexes
# 80 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth
# 81 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest
# 82 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 83 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTookBothPokedexUnits
# 84 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 85 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 86 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth
# 87 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth
# 88 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast
# 89 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest
# 90 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_POKEDEX_1
# 91 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_POKEDEX_2
# 92 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 30
# 93 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNowTheseUnitsCanRecordMoreData
# 94 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 95 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 96 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 97 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 30
# 98 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 99 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 100 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 101 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 102 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 103 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 104 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_PlayersPokedexWasUpgraded
# 105 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 106 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 107 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 108 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	special EnableNationalPokedex
# 109 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMustReallyWorkToFillPokedex
# 110 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllCompleteThePokedex
# 111 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 112 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 113 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 114 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 115 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 116 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 117 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 118 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 119 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8
# 120 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 121 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 122 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 123 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth::
# 124 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 5, 10
# 125 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 126 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 127 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 128 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 129 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 130 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 131 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 132 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest::
# 133 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 134 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 135 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 136 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 137 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 138 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 139 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 140 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 141 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 142 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth::
# 143 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 144 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 145 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 146 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 147 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 148 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 149 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 150 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 151 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth::
# 152 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 153 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 154 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 155 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 156 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest::
# 157 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 158 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 159 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 160 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 161 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth::
# 162 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 163 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 164 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 165 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 166 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth::
# 167 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth
# 168 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 169 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 170 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 171 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 172 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 173 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast::
# 174 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 175 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 176 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 177 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 178 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 179 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest::
# 180 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 181 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 182 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 183 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 184 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk::
# 185 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 186 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 187 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 188 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 189 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_4
# 190 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 191 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 192 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth::
# 193 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 194 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 195 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 196 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 197 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_4
# 198 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 199 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 200 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_ChooseStarterScene::
# 201 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 202 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 203 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 204 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 205 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_OAKS_LAB_PROF_OAK
# 206 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 3
# 207 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 208 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 209 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 210 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 211 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 212 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 213 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 214 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	savebgm MUS_DUMMY
# 215 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 216 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalFedUpWithWaiting
# 217 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 218 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 60
# 219 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThreeMonsChooseOne
# 220 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 221 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 30
# 222 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalReact
# 223 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 224 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalNoFairWhatAboutMe
# 225 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBePatientRival
# 226 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 227 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 228 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 229 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 230 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakEnter::
# 231 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 232 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 233 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 234 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 235 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 236 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 237 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 238 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 239 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerEnter::
# 240 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 241 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 242 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 243 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 244 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 245 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 246 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 247 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 248 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 249 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 250 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalReact::
# 251 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_up
# 252 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_up
# 253 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 254 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 255 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LeaveStarterSceneTrigger::
# 256 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 257 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 258 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceDown
# 259 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 260 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHeyDontGoAwayYet
# 261 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 262 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp
# 263 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 264 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 265 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 266 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 267 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp::
# 268 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 269 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 270 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 271 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerLeft::
# 272 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 273 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 1
# 274 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 275 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 276 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 277 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerMid::
# 278 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 279 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 2
# 280 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 281 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 282 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 283 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerRight::
# 284 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 285 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 3
# 286 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 287 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 288 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 289 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattle::
# 290 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 291 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 292 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 293 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 294 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 295 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 296 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLetsCheckOutMons
# 297 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 298 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceDown
# 299 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 300 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 0, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander
# 301 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur
# 302 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle
# 303 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 304 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 305 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
@ The scripts for the rival approaching the player for battle are a bit bloated because
# 306 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
@ both the player and rival can be in 3 different positions, so theres 9 different approaches
# 307 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
@ NOTE: Names below refer to the Rival's mon (e.g. for RivalBattleSquirtle, player has Charmander)
# 308 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 309 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle::
# 310 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft
# 311 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid
# 312 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight
# 313 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 314 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 315 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft::
# 316 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft
# 317 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 318 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 319 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 320 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 321 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid::
# 322 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid
# 323 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 324 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 325 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 326 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 327 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight::
# 328 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight
# 329 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 330 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 331 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 332 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 333 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle::
# 334 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_SQUIRTLE, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 335 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 336 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 337 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 338 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft::
# 339 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 340 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 341 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 342 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 343 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 344 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 345 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 346 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 347 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid::
# 348 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 349 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 350 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 351 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 352 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 353 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 354 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 355 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight::
# 356 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 357 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 358 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 359 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 360 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 361 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 362 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander::
# 363 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft
# 364 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid
# 365 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight
# 366 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 367 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 368 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft::
# 369 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft
# 370 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 371 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 372 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 373 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 374 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid::
# 375 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid
# 376 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 377 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 378 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 379 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 380 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight::
# 381 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight
# 382 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 383 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 384 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 385 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 386 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander::
# 387 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_CHARMANDER, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 388 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 389 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 390 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 391 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft::
# 392 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 393 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 394 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 395 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 396 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 397 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 398 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 399 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 400 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 401 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid::
# 402 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 403 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 404 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 405 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 406 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 407 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 408 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 409 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 410 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight::
# 411 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 412 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 413 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 414 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 415 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 416 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 417 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 418 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur::
# 419 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft
# 420 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid
# 421 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight
# 422 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 423 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 424 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft::
# 425 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft
# 426 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 427 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 428 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 429 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 430 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid::
# 431 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid
# 432 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 433 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 434 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 435 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 436 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight::
# 437 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight
# 438 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 439 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 440 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 441 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 442 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur::
# 443 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_BULBASAUR, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 444 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 445 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 446 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 447 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft::
# 448 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 449 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 450 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 451 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 452 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 453 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 454 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 455 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid::
# 456 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 457 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 458 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 459 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 460 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 461 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 462 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight::
# 463 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 464 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 465 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 466 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 467 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 468 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle::
# 469 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	special HealPlayerParty
# 470 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon
# 471 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 472 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 473 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft
# 474 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid
# 475 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight
# 476 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 477 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playse SE_EXIT
# 478 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 479 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
# 480 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
# 481 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 482 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 483 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 484 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft::
# 485 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft
# 486 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 487 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
# 488 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 489 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 490 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid::
# 491 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid
# 492 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 493 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
# 494 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 495 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 496 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight::
# 497 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight
# 498 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight
# 499 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
# 500 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 501 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 502 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft::
# 503 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 504 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 505 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 506 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 507 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 508 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 509 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 510 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 511 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 512 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight::
# 513 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 514 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 515 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 516 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 517 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 518 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 519 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 520 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 521 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 522 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid::
# 523 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 524 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 525 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 526 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 527 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 528 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 529 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 530 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 531 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 532 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 533 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle::
# 534 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 535 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 536 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_right
# 537 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 538 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 539 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 540 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 541 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight::
# 542 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 543 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 544 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_left
# 545 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 546 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 547 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 548 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 549 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Rival::
# 550 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 551 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 552 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter
# 553 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter
# 554 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround
# 555 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 556 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 557 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 558 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter::
# 559 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer
# 560 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 561 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 562 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 563 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter::
# 564 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher
# 565 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 566 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 567 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 568 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak::
# 569 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 570 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 571 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set SHOWED_OAK_COMPLETE_DEX, PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex
# 572 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 573 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 574 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene
# 575 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 576 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls
# 577 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene
# 578 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4, PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow
# 579 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon
# 580 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose
# 581 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 582 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 583 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 584 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex::
# 585 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 586 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 587 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 588 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 589 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon::
# 590 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon
# 591 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 592 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 593 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 594 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow::
# 595 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow
# 596 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 597 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 598 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 599 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene::
# 600 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe
# 601 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 602 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 603 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel
# 604 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 605 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 606 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 607 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeitem ITEM_OAKS_PARCEL
# 608 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered
# 609 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 610 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGramps
# 611 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 612 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth
# 613 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth
# 614 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 615 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 616 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 617 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor
# 618 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 619 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 30
# 620 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playse SE_PIN
# 621 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_ExclamationMark
# 622 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 623 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_Delay48
# 624 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 625 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth
# 626 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast
# 627 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest
# 628 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth
# 629 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo
# 630 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 631 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth
# 632 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth
# 633 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast
# 634 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest
# 635 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk
# 636 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 637 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 40
# 638 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou
# 639 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 640 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterUp
# 641 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 642 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 643 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 10
# 644 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 645 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 25
# 646 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 647 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 648 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 649 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 650 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 10
# 651 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 652 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 653 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak
# 654 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 655 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 656 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 657 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 658 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	special SetUnlockedPokedexFlags
# 659 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 660 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese
# 661 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 662 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakExplainCatching
# 663 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	famechecker FAMECHECKER_OAK, 1
# 664 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream
# 665 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps
# 666 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth
# 667 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth
# 668 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 669 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 670 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap
# 671 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 672 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 673 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 674 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 675 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 676 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 677 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 678 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 679 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 680 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 681 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 682 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
# 683 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 684 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
    call PalletTown_ProfessorOaksLab_GiveOtherStarters
# 685 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 686 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 687 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 688 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth::
# 689 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 690 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 691 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 692 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 693 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth::
# 694 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth
# 695 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 696 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 697 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 698 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast::
# 699 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 700 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast
# 701 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 702 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 703 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 704 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest::
# 705 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 706 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 707 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 708 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 709 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast::
# 710 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 711 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 712 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_right
# 713 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 714 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 715 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver::
# 716 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 717 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 718 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 719 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 720 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth::
# 721 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 722 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 723 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 724 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 725 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth::
# 726 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 727 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 728 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 729 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 730 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth::
# 731 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth
# 732 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 733 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 734 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 735 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 736 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 737 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast::
# 738 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 739 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 740 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 741 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 742 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 743 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest::
# 744 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 745 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 746 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 747 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 748 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast::
# 749 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 750 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 751 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 752 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 753 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 754 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk::
# 755 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 756 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 757 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_left
# 758 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 759 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 760 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk::
# 761 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 762 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 763 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 764 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 765 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 766 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 767 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth::
# 768 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 769 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 770 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 771 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 772 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_right
# 773 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 774 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 775 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls::
# 776 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 777 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetFrlgPokedexCount
# 778 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 779 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 780 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 781 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 782 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_0x8009, 1, PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls  @ Player only has starter
# 783 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 784 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 785 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 786 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedex::
# 787 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 788 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_OAK_SAW_DEX_COMPLETION, PalletTown_ProfessorOaksLab_EventScript_DexCompleted
# 789 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 790 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 791 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 792 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexCompleted::
# 793 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 794 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 40
# 795 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PokedexRating_Text_Wroooaaarrr
# 796 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 797 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth
# 798 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth
# 799 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast
# 800 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest
# 801 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 802 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 803 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 804 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 70
# 805 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 806 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag SHOWED_OAK_COMPLETE_DEX
# 807 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 808 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 809 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 810 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth::
# 811 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth
# 812 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 813 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 814 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 815 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth::
# 816 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth
# 817 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 818 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 819 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 820 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast::
# 821 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedEast
# 822 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 823 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 824 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 825 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest::
# 826 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedWest
# 827 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 828 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 829 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 830 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth::
# 831 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_down
# 832 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_down
# 833 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_down
# 834 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_down
# 835 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_down
# 836 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_down
# 837 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 838 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 839 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth::
# 840 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_up
# 841 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_up
# 842 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_up
# 843 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_up
# 844 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_up
# 845 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_up
# 846 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 847 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 848 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedEast::
# 849 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_left
# 850 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_left
# 851 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_left
# 852 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_left
# 853 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_left
# 854 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_left
# 855 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 856 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 857 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedWest::
# 858 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_right
# 859 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_right
# 860 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_right
# 861 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_right
# 862 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_right
# 863 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_right
# 864 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 865 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 866 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
@ Unused
# 867 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_Search:
# 868 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 869 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 870 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 871 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_right
# 872 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 873 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 874 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 875 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_left
# 876 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 877 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 878 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 879 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 880 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 881 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 882 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 883 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_left
# 884 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 885 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 886 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 887 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_right
# 888 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 889 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 890 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 891 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 892 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 893 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 894 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
@ Unused
# 895 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_VerticalPacing:
# 896 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 897 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 898 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 899 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_down
# 900 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 901 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 902 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 903 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 904 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 905 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 906 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene::
# 907 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 908 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 909 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_lt VAR_0x8009, 60, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 910 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 911 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 30
# 912 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer
# 913 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
# 914 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 915 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 916 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene::
# 917 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 918 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 919 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 920 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls::
# 921 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_OAK_SKIP_22_RIVAL_CHECK, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 922 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls
# 923 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	checkitem ITEM_POKE_BALL
# 924 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls
# 925 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 926 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 927 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 928 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls::
# 929 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ROUTE22, 2, PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls
# 930 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 931 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 932 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 933 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls::
# 934 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex
# 935 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 936 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL
# 937 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 938 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 939 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 940 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait::
# 941 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMonsAroundWorldWait
# 942 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 943 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 944 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 945 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls::
# 946 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakComeSeeMeSometime
# 947 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 948 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 949 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 950 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth::
# 951 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 5, 10
# 952 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 953 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 954 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 955 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 956 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 957 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 958 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest::
# 959 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 960 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 961 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 962 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 963 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 964 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 965 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 966 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 967 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth::
# 968 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 969 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 970 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 971 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 972 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 973 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 974 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 975 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth::
# 976 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 977 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 978 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 15
# 979 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 980 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 981 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 982 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 983 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest::
# 984 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 985 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 986 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 15
# 987 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 988 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 989 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 990 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 991 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 992 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast::
# 993 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 994 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 995 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 15
# 996 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 997 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 998 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 999 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1000 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1001 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth::
# 1002 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_FacePlayer
# 1003 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1004 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1005 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1006 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1007 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth::
# 1008 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 1009 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1010 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1011 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1012 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1013 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest::
# 1014 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_FacePlayer
# 1015 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1016 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1017 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1018 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1019 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth::
# 1020 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 1021 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1022 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1023 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1024 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1025 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExit::
# 1026 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1027 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1028 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1029 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1030 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth::
# 1031 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1032 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1033 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1034 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1035 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest::
# 1036 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_4
# 1037 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 1038 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1039 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1040 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth::
# 1041 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 1042 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 1043 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 1044 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 1045 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 1046 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 1047 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 1048 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_left
# 1049 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1050 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1051 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalEnter::
# 1052 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 1053 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 1054 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 1055 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 1056 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 1057 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 1058 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1059 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1060 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExit::
# 1061 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1062 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1063 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1064 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1065 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1066 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1067 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1068 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1069 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
# 1070 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 1071 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 1072 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_NUM, 0
# 1073 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_BULBASAUR
# 1074 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_CHARMANDER
# 1075 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_CHARMANDER_BALL
# 1076 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1077 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1078 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1079 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1080 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1081 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1082 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice::
# 1083 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceRight
# 1084 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1085 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	showmonpic PLAYER_STARTER_SPECIES, 10, 3
# 1086 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1087 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 0, PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur
# 1088 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 1, PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle
# 1089 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander
# 1090 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1091 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1092 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur::
# 1093 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingBulbasaur, MSGBOX_YESNO
# 1094 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1095 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1096 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1097 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1098 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle::
# 1099 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingSquirtle, MSGBOX_YESNO
# 1100 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1101 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1102 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1103 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1104 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander::
# 1105 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingCharmander, MSGBOX_YESNO
# 1106 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1107 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1108 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1109 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1110 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter::
# 1111 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	hidemonpic
# 1112 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1113 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1114 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1115 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ChoseStarter::
# 1116 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	hidemonpic
# 1117 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 1118 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 1119 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 1120 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1121 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 1122 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	givemon PLAYER_STARTER_SPECIES, 5
# 1123 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	copyvar VAR_STARTER_MON, PLAYER_STARTER_NUM
# 1124 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, PLAYER_STARTER_SPECIES
# 1125 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 1126 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 1127 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 1128 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 1129 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 1130 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_GiveNicknameToStarter
# 1131 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
# 1132 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1133 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1134 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
EventScript_GiveNicknameToStarter::
# 1135 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 1136 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 1137 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
# 1138 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1139 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1140 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter::
# 1141 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 1142 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 0, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander
# 1143 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 1, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur
# 1144 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle
# 1145 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1146 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1147 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander::
# 1148 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander
# 1149 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1150 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1151 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1152 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1153 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle::
# 1154 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle
# 1155 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1156 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1157 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1158 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1159 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur::
# 1160 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur
# 1161 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1162 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1163 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1164 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1165 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter::
# 1166 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1167 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen
# 1168 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject RIVAL_STARTER_ID
# 1169 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 1170 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, RIVAL_STARTER_SPECIES
# 1171 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak
# 1172 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 1173 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 1174 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 1175 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 1176 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call_if_set FLAG_OPENED_START_MENU, PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene
# 1177 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1178 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1179 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1180 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene::
# 1181 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 1182 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1183 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1184 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander::
# 1185 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1186 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1187 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1188 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1189 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1190 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1191 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1192 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 1193 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1194 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1195 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle::
# 1196 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1197 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1198 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1199 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1200 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1201 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 1202 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1203 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1204 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur::
# 1205 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1206 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1207 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1208 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1209 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 1210 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1211 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1212 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
# 1213 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 1214 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 1215 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_NUM, 1
# 1216 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_SQUIRTLE
# 1217 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_BULBASAUR
# 1218 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_BULBASAUR_BALL
# 1219 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1220 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1221 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1222 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1223 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1224 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1225 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
# 1226 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 1227 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 1228 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_NUM, 2
# 1229 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_CHARMANDER
# 1230 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_SQUIRTLE
# 1231 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_SQUIRTLE_BALL
# 1232 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1233 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1234 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1235 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1236 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1237 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1238 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LastPokeBall::
# 1239 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OaksLastMon
# 1240 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1241 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1242 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1243 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1::
# 1244 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 1245 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 1246 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear
# 1247 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1248 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1249 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1250 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1251 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear::
# 1252 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	famechecker FAMECHECKER_OAK, 5
# 1253 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsGoingToHaveRadioShow
# 1254 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1255 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1256 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1257 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2::
# 1258 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 1259 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 1260 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear
# 1261 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1262 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1263 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1264 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1265 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear::
# 1266 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	famechecker FAMECHECKER_DAISY, 0
# 1267 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons
# 1268 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1269 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1270 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1271 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide3::
# 1272 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 1273 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 1274 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	famechecker FAMECHECKER_OAK, 2
# 1275 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons
# 1276 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1277 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1278 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1279 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Pokedex::
# 1280 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia, MSGBOX_NPC
# 1281 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1282 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1283 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Computer::
# 1284 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_EmailMessage, MSGBOX_SIGN
# 1285 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1286 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1287 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LeftSign::
# 1288 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu, MSGBOX_SIGN
# 1289 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1290 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1291 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSign::
# 1292 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 1293 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RightSignAlt
# 1294 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu
# 1295 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 1296 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1297 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1298 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSignAlt::
# 1299 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints
# 1300 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 1301 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1302 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1303 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround::
# 1304 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: What, it's only {PLAYER}?\n"
# 1305 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Gramps isn't around.$"
# 1306 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1307 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalFedUpWithWaiting::
# 1308 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Gramps!\n"
# 1309 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I'm fed up with waiting!$"
# 1310 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1311 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalNoFairWhatAboutMe::
# 1312 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Hey! Gramps! No fair!\n"
# 1313 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "What about me?$"
# 1314 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1315 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer::
# 1316 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Heh, I don't need to be\n"
# 1317 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "greedy like you. I'm mature!\p"
# 1318 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Go ahead and choose, {PLAYER}!$"
# 1319 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1320 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen::
# 1321 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: I'll take this one, then!$"
# 1322 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1323 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak::
# 1324 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL} received the {STR_VAR_1}\n"
# 1325 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "from PROF. OAK!$"
# 1326 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1327 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher::
# 1328 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: My POKéMON looks a lot\n"
# 1329 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "tougher than yours.$"
# 1330 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1331 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalLetsCheckOutMons::
# 1332 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Wait, {PLAYER}!\n"
# 1333 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Let's check out our POKéMON!\p"
# 1334 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Come on, I'll take you on!$"
# 1335 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1336 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalDefeat::
# 1337 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "WHAT?\n"
# 1338 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Unbelievable!\l"
# 1339 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I picked the wrong POKéMON!$"
# 1340 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1341 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
@ Also used for early Route 22 battle
# 1342 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
Text_RivalVictory::
# 1343 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Yeah!\n"
# 1344 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Am I great or what?$"
# 1345 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1346 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon::
# 1347 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Okay! I'll make my\n"
# 1348 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON battle to toughen it up!\p"
# 1349 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER}! Gramps!\n"
# 1350 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Smell you later!$"
# 1351 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1352 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalGramps::
# 1353 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Gramps!$"
# 1354 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1355 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor::
# 1356 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: I almost forgot!\n"
# 1357 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "What did you call me for?$"
# 1358 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1359 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps::
# 1360 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: All right, Gramps!\n"
# 1361 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Leave it all to me!$"
# 1362 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1363 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap::
# 1364 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER}, I hate to say it, but you\n"
# 1365 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "won't be necessary for this.\p"
# 1366 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I know! I'll borrow a TOWN MAP\n"
# 1367 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "from my sis!\p"
# 1368 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I'll tell her not to lend you one,\n"
# 1369 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER}! Hahaha!\p"
# 1370 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Don't bother coming around to\n"
# 1371 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "my place after this!$"
# 1372 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1373 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakThreeMonsChooseOne::
# 1374 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: {RIVAL}?\n"
# 1375 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Let me think…\p"
# 1376 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Oh, that's right, I told you to\n"
# 1377 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "come! Just wait!\p"
# 1378 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Here, {PLAYER}.\p"
# 1379 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "There are three POKéMON here.\p"
# 1380 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Haha!\p"
# 1381 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "The POKéMON are held inside\n"
# 1382 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "these POKé BALLS.\p"
# 1383 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "When I was young, I was a serious\n"
# 1384 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON TRAINER.\p"
# 1385 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "But now, in my old age, I have\n"
# 1386 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "only these three left.\p"
# 1387 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You can have one.\n"
# 1388 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Go on, choose!$"
# 1389 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1390 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakBePatientRival::
# 1391 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Be patient, {RIVAL}.\n"
# 1392 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You can have one, too!$"
# 1393 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1394 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose::
# 1395 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Now, {PLAYER}.\p"
# 1396 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Inside those three POKé BALLS are\n"
# 1397 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON.\p"
# 1398 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Which one will you choose for\n"
# 1399 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "yourself?$"
# 1400 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1401 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakHeyDontGoAwayYet::
# 1402 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Hey!\n"
# 1403 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Don't go away yet!$"
# 1404 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1405 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakChoosingCharmander::
# 1406 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ah! CHARMANDER is your choice.\n"
# 1407 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You should raise it patiently.\p"
# 1408 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "So, {PLAYER}, you're claiming the\n"
# 1409 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "FIRE POKéMON CHARMANDER?$"
# 1410 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1411 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakChoosingSquirtle::
# 1412 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hm! SQUIRTLE is your choice.\n"
# 1413 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "It's one worth raising.\p"
# 1414 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "So, {PLAYER}, you've decided on the\n"
# 1415 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "WATER POKéMON SQUIRTLE?$"
# 1416 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1417 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakChoosingBulbasaur::
# 1418 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I see! BULBASAUR is your choice.\n"
# 1419 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "It's very easy to raise.\p"
# 1420 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "So, {PLAYER}, you want to go with\n"
# 1421 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "the GRASS POKéMON BULBASAUR?$"
# 1422 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1423 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic::
# 1424 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "This POKéMON is really quite\n"
# 1425 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "energetic!$"
# 1426 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1427 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak::
# 1428 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
# 1429 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "from PROF. OAK!$"
# 1430 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1431 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon::
# 1432 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: If a wild POKéMON appears,\n"
# 1433 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "your POKéMON can battle it.\p"
# 1434 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "With it at your side, you should be\n"
# 1435 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "able to reach the next town.$"
# 1436 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1437 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow::
# 1438 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: {PLAYER}, raise your young\n"
# 1439 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON by making it battle.\p"
# 1440 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "It has to battle for it to grow.$"
# 1441 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1442 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe::
# 1443 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Oh, {PLAYER}!\n"
# 1444 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "How is my old POKéMON?\p"
# 1445 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Well, it seems to be growing more\n"
# 1446 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "attached to you.\p"
# 1447 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You must be talented as a POKéMON\n"
# 1448 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "TRAINER.\p"
# 1449 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "What's that?\n"
# 1450 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You have something for me?$"
# 1451 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1452 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel::
# 1453 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER} delivered OAK'S PARCEL.$"
# 1454 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1455 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered::
# 1456 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ah! \n"
# 1457 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "It's the custom POKé BALL!\p"
# 1458 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I had it on order.\n"
# 1459 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Thank you!$"
# 1460 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1461 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo::
# 1462 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Oh, right!\n"
# 1463 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I have a request for you two.$"
# 1464 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1465 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk::
# 1466 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "On the desk there is my invention,\n"
# 1467 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "the POKéDEX!\p"
# 1468 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "It automatically records data on\n"
# 1469 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON you've seen or caught.\p"
# 1470 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "It's a high-tech encyclopedia!$"
# 1471 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1472 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou::
# 1473 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: {PLAYER} and {RIVAL}.\n"
# 1474 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Take these with you.$"
# 1475 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1476 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak::
# 1477 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER} received the POKéDEX\n"
# 1478 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "from PROF. OAK.$"
# 1479 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1480 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese::
# 1481 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: You can't get detailed data\n"
# 1482 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "on POKéMON by just seeing them.\p"
# 1483 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You must catch them to obtain\n"
# 1484 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "complete data.\p"
# 1485 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "So, here are some tools for\n"
# 1486 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "catching wild POKéMON.$"
# 1487 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1488 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls::
# 1489 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER} received five POKé BALLS.$"
# 1490 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1491 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakExplainCatching::
# 1492 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "When a wild POKéMON appears,\n"
# 1493 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "it's fair game.\p"
# 1494 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Just throw a POKé BALL at it and\n"
# 1495 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "try to catch it!\p"
# 1496 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "This won't always work, however.\p"
# 1497 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "A healthy POKéMON can escape.\n"
# 1498 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You have to be lucky!$"
# 1499 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1500 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream::
# 1501 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "To make a complete guide on all\n"
# 1502 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "the POKéMON in the world…\p"
# 1503 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "That was my dream!\p"
# 1504 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "But, I'm too old.\n"
# 1505 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I can't get the job done.\p"
# 1506 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "So, I want you two to fulfill my\n"
# 1507 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "dream for me.\p"
# 1508 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Get moving, you two.\p"
# 1509 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "This is a great undertaking in\n"
# 1510 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON history!$"
# 1511 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1512 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakMonsAroundWorldWait::
# 1513 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON around the world wait for\n"
# 1514 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "you, {PLAYER}!$"
# 1515 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1516 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex::
# 1517 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ah, {PLAYER}!\n"
# 1518 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "How is your POKéDEX shaping up?\p"
# 1519 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL} has already caught some\n"
# 1520 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON and added to the data.\p"
# 1521 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "So, {PLAYER}, let's have a look at\n"
# 1522 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "your POKéDEX.\p"
# 1523 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "…What's the matter?\n"
# 1524 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You've added no new data at all.\p"
# 1525 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I'll give you these, so do try a\n"
# 1526 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "little harder.$"
# 1527 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1528 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakComeSeeMeSometime::
# 1529 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Come see me sometime.\p"
# 1530 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "After all, I want to know how your\n"
# 1531 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéDEX is coming along.$"
# 1532 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1533 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia::
# 1534 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "It's like an encyclopedia, but the\n"
# 1535 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "pages are blank.$"
# 1536 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1537 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls::
# 1538 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Those are POKé BALLS.\n"
# 1539 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "They contain POKéMON!$"
# 1540 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1541 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OaksLastMon::
# 1542 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "That's PROF. OAK's last POKéMON.$"
# 1543 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1544 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu::
# 1545 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Press START to open the MENU!$"
# 1546 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1547 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu::
# 1548 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "The SAVE option is on the MENU.\n"
# 1549 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Use it regularly.$"
# 1550 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1551 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints::
# 1552 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "All POKéMON types have strong and\n"
# 1553 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "weak points against others.$"
# 1554 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1555 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_EmailMessage::
# 1556 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "There's an e-mail message here.\p"
# 1557 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "…\p"
# 1558 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Finally!\n"
# 1559 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "The ultimate TRAINERS of the\l"
# 1560 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON LEAGUE are ready to\l"
# 1561 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "take on all comers!\p"
# 1562 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Bring your best POKéMON and see\n"
# 1563 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "how you rate as a TRAINER!\p"
# 1564 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON LEAGUE HQ\n"
# 1565 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "INDIGO PLATEAU\p"
# 1566 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "PROF. OAK, please visit us!\n"
# 1567 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "…$"
# 1568 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1569 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide::
# 1570 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I study POKéMON as PROF. OAK's\n"
# 1571 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "AIDE.$"
# 1572 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1573 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons::
# 1574 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hi, {PLAYER}. I bet you've become\n"
# 1575 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "good friends with your POKéMON.\p"
# 1576 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "By the way, did you know about\n"
# 1577 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "DAISY?\p"
# 1578 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "If you show DAISY your POKéMON,\n"
# 1579 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "she can tell how much it likes you.\p"
# 1580 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Occasionally, she will even groom\n"
# 1581 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "a POKéMON for you.\p"
# 1582 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "This is a secret, so please don't\n"
# 1583 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "tell anyone.$"
# 1584 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1585 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakIsGoingToHaveRadioShow::
# 1586 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "PROF. OAK is going to have his own\n"
# 1587 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "radio show soon.\p"
# 1588 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "The program will be called PROF.\n"
# 1589 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK's POKéMON SEMINAR.$"
# 1590 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1591 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons::
# 1592 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "PROF. OAK may not look like much,\n"
# 1593 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "but he's the authority on POKéMON.\p"
# 1594 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Many POKéMON TRAINERS hold him in\n"
# 1595 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "high regard.$"
# 1596 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1597 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer::
# 1598 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ah, now this is excellent!\p"
# 1599 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER}, I have another important\n"
# 1600 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "favor to ask of you.\p"
# 1601 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I need you to listen closely.$"
# 1602 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1603 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakSightingsOfRareMons::
# 1604 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Recently, there have been sightings\n"
# 1605 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "of many rare POKéMON species.\p"
# 1606 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I'm talking about POKéMON that\n"
# 1607 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "have never been seen in KANTO.\p"
# 1608 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I would love to go see things for\n"
# 1609 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "myself, but I'm much too old.\p"
# 1610 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Since I can't do it, {PLAYER}, I'd\n"
# 1611 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "like you to go in my place.$"
# 1612 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1613 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalJustLetMeHandleEverything::
# 1614 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Hey, I heard that!\p"
# 1615 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Gramps, what's with favoring\n"
# 1616 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER} over me all the time?\p"
# 1617 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I went and collected more POKéMON,\n"
# 1618 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "and faster, too.\p"
# 1619 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You should just let me handle\n"
# 1620 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "everything.$"
# 1621 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1622 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakNeedYourHelpTooNeedToSeePokedexes::
# 1623 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: I know, I know.\n"
# 1624 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Of course I need your help, too.\p"
# 1625 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Now, I need to see both your\n"
# 1626 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéDEXES.$"
# 1627 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1628 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakTookBothPokedexUnits::
# 1629 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "PROF. OAK took both POKéDEX\n"
# 1630 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "units.$"
# 1631 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1632 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakNowTheseUnitsCanRecordMoreData::
# 1633 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "… … …  … … …\p"
# 1634 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "… … …  … … …\p"
# 1635 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "…And that's done!\p"
# 1636 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Now these units can record data on\n"
# 1637 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "a lot more POKéMON.$"
# 1638 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1639 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_PlayersPokedexWasUpgraded::
# 1640 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER}'s POKéDEX was upgraded!$"
# 1641 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1642 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakMustReallyWorkToFillPokedex::
# 1643 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Now, {PLAYER} and {RIVAL}!\p"
# 1644 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "This time, you really must work\n"
# 1645 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "towards filling your POKéDEXES.\p"
# 1646 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I urge you to make them the best\n"
# 1647 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "and the most complete of all time!\p"
# 1648 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Truly, this is a monumentally great\n"
# 1649 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "undertaking in POKéMON history!$"
# 1650 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1651 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalIllCompleteThePokedex::
# 1652 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Gramps, calm down.\n"
# 1653 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Don't get so excited.\p"
# 1654 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I'll get the POKéDEX completed,\n"
# 1655 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "don't you worry about a thing.\p"
# 1656 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I think I'll try looking around\n"
# 1657 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "ONE ISLAND first…\p"
# 1658 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Anyways, I'm outta here!$"

PalletTown_ProfessorOaksLab_GiveOtherStarters::
# 1662 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1663 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1664 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_GiveOtherStarters_Text_0
# 1665 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 1667 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq PalletTown_ProfessorOaksLab_GiveOtherStarters_2
# 1678 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq PalletTown_ProfessorOaksLab_GiveOtherStarters_3
# 1689 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq PalletTown_ProfessorOaksLab_GiveOtherStarters_4
PalletTown_ProfessorOaksLab_GiveOtherStarters_1:
# 1699 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_GiveOtherStarters_Text_4
# 1700 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
	return

PalletTown_ProfessorOaksLab_GiveOtherStarters_2:
# 1668 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_GiveOtherStarters_Text_1
# 1669 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 1670 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
# 1671 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CHARMANDER
# 1672 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_GiveOtherStartersNickName
# 1673 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5
# 1674 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SQUIRTLE
# 1675 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_GiveOtherStartersNickName
	goto PalletTown_ProfessorOaksLab_GiveOtherStarters_1

PalletTown_ProfessorOaksLab_GiveOtherStarters_3:
# 1679 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_GiveOtherStarters_Text_2
# 1680 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 1681 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
# 1682 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_BULBASAUR
# 1683 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_GiveOtherStartersNickName
# 1684 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
# 1685 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CHARMANDER
# 1686 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_GiveOtherStartersNickName
	goto PalletTown_ProfessorOaksLab_GiveOtherStarters_1

PalletTown_ProfessorOaksLab_GiveOtherStarters_4:
# 1690 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_GiveOtherStarters_Text_3
# 1691 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 1692 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
# 1693 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_BULBASAUR
# 1694 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_GiveOtherStartersNickName
# 1695 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5
# 1696 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SQUIRTLE
# 1697 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_GiveOtherStartersNickName
	goto PalletTown_ProfessorOaksLab_GiveOtherStarters_1


PalletTown_ProfessorOaksLab_GiveOtherStartersNickName::
# 1705 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 1706 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 1707 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_0
# 1708 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 1709 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PalletTown_ProfessorOaksLab_GiveOtherStartersNickName_2
PalletTown_ProfessorOaksLab_GiveOtherStartersNickName_1:
	return

PalletTown_ProfessorOaksLab_GiveOtherStartersNickName_2:
# 1710 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto PalletTown_ProfessorOaksLab_GiveOtherStartersNickName_1


PalletTown_ProfessorOaksLab_GiveOtherStarters_Text_0:
# 1664 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Heavens is that boy far too hasty.\nTo help you in this great undertaking,\nI wanted to give you some rare Pokémon.$"

PalletTown_ProfessorOaksLab_GiveOtherStarters_Text_1:
# 1668 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Since you already have Bulbasaur,\n I'll give you Charmander and Squirtle$"

PalletTown_ProfessorOaksLab_GiveOtherStarters_Text_2:
# 1679 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Since you already have Squirtle,\n I'll give you Bulbasaur and Charmander$"

PalletTown_ProfessorOaksLab_GiveOtherStarters_Text_3:
# 1690 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Since you already have Charmander,\n I'll give you Bulbasaur and Squirtle$"

PalletTown_ProfessorOaksLab_GiveOtherStarters_Text_4:
# 1699 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL} could stand to slow down and\nlearn a thing or two from you.$"
