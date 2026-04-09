# 1 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 2 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
.equ BILL_IN_TELEPORTER,     FLAG_TEMP_2
# 3 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
.equ RETURN_AFTER_SS_TICKET, FLAG_TEMP_3
# 4 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 5 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Frlg_MapScripts::
# 6 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route25_SeaCottage_OnTransition
# 7 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 9 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_OnTransition::
# 10 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call_if_unset FLAG_HELPED_BILL_IN_SEA_COTTAGE, Route25_SeaCottage_EventScript_HideClefairyBill
# 11 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call_if_set FLAG_GOT_SS_TICKET, Route25_SeaCottage_EventScript_SetReturnedAfterSSTicket
# 12 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 13 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 14 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_HideClefairyBill::
# 15 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	clearflag FLAG_HIDE_BILL_CLEFAIRY
# 16 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setobjectxyperm LOCALID_BILL_HUMAN, 3, 3
# 17 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	return
# 18 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 19 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_SetReturnedAfterSSTicket::
# 20 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag RETURN_AFTER_SS_TICKET
# 21 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	return
# 22 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 23 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_Bill::
# 24 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	lock
# 25 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	faceplayer
# 26 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_set RETURN_AFTER_SS_TICKET, Route25_SeaCottage_EventScript_BillGoLookAtPC
# 27 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_SS_TICKET, Route25_SeaCottage_EventScript_BillGoToSSAnne
# 28 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_set FLAG_HELPED_BILL_IN_SEA_COTTAGE, Route25_SeaCottage_EventScript_BillGiveSSTicket
# 29 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	checkplayergender
# 30 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route25_SeaCottage_EventScript_BillAskForHelpMale
# 31 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route25_SeaCottage_EventScript_BillAskForHelpFemale
# 32 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 33 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 34 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillAskForHelpMale::
# 35 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_ImBillHelpMeOutPal, MSGBOX_YESNO
# 36 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillAskForHelp
# 37 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 38 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 39 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillAskForHelpFemale::
# 40 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_ImBillHelpMeOutLady, MSGBOX_YESNO
# 41 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillAskForHelp
# 42 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 43 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 44 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillAskForHelp::
# 45 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route25_SeaCottage_EventScript_DeclineHelpBill
# 46 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_RunCellSeparationOnPC
# 47 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	closemessage
# 48 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay 10
# 49 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route25_SeaCottage_EventScript_BillWalkToTeleporterSouth
# 50 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route25_SeaCottage_EventScript_BillWalkToTeleporter
# 51 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route25_SeaCottage_EventScript_BillWalkToTeleporter
# 52 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route25_SeaCottage_EventScript_BillWalkToTeleporter
# 53 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	opendoor 10, 3
# 54 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitdooranim
# 55 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_BILL_CLEFAIRY, Route25_SeaCottage_Movement_BillEnterTeleporter
# 56 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	removeobject LOCALID_BILL_CLEFAIRY
# 58 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	playse SE_CONTEST_CURTAIN_FALL
# 59 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	closedoor 10, 3
# 60 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitdooranim
# 61 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag BILL_IN_TELEPORTER
# 62 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	release
# 63 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 64 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 65 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
@ Just returns after message, execution continues as if player had said yes
# 66 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_DeclineHelpBill::
# 67 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	checkplayergender
# 68 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route25_SeaCottage_EventScript_DeclineHelpBillMale
# 69 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route25_SeaCottage_EventScript_DeclineHelpBillFemale
# 70 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	return
# 71 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 72 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_DeclineHelpBillMale::
# 73 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_NoPleaseChief
# 74 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	return
# 75 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 76 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_DeclineHelpBillFemale::
# 77 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_NoPleaseBeautiful
# 78 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	return
# 79 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 80 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillWalkToTeleporterSouth::
# 81 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_BILL_CLEFAIRY, Route25_SeaCottage_Movement_BillWalkToTeleporterSouth
# 82 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
# 83 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	return
# 84 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 85 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillWalkToTeleporter::
# 86 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_BILL_CLEFAIRY, Route25_SeaCottage_Movement_BillWalkToTeleporter
# 87 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
# 88 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	return
# 89 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 90 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillGoToSSAnne::
# 91 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_SSAnnePartyYouGoInstead
# 92 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	release
# 93 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 94 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 95 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillGiveSSTicket::
# 96 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	famechecker FAMECHECKER_BILL, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 97 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	checkplayergender
# 98 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route25_SeaCottage_EventScript_BillThanksMale
# 99 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route25_SeaCottage_EventScript_BillThanksFemale
# 100 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	checkitemspace ITEM_SS_TICKET
# 101 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route25_SeaCottage_EventScript_NoRoomForSSTicket
# 102 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	giveitem_msg Route25_SeaCottage_Text_ReceivedSSTicketFromBill, ITEM_SS_TICKET, 1, MUS_RG_OBTAIN_KEY_ITEM
# 103 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag FLAG_GOT_SS_TICKET_DUP
# 104 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag FLAG_HIDE_NUGGET_BRIDGE_ROCKET
# 105 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag FLAG_GOT_SS_TICKET
# 106 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag FLAG_SYS_PC_LANETTE
# 107 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillGoToSSAnne
# 108 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 109 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 110 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillThanksMale::
# 111 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_ThanksBudTakeThis
# 112 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	return
# 113 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 114 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillThanksFemale::
# 115 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_ThanksLadyTakeThis
# 116 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	return
# 117 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 118 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_NoRoomForSSTicket::
# 119 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_YouveGotTooMuchStuff
# 120 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	release
# 121 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 122 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 123 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillGoLookAtPC::
# 124 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_CheckOutRareMonsOnPC
# 125 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	release
# 126 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 127 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 128 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Movement_BillWalkToTeleporter::
# 129 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 130 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 131 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	step_end
# 132 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 133 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Movement_BillWalkToTeleporterSouth::
# 134 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 135 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 136 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 137 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_left
# 138 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_in_place_faster_up
# 139 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	step_end
# 140 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 141 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Movement_BillEnterTeleporter::
# 142 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 143 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	step_end
# 144 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 145 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_Computer::
# 146 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	lockall
# 147 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_set RETURN_AFTER_SS_TICKET, Route25_SeaCottage_EventScript_OpenBillsMonList
# 148 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_set BILL_IN_TELEPORTER, Route25_SeaCottage_EventScript_RunCellSeparator
# 149 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_TeleporterIsDisplayed
# 150 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	releaseall
# 151 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 152 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 153 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_RunCellSeparator::
# 154 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	fadeoutbgm 0
# 155 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_InitiatedTeleportersCellSeparator
# 156 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	closemessage
# 157 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	clearflag BILL_IN_TELEPORTER
# 158 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag FLAG_HELPED_BILL_IN_SEA_COTTAGE
# 159 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special SpawnCameraObject
# 160 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_CAMERA, Route25_SeaCottage_Movement_CameraPanToTeleporters
# 161 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
# 162 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay 35
# 163 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	playse SE_PIN
# 164 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitse
# 165 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 166 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special AnimateTeleporterHousing
# 167 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay 10
# 168 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 169 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 170 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 171 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 172 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 173 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 174 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 175 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 176 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special AnimateTeleporterHousing
# 177 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	playse SE_WARP_IN
# 178 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special AnimateTeleporterCable
# 179 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitse
# 180 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 181 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 182 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 183 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 184 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 185 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	opendoor 3, 3
# 186 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitdooranim
# 187 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	fadeinbgm 0
# 188 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	addobject LOCALID_BILL_HUMAN
# 189 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	clearflag FLAG_HIDE_BILL_HUMAN_SEA_COTTAGE
# 190 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay 50
# 191 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 192 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_BILL_HUMAN, Route25_SeaCottage_Movement_BillExitTeleporter
# 193 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
# 194 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitfanfare
# 195 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_CAMERA, Route25_SeaCottage_Movement_CameraPanBackFromTeleporters
# 196 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
# 197 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	playse SE_CONTEST_CURTAIN_FALL
# 198 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	closedoor 3, 3
# 199 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitdooranim
# 200 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_BILL_HUMAN, Route25_SeaCottage_Movement_BillWalkToMiddleOfRoom
# 201 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
# 202 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special RemoveCameraObject
# 203 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	releaseall
# 204 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 205 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 206 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_PlayTeleporterBeepSE::
# 207 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	playse SE_BALL
# 208 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitse
# 209 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay 20
# 210 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	return
# 211 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 212 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Movement_CameraPanToTeleporters::
# 213 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 214 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 215 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 216 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 217 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	step_end
# 218 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 219 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Movement_CameraPanBackFromTeleporters::
# 220 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay_16
# 221 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay_16
# 222 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_down
# 223 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_down
# 224 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_left
# 225 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_left
# 226 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	step_end
# 227 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 228 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_OpenBillsMonList::
# 229 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_BillsFavoriteMonList
# 230 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
# 231 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 232 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 233 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_BillsMonList::
# 234 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	message Route25_SeaCottage_Text_SeeWhichMon
# 235 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmessage
# 236 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_EEVEELUTIONS, FALSE
# 237 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	switch VAR_RESULT
# 238 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	case 0, Route25_SeaCottage_EventScript_ViewEevee
# 239 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	case 1, Route25_SeaCottage_EventScript_ViewFlareon
# 240 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	case 2, Route25_SeaCottage_EventScript_ViewJolteon
# 241 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	case 3, Route25_SeaCottage_EventScript_ViewVaporeon
# 242 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
    case 4, Route25_SeaCottage_EventScript_ViewEspeon
# 243 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
    case 5, Route25_SeaCottage_EventScript_ViewUmbreon
# 244 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
    case 6, Route25_SeaCottage_EventScript_ViewLeafeon
# 245 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
    case 7, Route25_SeaCottage_EventScript_ViewGlaceon
# 246 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
    case 8, Route25_SeaCottage_EventScript_ViewSylveon
# 247 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	case 9, Route25_SeaCottage_EventScript_ExitBillsMonList
# 248 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	case 127, Route25_SeaCottage_EventScript_ExitBillsMonList
# 249 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 250 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 251 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_ViewEevee::
# 252 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	showmonpic SPECIES_EEVEE, 10, 3
# 253 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitbuttonpress
# 254 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	hidemonpic
# 255 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_EEVEE
# 256 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special SetSeenMon
# 257 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
# 258 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 259 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 260 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_ViewFlareon::
# 261 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	showmonpic SPECIES_FLAREON, 10, 3
# 262 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitbuttonpress
# 263 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	hidemonpic
# 264 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_FLAREON
# 265 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special SetSeenMon
# 266 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
# 267 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 268 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 269 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_ViewJolteon::
# 270 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	showmonpic SPECIES_JOLTEON, 10, 3
# 271 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitbuttonpress
# 272 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	hidemonpic
# 273 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_JOLTEON
# 274 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special SetSeenMon
# 275 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
# 276 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 277 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 278 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_ViewVaporeon::
# 279 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	showmonpic SPECIES_VAPOREON, 10, 3
# 280 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitbuttonpress
# 281 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	hidemonpic
# 282 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_VAPOREON
# 283 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special SetSeenMon
# 284 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
# 285 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 286 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 287 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_ExitBillsMonList::
# 288 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	releaseall
# 289 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	end
# 290 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 291 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Movement_BillWalkToMiddleOfRoom::
# 292 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 293 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 294 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 295 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 296 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_down
# 297 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_down
# 298 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	step_end
# 299 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 300 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Movement_BillExitTeleporter::
# 301 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_down
# 302 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	step_end
# 303 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 304 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_ImBillHelpMeOutPal::
# 305 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Hiya! I'm a POKéMON…\n"
# 306 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "…No I'm not!\p"
# 307 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Call me BILL!\n"
# 308 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "I'm a true-blue POKéMANIAC!\p"
# 309 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Hey!\n"
# 310 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "What's with that skeptical look?\p"
# 311 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "I'm not joshing you, pal.\p"
# 312 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "I screwed up an experiment and got\n"
# 313 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "combined with a POKéMON!\p"
# 314 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "So, how about it?\n"
# 315 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Help me out here!$"
# 316 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 317 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_ImBillHelpMeOutLady::
# 318 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Hiya! I'm a POKéMON…\n"
# 319 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "…No I'm not!\p"
# 320 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Call me BILL!\n"
# 321 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "I'm a true-blue POKéMANIAC!\p"
# 322 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Hey!\n"
# 323 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "What's with that skeptical look?\p"
# 324 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "I'm not joshing you, lady.\p"
# 325 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "I screwed up an experiment and got\n"
# 326 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "combined with a POKéMON!\p"
# 327 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "So, how about it?\n"
# 328 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Help me out here!$"
# 329 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 330 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_RunCellSeparationOnPC::
# 331 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Wait till I get inside the\n"
# 332 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "TELEPORTER.\p"
# 333 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "When I do, go to my PC and run\n"
# 334 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "the Cell Separation System.$"
# 335 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 336 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_NoPleaseChief::
# 337 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "No!?\n"
# 338 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Now don't be so cold!\p"
# 339 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Come on, you gotta help a guy in\n"
# 340 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "deep, deep trouble!\p"
# 341 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "What do you say, chief?\n"
# 342 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Please?\l"
# 343 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Okay?\l"
# 344 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "All right!$"
# 345 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 346 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_NoPleaseBeautiful::
# 347 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "No!?\n"
# 348 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Now don't be so cold!\p"
# 349 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Come on, you gotta help a guy in\n"
# 350 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "deep, deep trouble!\p"
# 351 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "What do you say, beautiful?\n"
# 352 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Please?\l"
# 353 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Okay?\l"
# 354 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "All right!$"
# 355 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 356 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_ThanksBudTakeThis::
# 357 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "BILL: Yeehah!\n"
# 358 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Thanks, bud! I owe you one!\p"
# 359 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "So, did you come to see my\n"
# 360 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "POKéMON collection?\p"
# 361 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "You didn't?\n"
# 362 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "That's a bummer.\p"
# 363 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "I've got to thank you…\n"
# 364 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Oh, here, maybe this'll do.$"
# 365 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 366 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_ThanksLadyTakeThis::
# 367 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "BILL: Yeehah!\n"
# 368 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Thanks, lady! I owe you one!\p"
# 369 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "So, did you come to see my\n"
# 370 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "POKéMON collection?\p"
# 371 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "You didn't?\n"
# 372 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "That's a bummer.\p"
# 373 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "I've got to thank you…\n"
# 374 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Oh, here, maybe this'll do.$"
# 375 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 376 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_ReceivedSSTicketFromBill::
# 377 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "{PLAYER} received an S.S. TICKET\n"
# 378 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "from BILL.$"
# 379 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 380 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_YouveGotTooMuchStuff::
# 381 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "You've got too much stuff!$"
# 382 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 383 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_SSAnnePartyYouGoInstead::
# 384 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "That cruise ship S.S. ANNE is in\n"
# 385 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "VERMILION CITY.\p"
# 386 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "I hear there are lots of TRAINERS\n"
# 387 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "on board, too.\p"
# 388 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "They invited me to their party, but\n"
# 389 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "I can't stand fancy do's.\p"
# 390 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Why don't you go instead of me?\n"
# 391 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Go on and have a good time.$"
# 392 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 393 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_CheckOutRareMonsOnPC::
# 394 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "BILL: Feel like checking out some\n"
# 395 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "of my rare POKéMON on my PC?\p"
# 396 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Go on, check out my PC.$"
# 397 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 398 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_TeleporterIsDisplayed::
# 399 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "TELEPORTER is displayed on the PC\n"
# 400 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "monitor.$"
# 401 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 402 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_InitiatedTeleportersCellSeparator::
# 403 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "{PLAYER} initiated the TELEPORTER's\n"
# 404 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Cell Separator.$"
# 405 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 406 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_BillsFavoriteMonList::
# 407 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "BILL's favorite POKéMON list!$"
# 408 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"

# 409 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_Text_SeeWhichMon::
# 410 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Which POKéMON do you want to see?$"

Route25_SeaCottage_EventScript_ViewEspeon::
# 415 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	showmonpic SPECIES_ESPEON, 10, 3
# 416 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitbuttonpress
# 417 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	hidemonpic
# 418 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_ESPEON
# 419 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special SetSeenMon
# 420 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
	end


Route25_SeaCottage_EventScript_ViewUmbreon::
# 425 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	showmonpic SPECIES_UMBREON, 10, 3
# 426 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitbuttonpress
# 427 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	hidemonpic
# 428 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_UMBREON
# 429 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special SetSeenMon
# 430 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
	end


Route25_SeaCottage_EventScript_ViewLeafeon::
# 435 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	showmonpic SPECIES_LEAFEON, 10, 3
# 436 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitbuttonpress
# 437 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	hidemonpic
# 438 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_LEAFEON
# 439 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special SetSeenMon
# 440 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
	end


Route25_SeaCottage_EventScript_ViewGlaceon::
# 445 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	showmonpic SPECIES_GLACEON, 10, 3
# 446 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitbuttonpress
# 447 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	hidemonpic
# 448 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_GLACEON
# 449 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special SetSeenMon
# 450 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
	end


Route25_SeaCottage_EventScript_ViewSylveon::
# 455 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	showmonpic SPECIES_SYLVEON, 10, 3
# 456 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitbuttonpress
# 457 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	hidemonpic
# 458 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_SYLVEON
# 459 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special SetSeenMon
# 460 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
	end

