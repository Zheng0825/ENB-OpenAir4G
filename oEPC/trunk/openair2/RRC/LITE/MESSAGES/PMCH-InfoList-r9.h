/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/nfvepc/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_PMCH_InfoList_r9_H_
#define	_PMCH_InfoList_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PMCH_Info_r9;

/* PMCH-InfoList-r9 */
typedef struct PMCH_InfoList_r9 {
	A_SEQUENCE_OF(struct PMCH_Info_r9) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PMCH_InfoList_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PMCH_InfoList_r9;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PMCH-Info-r9.h"

#endif	/* _PMCH_InfoList_r9_H_ */
#include <asn_internal.h>
