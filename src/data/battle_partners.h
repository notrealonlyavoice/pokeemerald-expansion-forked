//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/battle_partners.h' to remove #line markers.
//

#line 1 "src/data/battle_partners.party"

#line 1
    [DIFFICULTY_NORMAL][PARTNER_NONE] =
    {
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 10
    [DIFFICULTY_NORMAL][PARTNER_STEVEN] =
    {
#line 11
        .trainerName = _("STEVEN"),
#line 12
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 13
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender =
#line 15
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 17
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 21
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 20
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 19
            .lvl = 42,
#line 18
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 22
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 27
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 31
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 30
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 29
            .lvl = 43,
#line 28
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 32
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 37
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 41
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 40
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 39
            .lvl = 44,
#line 38
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 42
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 49
    [DIFFICULTY_NORMAL][PARTNER_THE_CAVE] =
    {
#line 50
        .trainerName = _("wild"),
#line 51
        .trainerClass = TRAINER_CLASS_POKEMON_FROM,
#line 52
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender =
#line 54
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 56
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 60
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 59
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 58
            .lvl = 3,
#line 57
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 61
                MOVE_GIVE_UP,
            },
            },
        },
    },
