# 1 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 2 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_Frlg_MapScripts::
# 3 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 5 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_EventScript_FishingGuru::
# 6 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	lock
# 7 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	//goto_if_set FLAG_GOT_OLD_ROD, VermilionCity_House1_EventScript_AlreadyGotOldRod
# 9 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
    goto_if_set FLAG_GOT_SUPER_ROD, VermilionCity_House1_EventScript_AlreadyGotSuperRod
# 10 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_ImFishingGuruDoYouLikeToFish, MSGBOX_YESNO
# 11 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	//goto_if_eq VAR_RESULT, YES, VermilionCity_House1_EventScript_GiveOldRod
# 12 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
    goto_if_eq VAR_RESULT, YES, VermilionCity_House1_EventScript_GiveSuperRod
# 13 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_OhThatsSoDisappointing
# 14 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	release
# 15 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	end
# 16 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
// Old script
# 17 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
//VermilionCity_House1_EventScript_AlreadyGotOldRod::
# 18 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
//	msgbox VermilionCity_House1_Text_HowAreTheFishBiting
# 19 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
//	release
# 20 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
//	end
# 21 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 22 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_EventScript_AlreadyGotSuperRod::
# 23 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
    msgbox VermilionCity_House1_Text_HowAreTheFishBiting
# 24 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	release
# 25 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	end
# 26 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 27 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
//VermilionCity_House1_EventScript_GiveOldRod::
# 28 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
//	checkitemspace ITEM_OLD_ROD
# 29 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
//	goto_if_eq VAR_RESULT, FALSE, VermilionCity_House1_EventScript_NoRoomForOldRod
# 30 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
//	additem ITEM_OLD_ROD
# 31 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
//	msgbox VermilionCity_House1_Text_TakeThisAndFish
# 32 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
//	msgreceiveditem VermilionCity_House1_Text_ReceivedOldRodFromFishingGuru, ITEM_OLD_ROD
# 33 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
//	setflag FLAG_GOT_OLD_ROD
# 34 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
//	msgbox VermilionCity_House1_Text_FishingIsAWayOfLife
# 35 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
//	release
# 36 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
//	end
# 37 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 38 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_EventScript_GiveSuperRod::
# 39 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	checkitemspace ITEM_SUPER_ROD
# 40 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, VermilionCity_House1_EventScript_NoRoomForSuperRod
# 41 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	additem ITEM_SUPER_ROD
# 42 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_TakeThisAndFish
# 43 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgreceiveditem VermilionCity_House1_Text_ReceivedSuperRodFromFishingGuru, ITEM_SUPER_ROD
# 44 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	setflag FLAG_GOT_SUPER_ROD
# 45 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_FishingIsAWayOfLife
# 46 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	release
# 47 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	end
# 48 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 49 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
//VermilionCity_House1_EventScript_NoRoomForOldRod::
# 50 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
//	msgbox VermilionCity_House1_Text_NoRoomForNiceGift
# 51 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
//	release
# 52 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
//	end
# 53 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 54 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_EventScript_NoRoomForSuperRod::
# 55 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_NoRoomForNiceGift
# 56 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	release
# 57 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	end
# 58 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 59 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_Text_ImFishingGuruDoYouLikeToFish::
# 60 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "I'm the FISHING GURU!\p"
# 61 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "I simply looove fishing!\n"
# 62 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "I can't bear to go without.\p"
# 63 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Tell me, do you like to fish?$"
# 64 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 65 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_Text_TakeThisAndFish::
# 66 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Grand! I like your style.\n"
# 67 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "I think we can be friends.\p"
# 68 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Take this and fish, young friend!$"
# 69 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 70 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
//VermilionCity_House1_Text_ReceivedOldRodFromFishingGuru::
# 71 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
//	.string "{PLAYER} received an OLD ROD from\n"
# 72 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
//	.string "the FISHING GURU.$"
# 73 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 74 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_Text_ReceivedSuperRodFromFishingGuru::
# 75 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "{PLAYER} received an SUPER ROD from\n"
# 76 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "the FISHING GURU.$"
# 77 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 78 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_Text_FishingIsAWayOfLife::
# 79 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Fishing is a way of life!\n"
# 80 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "It is like the finest poetry.\p"
# 81 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "From the seas to rivers, go out\n"
# 82 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "and land the big one, my friend.$"
# 83 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 84 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_Text_OhThatsSoDisappointing::
# 85 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Oh…\n"
# 86 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "That's so disappointing…$"
# 87 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 88 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_Text_HowAreTheFishBiting::
# 89 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Hello there, {PLAYER}!\p"
# 90 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "How are the fish biting?$"
# 91 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 92 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_Text_NoRoomForNiceGift::
# 93 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Oh, no!\p"
# 94 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "I had a nice gift for you, but you\n"
# 95 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "have no room for it!$"
