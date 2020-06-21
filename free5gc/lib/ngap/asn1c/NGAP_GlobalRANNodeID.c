/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/r14.4.0/38413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "NGAP_GlobalRANNodeID.h"

#include "NGAP_GlobalGNB-ID.h"
#include "NGAP_GlobalNgENB-ID.h"
#include "NGAP_GlobalN3IWF-ID.h"
static asn_oer_constraints_t asn_OER_type_NGAP_GlobalRANNodeID_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_NGAP_GlobalRANNodeID_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_NGAP_GlobalRANNodeID_1[] = {
	{ ATF_POINTER, 0, offsetof(struct NGAP_GlobalRANNodeID, choice.globalGNB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_GlobalGNB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"globalGNB-ID"
		},
	{ ATF_POINTER, 0, offsetof(struct NGAP_GlobalRANNodeID, choice.globalNgENB_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_GlobalNgENB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"globalNgENB-ID"
		},
	{ ATF_POINTER, 0, offsetof(struct NGAP_GlobalRANNodeID, choice.globalN3IWF_ID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_GlobalN3IWF_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"globalN3IWF-ID"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_GlobalRANNodeID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* globalGNB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* globalNgENB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* globalN3IWF-ID */
};
asn_CHOICE_specifics_t asn_SPC_NGAP_GlobalRANNodeID_specs_1 = {
	sizeof(struct NGAP_GlobalRANNodeID),
	offsetof(struct NGAP_GlobalRANNodeID, _asn_ctx),
	offsetof(struct NGAP_GlobalRANNodeID, present),
	sizeof(((struct NGAP_GlobalRANNodeID *)0)->present),
	asn_MAP_NGAP_GlobalRANNodeID_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	3	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_GlobalRANNodeID = {
	"GlobalRANNodeID",
	"GlobalRANNodeID",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_NGAP_GlobalRANNodeID_constr_1, &asn_PER_type_NGAP_GlobalRANNodeID_constr_1, CHOICE_constraint },
	asn_MBR_NGAP_GlobalRANNodeID_1,
	3,	/* Elements count */
	&asn_SPC_NGAP_GlobalRANNodeID_specs_1	/* Additional specs */
};

