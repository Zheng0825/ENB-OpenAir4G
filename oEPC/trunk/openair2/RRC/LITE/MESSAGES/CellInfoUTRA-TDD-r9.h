/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/nfvepc/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CellInfoUTRA_TDD_r9_H_
#define	_CellInfoUTRA_TDD_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellIdUTRA-TDD.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellInfoUTRA-TDD-r9 */
typedef struct CellInfoUTRA_TDD_r9 {
	PhysCellIdUTRA_TDD_t	 physCellId_r9;
	OCTET_STRING_t	 utra_BCCH_Container_r9;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellInfoUTRA_TDD_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellInfoUTRA_TDD_r9;

#ifdef __cplusplus
}
#endif

#endif	/* _CellInfoUTRA_TDD_r9_H_ */
#include <asn_internal.h>
