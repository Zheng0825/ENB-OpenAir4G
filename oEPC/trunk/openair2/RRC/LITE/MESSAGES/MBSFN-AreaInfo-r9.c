/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/nfvepc/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "MBSFN-AreaInfo-r9.h"

static int
non_MBSFNregionLength_3_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
non_MBSFNregionLength_3_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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

static void
non_MBSFNregionLength_3_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	non_MBSFNregionLength_3_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
non_MBSFNregionLength_3_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	non_MBSFNregionLength_3_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
non_MBSFNregionLength_3_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	non_MBSFNregionLength_3_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
non_MBSFNregionLength_3_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	non_MBSFNregionLength_3_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
non_MBSFNregionLength_3_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	non_MBSFNregionLength_3_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
non_MBSFNregionLength_3_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	non_MBSFNregionLength_3_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
non_MBSFNregionLength_3_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	non_MBSFNregionLength_3_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
non_MBSFNregionLength_3_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	non_MBSFNregionLength_3_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
non_MBSFNregionLength_3_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	non_MBSFNregionLength_3_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
non_MBSFNregionLength_3_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	non_MBSFNregionLength_3_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
mcch_RepetitionPeriod_r9_8_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
mcch_RepetitionPeriod_r9_8_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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

static void
mcch_RepetitionPeriod_r9_8_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	mcch_RepetitionPeriod_r9_8_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
mcch_RepetitionPeriod_r9_8_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	mcch_RepetitionPeriod_r9_8_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
mcch_RepetitionPeriod_r9_8_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	mcch_RepetitionPeriod_r9_8_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
mcch_RepetitionPeriod_r9_8_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	mcch_RepetitionPeriod_r9_8_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
mcch_RepetitionPeriod_r9_8_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	mcch_RepetitionPeriod_r9_8_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
mcch_RepetitionPeriod_r9_8_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	mcch_RepetitionPeriod_r9_8_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
mcch_RepetitionPeriod_r9_8_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	mcch_RepetitionPeriod_r9_8_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
mcch_RepetitionPeriod_r9_8_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	mcch_RepetitionPeriod_r9_8_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
mcch_RepetitionPeriod_r9_8_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	mcch_RepetitionPeriod_r9_8_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
mcch_RepetitionPeriod_r9_8_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	mcch_RepetitionPeriod_r9_8_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
mcch_ModificationPeriod_r9_14_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
mcch_ModificationPeriod_r9_14_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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

static void
mcch_ModificationPeriod_r9_14_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	mcch_ModificationPeriod_r9_14_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
mcch_ModificationPeriod_r9_14_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	mcch_ModificationPeriod_r9_14_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
mcch_ModificationPeriod_r9_14_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	mcch_ModificationPeriod_r9_14_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
mcch_ModificationPeriod_r9_14_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	mcch_ModificationPeriod_r9_14_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
mcch_ModificationPeriod_r9_14_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	mcch_ModificationPeriod_r9_14_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
mcch_ModificationPeriod_r9_14_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	mcch_ModificationPeriod_r9_14_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
mcch_ModificationPeriod_r9_14_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	mcch_ModificationPeriod_r9_14_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
mcch_ModificationPeriod_r9_14_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	mcch_ModificationPeriod_r9_14_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
mcch_ModificationPeriod_r9_14_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	mcch_ModificationPeriod_r9_14_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
mcch_ModificationPeriod_r9_14_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	mcch_ModificationPeriod_r9_14_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
signallingMCS_r9_18_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
signallingMCS_r9_18_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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

static void
signallingMCS_r9_18_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	signallingMCS_r9_18_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
signallingMCS_r9_18_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	signallingMCS_r9_18_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
signallingMCS_r9_18_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	signallingMCS_r9_18_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
signallingMCS_r9_18_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	signallingMCS_r9_18_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
signallingMCS_r9_18_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	signallingMCS_r9_18_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
signallingMCS_r9_18_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	signallingMCS_r9_18_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
signallingMCS_r9_18_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	signallingMCS_r9_18_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
signallingMCS_r9_18_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	signallingMCS_r9_18_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
signallingMCS_r9_18_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	signallingMCS_r9_18_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
signallingMCS_r9_18_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	signallingMCS_r9_18_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
memb_mcch_Offset_r9_constraint_7(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 10)) {
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
memb_sf_AllocInfo_r9_constraint_7(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 6)) {
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
memb_mbsfn_AreaId_r9_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
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
memb_notificationIndicator_r9_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_non_MBSFNregionLength_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_mcch_RepetitionPeriod_r9_constr_8 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_mcch_ModificationPeriod_r9_constr_14 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_signallingMCS_r9_constr_18 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_mcch_Offset_r9_constr_13 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  10 }	/* (0..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf_AllocInfo_r9_constr_17 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  6,  6 }	/* (SIZE(6..6)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_mbsfn_AreaId_r9_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_notificationIndicator_r9_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_non_MBSFNregionLength_value2enum_3[] = {
	{ 0,	2,	"s1" },
	{ 1,	2,	"s2" }
};
static unsigned int asn_MAP_non_MBSFNregionLength_enum2value_3[] = {
	0,	/* s1(0) */
	1	/* s2(1) */
};
static asn_INTEGER_specifics_t asn_SPC_non_MBSFNregionLength_specs_3 = {
	asn_MAP_non_MBSFNregionLength_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_non_MBSFNregionLength_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_non_MBSFNregionLength_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_non_MBSFNregionLength_3 = {
	"non-MBSFNregionLength",
	"non-MBSFNregionLength",
	non_MBSFNregionLength_3_free,
	non_MBSFNregionLength_3_print,
	non_MBSFNregionLength_3_constraint,
	non_MBSFNregionLength_3_decode_ber,
	non_MBSFNregionLength_3_encode_der,
	non_MBSFNregionLength_3_decode_xer,
	non_MBSFNregionLength_3_encode_xer,
	non_MBSFNregionLength_3_decode_uper,
	non_MBSFNregionLength_3_encode_uper,
	non_MBSFNregionLength_3_decode_aper,
	non_MBSFNregionLength_3_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_non_MBSFNregionLength_tags_3,
	sizeof(asn_DEF_non_MBSFNregionLength_tags_3)
		/sizeof(asn_DEF_non_MBSFNregionLength_tags_3[0]) - 1, /* 1 */
	asn_DEF_non_MBSFNregionLength_tags_3,	/* Same as above */
	sizeof(asn_DEF_non_MBSFNregionLength_tags_3)
		/sizeof(asn_DEF_non_MBSFNregionLength_tags_3[0]), /* 2 */
	&asn_PER_type_non_MBSFNregionLength_constr_3,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_non_MBSFNregionLength_specs_3	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_mcch_RepetitionPeriod_r9_value2enum_8[] = {
	{ 0,	4,	"rf32" },
	{ 1,	4,	"rf64" },
	{ 2,	5,	"rf128" },
	{ 3,	5,	"rf256" }
};
static unsigned int asn_MAP_mcch_RepetitionPeriod_r9_enum2value_8[] = {
	2,	/* rf128(2) */
	3,	/* rf256(3) */
	0,	/* rf32(0) */
	1	/* rf64(1) */
};
static asn_INTEGER_specifics_t asn_SPC_mcch_RepetitionPeriod_r9_specs_8 = {
	asn_MAP_mcch_RepetitionPeriod_r9_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_mcch_RepetitionPeriod_r9_enum2value_8,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_mcch_RepetitionPeriod_r9_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mcch_RepetitionPeriod_r9_8 = {
	"mcch-RepetitionPeriod-r9",
	"mcch-RepetitionPeriod-r9",
	mcch_RepetitionPeriod_r9_8_free,
	mcch_RepetitionPeriod_r9_8_print,
	mcch_RepetitionPeriod_r9_8_constraint,
	mcch_RepetitionPeriod_r9_8_decode_ber,
	mcch_RepetitionPeriod_r9_8_encode_der,
	mcch_RepetitionPeriod_r9_8_decode_xer,
	mcch_RepetitionPeriod_r9_8_encode_xer,
	mcch_RepetitionPeriod_r9_8_decode_uper,
	mcch_RepetitionPeriod_r9_8_encode_uper,
	mcch_RepetitionPeriod_r9_8_decode_aper,
	mcch_RepetitionPeriod_r9_8_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_mcch_RepetitionPeriod_r9_tags_8,
	sizeof(asn_DEF_mcch_RepetitionPeriod_r9_tags_8)
		/sizeof(asn_DEF_mcch_RepetitionPeriod_r9_tags_8[0]) - 1, /* 1 */
	asn_DEF_mcch_RepetitionPeriod_r9_tags_8,	/* Same as above */
	sizeof(asn_DEF_mcch_RepetitionPeriod_r9_tags_8)
		/sizeof(asn_DEF_mcch_RepetitionPeriod_r9_tags_8[0]), /* 2 */
	&asn_PER_type_mcch_RepetitionPeriod_r9_constr_8,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mcch_RepetitionPeriod_r9_specs_8	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_mcch_ModificationPeriod_r9_value2enum_14[] = {
	{ 0,	5,	"rf512" },
	{ 1,	6,	"rf1024" }
};
static unsigned int asn_MAP_mcch_ModificationPeriod_r9_enum2value_14[] = {
	1,	/* rf1024(1) */
	0	/* rf512(0) */
};
static asn_INTEGER_specifics_t asn_SPC_mcch_ModificationPeriod_r9_specs_14 = {
	asn_MAP_mcch_ModificationPeriod_r9_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_mcch_ModificationPeriod_r9_enum2value_14,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_mcch_ModificationPeriod_r9_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mcch_ModificationPeriod_r9_14 = {
	"mcch-ModificationPeriod-r9",
	"mcch-ModificationPeriod-r9",
	mcch_ModificationPeriod_r9_14_free,
	mcch_ModificationPeriod_r9_14_print,
	mcch_ModificationPeriod_r9_14_constraint,
	mcch_ModificationPeriod_r9_14_decode_ber,
	mcch_ModificationPeriod_r9_14_encode_der,
	mcch_ModificationPeriod_r9_14_decode_xer,
	mcch_ModificationPeriod_r9_14_encode_xer,
	mcch_ModificationPeriod_r9_14_decode_uper,
	mcch_ModificationPeriod_r9_14_encode_uper,
	mcch_ModificationPeriod_r9_14_decode_aper,
	mcch_ModificationPeriod_r9_14_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_mcch_ModificationPeriod_r9_tags_14,
	sizeof(asn_DEF_mcch_ModificationPeriod_r9_tags_14)
		/sizeof(asn_DEF_mcch_ModificationPeriod_r9_tags_14[0]) - 1, /* 1 */
	asn_DEF_mcch_ModificationPeriod_r9_tags_14,	/* Same as above */
	sizeof(asn_DEF_mcch_ModificationPeriod_r9_tags_14)
		/sizeof(asn_DEF_mcch_ModificationPeriod_r9_tags_14[0]), /* 2 */
	&asn_PER_type_mcch_ModificationPeriod_r9_constr_14,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mcch_ModificationPeriod_r9_specs_14	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_signallingMCS_r9_value2enum_18[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n7" },
	{ 2,	3,	"n13" },
	{ 3,	3,	"n19" }
};
static unsigned int asn_MAP_signallingMCS_r9_enum2value_18[] = {
	2,	/* n13(2) */
	3,	/* n19(3) */
	0,	/* n2(0) */
	1	/* n7(1) */
};
static asn_INTEGER_specifics_t asn_SPC_signallingMCS_r9_specs_18 = {
	asn_MAP_signallingMCS_r9_value2enum_18,	/* "tag" => N; sorted by tag */
	asn_MAP_signallingMCS_r9_enum2value_18,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_signallingMCS_r9_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_signallingMCS_r9_18 = {
	"signallingMCS-r9",
	"signallingMCS-r9",
	signallingMCS_r9_18_free,
	signallingMCS_r9_18_print,
	signallingMCS_r9_18_constraint,
	signallingMCS_r9_18_decode_ber,
	signallingMCS_r9_18_encode_der,
	signallingMCS_r9_18_decode_xer,
	signallingMCS_r9_18_encode_xer,
	signallingMCS_r9_18_decode_uper,
	signallingMCS_r9_18_encode_uper,
	signallingMCS_r9_18_decode_aper,
	signallingMCS_r9_18_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_signallingMCS_r9_tags_18,
	sizeof(asn_DEF_signallingMCS_r9_tags_18)
		/sizeof(asn_DEF_signallingMCS_r9_tags_18[0]) - 1, /* 1 */
	asn_DEF_signallingMCS_r9_tags_18,	/* Same as above */
	sizeof(asn_DEF_signallingMCS_r9_tags_18)
		/sizeof(asn_DEF_signallingMCS_r9_tags_18[0]), /* 2 */
	&asn_PER_type_signallingMCS_r9_constr_18,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_signallingMCS_r9_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_mcch_Config_r9_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFN_AreaInfo_r9__mcch_Config_r9, mcch_RepetitionPeriod_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mcch_RepetitionPeriod_r9_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mcch-RepetitionPeriod-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFN_AreaInfo_r9__mcch_Config_r9, mcch_Offset_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_mcch_Offset_r9_constraint_7,
		&asn_PER_memb_mcch_Offset_r9_constr_13,
		0,
		"mcch-Offset-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFN_AreaInfo_r9__mcch_Config_r9, mcch_ModificationPeriod_r9),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mcch_ModificationPeriod_r9_14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mcch-ModificationPeriod-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFN_AreaInfo_r9__mcch_Config_r9, sf_AllocInfo_r9),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_sf_AllocInfo_r9_constraint_7,
		&asn_PER_memb_sf_AllocInfo_r9_constr_17,
		0,
		"sf-AllocInfo-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFN_AreaInfo_r9__mcch_Config_r9, signallingMCS_r9),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_signallingMCS_r9_18,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"signallingMCS-r9"
		},
};
static ber_tlv_tag_t asn_DEF_mcch_Config_r9_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_mcch_Config_r9_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mcch-RepetitionPeriod-r9 at 4078 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mcch-Offset-r9 at 4079 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mcch-ModificationPeriod-r9 at 4080 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sf-AllocInfo-r9 at 4081 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* signallingMCS-r9 at 4082 */
};
static asn_SEQUENCE_specifics_t asn_SPC_mcch_Config_r9_specs_7 = {
	sizeof(struct MBSFN_AreaInfo_r9__mcch_Config_r9),
	offsetof(struct MBSFN_AreaInfo_r9__mcch_Config_r9, _asn_ctx),
	asn_MAP_mcch_Config_r9_tag2el_7,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mcch_Config_r9_7 = {
	"mcch-Config-r9",
	"mcch-Config-r9",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_mcch_Config_r9_tags_7,
	sizeof(asn_DEF_mcch_Config_r9_tags_7)
		/sizeof(asn_DEF_mcch_Config_r9_tags_7[0]) - 1, /* 1 */
	asn_DEF_mcch_Config_r9_tags_7,	/* Same as above */
	sizeof(asn_DEF_mcch_Config_r9_tags_7)
		/sizeof(asn_DEF_mcch_Config_r9_tags_7[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_mcch_Config_r9_7,
	5,	/* Elements count */
	&asn_SPC_mcch_Config_r9_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MBSFN_AreaInfo_r9_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFN_AreaInfo_r9, mbsfn_AreaId_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_mbsfn_AreaId_r9_constraint_1,
		&asn_PER_memb_mbsfn_AreaId_r9_constr_2,
		0,
		"mbsfn-AreaId-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFN_AreaInfo_r9, non_MBSFNregionLength),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_non_MBSFNregionLength_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"non-MBSFNregionLength"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFN_AreaInfo_r9, notificationIndicator_r9),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_notificationIndicator_r9_constraint_1,
		&asn_PER_memb_notificationIndicator_r9_constr_6,
		0,
		"notificationIndicator-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFN_AreaInfo_r9, mcch_Config_r9),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_mcch_Config_r9_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mcch-Config-r9"
		},
};
static ber_tlv_tag_t asn_DEF_MBSFN_AreaInfo_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MBSFN_AreaInfo_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbsfn-AreaId-r9 at 4074 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* non-MBSFNregionLength at 4075 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* notificationIndicator-r9 at 4076 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* mcch-Config-r9 at 4078 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MBSFN_AreaInfo_r9_specs_1 = {
	sizeof(struct MBSFN_AreaInfo_r9),
	offsetof(struct MBSFN_AreaInfo_r9, _asn_ctx),
	asn_MAP_MBSFN_AreaInfo_r9_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MBSFN_AreaInfo_r9 = {
	"MBSFN-AreaInfo-r9",
	"MBSFN-AreaInfo-r9",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_MBSFN_AreaInfo_r9_tags_1,
	sizeof(asn_DEF_MBSFN_AreaInfo_r9_tags_1)
		/sizeof(asn_DEF_MBSFN_AreaInfo_r9_tags_1[0]), /* 1 */
	asn_DEF_MBSFN_AreaInfo_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBSFN_AreaInfo_r9_tags_1)
		/sizeof(asn_DEF_MBSFN_AreaInfo_r9_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MBSFN_AreaInfo_r9_1,
	4,	/* Elements count */
	&asn_SPC_MBSFN_AreaInfo_r9_specs_1	/* Additional specs */
};

