/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/nfvepc/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "T-StatusProhibit.h"

int
T_StatusProhibit_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
T_StatusProhibit_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

void
T_StatusProhibit_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	T_StatusProhibit_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
T_StatusProhibit_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	T_StatusProhibit_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
T_StatusProhibit_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	T_StatusProhibit_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
T_StatusProhibit_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	T_StatusProhibit_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
T_StatusProhibit_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	T_StatusProhibit_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
T_StatusProhibit_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	T_StatusProhibit_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
T_StatusProhibit_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	T_StatusProhibit_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
T_StatusProhibit_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	T_StatusProhibit_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

asn_enc_rval_t
T_StatusProhibit_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	T_StatusProhibit_1_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

asn_dec_rval_t
T_StatusProhibit_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	T_StatusProhibit_1_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_T_StatusProhibit_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_T_StatusProhibit_value2enum_1[] = {
	{ 0,	3,	"ms0" },
	{ 1,	3,	"ms5" },
	{ 2,	4,	"ms10" },
	{ 3,	4,	"ms15" },
	{ 4,	4,	"ms20" },
	{ 5,	4,	"ms25" },
	{ 6,	4,	"ms30" },
	{ 7,	4,	"ms35" },
	{ 8,	4,	"ms40" },
	{ 9,	4,	"ms45" },
	{ 10,	4,	"ms50" },
	{ 11,	4,	"ms55" },
	{ 12,	4,	"ms60" },
	{ 13,	4,	"ms65" },
	{ 14,	4,	"ms70" },
	{ 15,	4,	"ms75" },
	{ 16,	4,	"ms80" },
	{ 17,	4,	"ms85" },
	{ 18,	4,	"ms90" },
	{ 19,	4,	"ms95" },
	{ 20,	5,	"ms100" },
	{ 21,	5,	"ms105" },
	{ 22,	5,	"ms110" },
	{ 23,	5,	"ms115" },
	{ 24,	5,	"ms120" },
	{ 25,	5,	"ms125" },
	{ 26,	5,	"ms130" },
	{ 27,	5,	"ms135" },
	{ 28,	5,	"ms140" },
	{ 29,	5,	"ms145" },
	{ 30,	5,	"ms150" },
	{ 31,	5,	"ms155" },
	{ 32,	5,	"ms160" },
	{ 33,	5,	"ms165" },
	{ 34,	5,	"ms170" },
	{ 35,	5,	"ms175" },
	{ 36,	5,	"ms180" },
	{ 37,	5,	"ms185" },
	{ 38,	5,	"ms190" },
	{ 39,	5,	"ms195" },
	{ 40,	5,	"ms200" },
	{ 41,	5,	"ms205" },
	{ 42,	5,	"ms210" },
	{ 43,	5,	"ms215" },
	{ 44,	5,	"ms220" },
	{ 45,	5,	"ms225" },
	{ 46,	5,	"ms230" },
	{ 47,	5,	"ms235" },
	{ 48,	5,	"ms240" },
	{ 49,	5,	"ms245" },
	{ 50,	5,	"ms250" },
	{ 51,	5,	"ms300" },
	{ 52,	5,	"ms350" },
	{ 53,	5,	"ms400" },
	{ 54,	5,	"ms450" },
	{ 55,	5,	"ms500" },
	{ 56,	6,	"spare8" },
	{ 57,	6,	"spare7" },
	{ 58,	6,	"spare6" },
	{ 59,	6,	"spare5" },
	{ 60,	6,	"spare4" },
	{ 61,	6,	"spare3" },
	{ 62,	6,	"spare2" },
	{ 63,	6,	"spare1" }
};
static unsigned int asn_MAP_T_StatusProhibit_enum2value_1[] = {
	0,	/* ms0(0) */
	2,	/* ms10(2) */
	20,	/* ms100(20) */
	21,	/* ms105(21) */
	22,	/* ms110(22) */
	23,	/* ms115(23) */
	24,	/* ms120(24) */
	25,	/* ms125(25) */
	26,	/* ms130(26) */
	27,	/* ms135(27) */
	28,	/* ms140(28) */
	29,	/* ms145(29) */
	3,	/* ms15(3) */
	30,	/* ms150(30) */
	31,	/* ms155(31) */
	32,	/* ms160(32) */
	33,	/* ms165(33) */
	34,	/* ms170(34) */
	35,	/* ms175(35) */
	36,	/* ms180(36) */
	37,	/* ms185(37) */
	38,	/* ms190(38) */
	39,	/* ms195(39) */
	4,	/* ms20(4) */
	40,	/* ms200(40) */
	41,	/* ms205(41) */
	42,	/* ms210(42) */
	43,	/* ms215(43) */
	44,	/* ms220(44) */
	45,	/* ms225(45) */
	46,	/* ms230(46) */
	47,	/* ms235(47) */
	48,	/* ms240(48) */
	49,	/* ms245(49) */
	5,	/* ms25(5) */
	50,	/* ms250(50) */
	6,	/* ms30(6) */
	51,	/* ms300(51) */
	7,	/* ms35(7) */
	52,	/* ms350(52) */
	8,	/* ms40(8) */
	53,	/* ms400(53) */
	9,	/* ms45(9) */
	54,	/* ms450(54) */
	1,	/* ms5(1) */
	10,	/* ms50(10) */
	55,	/* ms500(55) */
	11,	/* ms55(11) */
	12,	/* ms60(12) */
	13,	/* ms65(13) */
	14,	/* ms70(14) */
	15,	/* ms75(15) */
	16,	/* ms80(16) */
	17,	/* ms85(17) */
	18,	/* ms90(18) */
	19,	/* ms95(19) */
	63,	/* spare1(63) */
	62,	/* spare2(62) */
	61,	/* spare3(61) */
	60,	/* spare4(60) */
	59,	/* spare5(59) */
	58,	/* spare6(58) */
	57,	/* spare7(57) */
	56	/* spare8(56) */
};
static asn_INTEGER_specifics_t asn_SPC_T_StatusProhibit_specs_1 = {
	asn_MAP_T_StatusProhibit_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_T_StatusProhibit_enum2value_1,	/* N => "tag"; sorted by N */
	64,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_T_StatusProhibit_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_T_StatusProhibit = {
	"T-StatusProhibit",
	"T-StatusProhibit",
	T_StatusProhibit_free,
	T_StatusProhibit_print,
	T_StatusProhibit_constraint,
	T_StatusProhibit_decode_ber,
	T_StatusProhibit_encode_der,
	T_StatusProhibit_decode_xer,
	T_StatusProhibit_encode_xer,
	T_StatusProhibit_decode_uper,
	T_StatusProhibit_encode_uper,
	T_StatusProhibit_decode_aper,
	T_StatusProhibit_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_T_StatusProhibit_tags_1,
	sizeof(asn_DEF_T_StatusProhibit_tags_1)
		/sizeof(asn_DEF_T_StatusProhibit_tags_1[0]), /* 1 */
	asn_DEF_T_StatusProhibit_tags_1,	/* Same as above */
	sizeof(asn_DEF_T_StatusProhibit_tags_1)
		/sizeof(asn_DEF_T_StatusProhibit_tags_1[0]), /* 1 */
	&asn_PER_type_T_StatusProhibit_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_T_StatusProhibit_specs_1	/* Additional specs */
};

