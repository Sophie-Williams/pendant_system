// Search

};

const int aiItemMagicAttributePercentHigh[ITEM_ATTRIBUTE_MAX_LEVEL] =
{

// Add before

#ifdef ELEMENT_NEW_BONUSES
	{ POINT_ATTBONUS_ELEC, }, //99
	{ POINT_ATTBONUS_FIRE, }, //100
	{ POINT_ATTBONUS_ICE, }, //101
	{ POINT_ATTBONUS_WIND, }, //102
	{ POINT_ATTBONUS_EARTH, }, //103
	{ POINT_ATTBONUS_DARK, }, //104

	{ POINT_RESIST_HUMAN, },

	{ POINT_RESIST_SWORD_REDUCTION, },		
	{ POINT_RESIST_TWOHAND_REDUCTION, },	
	{ POINT_RESIST_DAGGER_REDUCTION, },	
	{ POINT_RESIST_BELL_REDUCTION, },		
	{ POINT_RESIST_FAN_REDUCTION, },		
	{ POINT_RESIST_BOW_REDUCTION, },

	{ POINT_ATTBONUS_ZODIAC, },
	{ POINT_ATTBONUS_DESERT, },
	{ POINT_ATTBONUS_INSECT, },
#ifdef ENABLE_WOLFMAN_CHARACTER
	{ POINT_RESIST_CLAW_REDUCTION, },
#endif	

#endif
