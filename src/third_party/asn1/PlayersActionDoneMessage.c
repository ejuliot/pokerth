/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#include <asn_internal.h>

#include "PlayersActionDoneMessage.h"

static int
memb_totalPlayerBet_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 10000000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_playerMoney_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 10000000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_highestSet_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 10000000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_minimumRaise_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 10000000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_PlayersActionDoneMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PlayersActionDoneMessage, gameId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PlayersActionDoneMessage, playerId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"playerId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PlayersActionDoneMessage, gameState),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_NetGameState,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameState"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PlayersActionDoneMessage, playerAction),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_NetPlayerAction,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"playerAction"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PlayersActionDoneMessage, totalPlayerBet),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_totalPlayerBet_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"totalPlayerBet"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PlayersActionDoneMessage, playerMoney),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_playerMoney_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"playerMoney"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PlayersActionDoneMessage, highestSet),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_highestSet_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"highestSet"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PlayersActionDoneMessage, minimumRaise),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_minimumRaise_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"minimumRaise"
		},
};
static ber_tlv_tag_t asn_DEF_PlayersActionDoneMessage_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (27 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PlayersActionDoneMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 5 }, /* gameId at 481 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, -1, 4 }, /* playerId at 482 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 4, -2, 3 }, /* totalPlayerBet at 485 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 5, -3, 2 }, /* playerMoney at 486 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 6, -4, 1 }, /* highestSet at 487 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 7, -5, 0 }, /* minimumRaise at 488 */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 2, 0, 1 }, /* gameState at 483 */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 3, -1, 0 } /* playerAction at 484 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PlayersActionDoneMessage_specs_1 = {
	sizeof(struct PlayersActionDoneMessage),
	offsetof(struct PlayersActionDoneMessage, _asn_ctx),
	asn_MAP_PlayersActionDoneMessage_tag2el_1,
	8,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	7,	/* Start extensions */
	9	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PlayersActionDoneMessage = {
	"PlayersActionDoneMessage",
	"PlayersActionDoneMessage",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_PlayersActionDoneMessage_tags_1,
	sizeof(asn_DEF_PlayersActionDoneMessage_tags_1)
		/sizeof(asn_DEF_PlayersActionDoneMessage_tags_1[0]) - 1, /* 1 */
	asn_DEF_PlayersActionDoneMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_PlayersActionDoneMessage_tags_1)
		/sizeof(asn_DEF_PlayersActionDoneMessage_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_PlayersActionDoneMessage_1,
	8,	/* Elements count */
	&asn_SPC_PlayersActionDoneMessage_specs_1	/* Additional specs */
};

