/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/nfvepc/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_HandoverPreparationInformation_v920_IEs_H_
#define	_HandoverPreparationInformation_v920_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9 {
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_rel9	= 0,
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_rel10	= 1,
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_spare6	= 2,
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_spare5	= 3,
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_spare4	= 4,
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_spare3	= 5,
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_spare2	= 6,
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_spare1	= 7
	/*
	 * Enumeration is extensible
	 */
} e_HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9;

/* HandoverPreparationInformation-v920-IEs */
typedef struct HandoverPreparationInformation_v920_IEs {
	long	*ue_ConfigRelease_r9	/* OPTIONAL */;
	struct HandoverPreparationInformation_v920_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverPreparationInformation_v920_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_ConfigRelease_r9_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_HandoverPreparationInformation_v920_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _HandoverPreparationInformation_v920_IEs_H_ */
#include <asn_internal.h>
