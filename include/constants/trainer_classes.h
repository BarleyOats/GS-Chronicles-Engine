#pragma once

enum
{
	CLASS_PKMN_TRAINER_1,	//0x0
	CLASS_RIVAL_KRIS_ETHAN,	//0x1
	CLASS_ELDER,			//0x2
	CLASS_SAGE,				//0x3
	CLASS_OFFICER,			//0x4
	CLASS_CHALLENGER,	    //0x5
	CLASS_PASSERBY_BOY,		//0x6
	CLASS_MYSTICAL_MAN,		//0x7
	CLASS_BURGLAR,			//0x8
	CLASS_REPORTER,			//0x9
	CLASS_HEX_MANIAC,		//0xA
	CLASS_BOARDER,			//0xB
	CLASS_SKIER,			//0xC
	CLASS_RICH_BOY,			//0xD
	CLASS_KIMONO_GIRL,		//0xE
	CLASS_SWIMMER_M_RS,		//0xF
	CLASS_BLACK_BELT_RS,	//0x10
	CLASS_GUITARIST_RS,		//0x11
	CLASS_FIRE_BREATHER,	//0x12
	CLASS_CAMPER_RS,		//0x13
	CLASS_BUG_MANIAC,		//0x14
	CLASS_PSYCHIC_RS,		//0x15
	CLASS_GENTLEMAN_RS,		//0x16
	CLASS_ELITE_FOUR_RS,	//0x17
	CLASS_LEADER_RS,		//0x18
	CLASS_SCHOOL_KID,		//0x19
	CLASS_SR_AND_JR,		//0x1A
	CLASS_POKEFAN,			//0x1B
	CLASS_EXPERT,			//0x1C
	CLASS_YOUNGSTER_RS,		//0x1D
	CLASS_CHAMPION_KE,		//0x1E
	CLASS_FISHERMAN_RS,		//0x1F
	CLASS_TRIATHLETE,		//0x20
	CLASS_DRAGON_TAMER,		//0x21
	CLASS_BIRD_KEEPER_RS,	//0x22
	CLASS_NINJA_BOY,		//0x23
	CLASS_BATTLE_GIRL,		//0x24
	CLASS_PARASOL_LADY,		//0x25
	CLASS_SWIMMER_F_RS,		//0x26
	CLASS_PICNICKER_RS,		//0x27
	CLASS_TWINS_RS,			//0x28
	CLASS_SAILOR_RS,		//0x29
	CLASS_BOARDER_RS,		//0x2A
	CLASS_COLLECTOR,		//0x2B
	CLASS_PKMN_TRAINER_3,	//0x2C
	CLASS_PKMN_BREEDER_RS,	//0x2D
	CLASS_PKMN_RANGER_RS,	//0x2E
	CLASS_ROCKET_EXECUTIVE,	//0x2F
	CLASS_TEAM_MAGMA,		//0x30
	CLASS_LASS_RS,			//0x31
	CLASS_BUG_CATCHER_RS,	//0x32
	CLASS_HIKER_RS,			//0x33
	CLASS_YOUNG_COUPLE_RS,	//0x34
	CLASS_OLD_COUPLE,		//0x35
	CLASS_SIS_AND_BRO_RS,	//0x36
	CLASS_AQUA_ADMIN,		//0x37
	CLASS_ROCKET_ADMIN,		//0x38
	CLASS_YOUNGSTER, 		//0x39
    CLASS_BUG_CATCHER, 		//0x3A
    CLASS_LASS, 			//0x3B
    CLASS_SAILOR, 			//0x3C
    CLASS_CAMPER, 			//0x3D
    CLASS_PICNICKER, 		//0x3E
    CLASS_POKEMANIAC, 		//0x3F
    CLASS_SUPER_NERD, 		//0x40
    CLASS_HIKER, 			//0x41
    CLASS_BIKER, 			//0x42
	CLASS_ACE_TRAINER_F, 	//0x43
	CLASS_ENGINEER, 		//0x44
	CLASS_FISHERMAN, 		//0x45
	CLASS_SWIMMER_M, 		//0x46
	CLASS_CUE_BALL, 		//0x47
	CLASS_GAMBLER, 			//0x48
	CLASS_BEAUTY, 			//0x49
	CLASS_SWIMMER_F, 		//0x4A
	CLASS_PSYCHIC, 			//0x4B
	CLASS_ROCKER, 			//0x4C
	CLASS_JUGGLER, 			//0x4D
	CLASS_TAMER, 			//0x4E
	CLASS_BIRD_KEEPER,		//0x4F
	CLASS_BLACK_BELT, 		//0x50
	CLASS_RIVAL, 			//0x51
	CLASS_SCIENTIST, 		//0x52
	CLASS_BOSS, 			//0x53
	CLASS_LEADER, 			//0x54
	CLASS_TEAM_ROCKET, 		//0x55
	CLASS_ACE_TRAINER,  	//0x56
	CLASS_ELITE_4, 			//0x57
	CLASS_GENTLEMAN, 		//0x58
	CLASS_CHALLENGER_2, 	//0x59
	CLASS_CHAMPION, 		//0x5A
	CLASS_CHANNELER, 		//0x5B
	CLASS_TWINS, 			//0x5C
	CLASS_ACE_COUPLE, 		//0x5D
	CLASS_YOUNG_COUPLE, 	//0x5E
	CLASS_CRUSH_KIN, 		//0x5F
	CLASS_SIS_AND_BRO, 		//0x60
	CLASS_PKMN_PROF, 		//0x61
	CLASS_PLAYER, 			//0x62
	CLASS_CRUSH_GIRL, 		//0x63
	CLASS_TUBER, 			//0x64
	CLASS_PKMN_BREEDER, 	//0x65
	CLASS_PKMN_RANGER, 		//0x66
	CLASS_AROMA_LADY, 		//0x67
	CLASS_RUIN_MANIAC, 		//0x68
	CLASS_LADY, 			//0x69
	CLASS_PAINTER, 			//0x6A
};

#define CLASS_GAMER CLASS_GAMBLER
#define CLASS_ELITE_FOUR CLASS_ELITE_4

#ifdef UNBOUND

#define CLASS_LOR_LEADER 		0x2
#define CLASS_AGENT				0x3
#define CLASS_WAITER			0x4
#define CLASS_WAITRESS			0x5
#define CLASS_CYCLIST			0x7
#define CLASS_IDOL				0x8
#define CLASS_NURSE				0xA
#define CLASS_POKE_KID			0xC
#define CLASS_TERROR_GRANBULL 	0xE
#define CLASS_CAMPING_DUO		0xF
#define CLASS_SKIIER			0x10
#define CLASS_GUITARIST			0x11
#define CLASS_KINDLER			0x12
#define CLASS_SHOCKER			0x13
#define CLASS_BUG_MANIAC		0x14
#define CLASS_POLICEMAN			0x15
#define CLASS_BLACK_FERROTHORN 	0x16
#define CLASS_RICH_GIRL			0x17
#define CLASS_SUCCESSOR			0x18
#define CLASS_SCHOOL_KID		0x19
#define CLASS_BLACK_FERROTHORN_BOSS 0x1A
#define CLASS_EXPERT			0x1C
#define CLASS_RANCHER			0x1D
#define CLASS_FRONTIER_BRAIN 	0x1E
#define CLASS_SCIENCE_SOCIETY   0x1F
#define CLASS_JOGGER			0x20
#define CLASS_DRAGON_TAMER		0x21
#define CLASS_NINJA_BOY			0x23
#define CLASS_MEGA_TRAINER		0x24
#define CLASS_BLACK_HORIZON		0x26
#define CLASS_SINNOH_LEADER		0x28
#define CLASS_DEVELOPER			0x29
#define CLASS_BOARDER			0x2A
#define CLASS_COLLECTOR			0x2B
#define CLASS_BLACK_EMBOAR		0x2D
#define CLASS_LOR_ADMIN 		0x2E
#define CLASS_LOR 				0x2F
#define CLASS_SHADOW_ADMIN 		0x30
#define CLASS_WORKER 			0x44
#define CLASS_ROUGHNECK 		0x47
#define CLASS_BOSS 				0x53
#define CLASS_SHADOW			0x55
#define CLASS_ACE_TRAINER 		0x56
#define CLASS_MEDIUM 			0x5B
#define CLASS_ACE_DUO 			0x5D

#endif
