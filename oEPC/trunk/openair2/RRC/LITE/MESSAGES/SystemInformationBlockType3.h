/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/nfvepc/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SystemInformationBlockType3_H_
#define	_SystemInformationBlockType3_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include "Q-QualMin-r9.h"
#include "ReselectionThresholdQ-r9.h"
#include <NativeEnumerated.h>
#include "MobilityStateParameters.h"
#include <constr_SEQUENCE.h>
#include "ReselectionThreshold.h"
#include "CellReselectionPriority.h"
#include "Q-RxLevMin.h"
#include "P-Max.h"
#include "AllowedMeasBandwidth.h"
#include "PresenceAntennaPort1.h"
#include "NeighCellConfig.h"
#include "T-Reselection.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType3__cellReselectionInfoCommon__q_Hyst {
	SystemInformationBlockType3__cellReselectionInfoCommon__q_Hyst_dB0	= 0,
	SystemInformationBlockType3__cellReselectionInfoCommon__q_Hyst_dB1	= 1,
	SystemInformationBlockType3__cellReselectionInfoCommon__q_Hyst_dB2	= 2,
	SystemInformationBlockType3__cellReselectionInfoCommon__q_Hyst_dB3	= 3,
	SystemInformationBlockType3__cellReselectionInfoCommon__q_Hyst_dB4	= 4,
	SystemInformationBlockType3__cellReselectionInfoCommon__q_Hyst_dB5	= 5,
	SystemInformationBlockType3__cellReselectionInfoCommon__q_Hyst_dB6	= 6,
	SystemInformationBlockType3__cellReselectionInfoCommon__q_Hyst_dB8	= 7,
	SystemInformationBlockType3__cellReselectionInfoCommon__q_Hyst_dB10	= 8,
	SystemInformationBlockType3__cellReselectionInfoCommon__q_Hyst_dB12	= 9,
	SystemInformationBlockType3__cellReselectionInfoCommon__q_Hyst_dB14	= 10,
	SystemInformationBlockType3__cellReselectionInfoCommon__q_Hyst_dB16	= 11,
	SystemInformationBlockType3__cellReselectionInfoCommon__q_Hyst_dB18	= 12,
	SystemInformationBlockType3__cellReselectionInfoCommon__q_Hyst_dB20	= 13,
	SystemInformationBlockType3__cellReselectionInfoCommon__q_Hyst_dB22	= 14,
	SystemInformationBlockType3__cellReselectionInfoCommon__q_Hyst_dB24	= 15
} e_SystemInformationBlockType3__cellReselectionInfoCommon__q_Hyst;
typedef enum SystemInformationBlockType3__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF__sf_Medium {
	SystemInformationBlockType3__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF__sf_Medium_dB_6	= 0,
	SystemInformationBlockType3__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF__sf_Medium_dB_4	= 1,
	SystemInformationBlockType3__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF__sf_Medium_dB_2	= 2,
	SystemInformationBlockType3__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF__sf_Medium_dB0	= 3
} e_SystemInformationBlockType3__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF__sf_Medium;
typedef enum SystemInformationBlockType3__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF__sf_High {
	SystemInformationBlockType3__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF__sf_High_dB_6	= 0,
	SystemInformationBlockType3__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF__sf_High_dB_4	= 1,
	SystemInformationBlockType3__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF__sf_High_dB_2	= 2,
	SystemInformationBlockType3__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF__sf_High_dB0	= 3
} e_SystemInformationBlockType3__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF__sf_High;

/* Forward declarations */
struct SpeedStateScaleFactors;

/* SystemInformationBlockType3 */
typedef struct SystemInformationBlockType3 {
	struct SystemInformationBlockType3__cellReselectionInfoCommon {
		long	 q_Hyst;
		struct SystemInformationBlockType3__cellReselectionInfoCommon__speedStateReselectionPars {
			MobilityStateParameters_t	 mobilityStateParameters;
			struct SystemInformationBlockType3__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF {
				long	 sf_Medium;
				long	 sf_High;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} q_HystSF;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *speedStateReselectionPars;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cellReselectionInfoCommon;
	struct SystemInformationBlockType3__cellReselectionServingFreqInfo {
		ReselectionThreshold_t	*s_NonIntraSearch	/* OPTIONAL */;
		ReselectionThreshold_t	 threshServingLow;
		CellReselectionPriority_t	 cellReselectionPriority;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cellReselectionServingFreqInfo;
	struct SystemInformationBlockType3__intraFreqCellReselectionInfo {
		Q_RxLevMin_t	 q_RxLevMin;
		P_Max_t	*p_Max	/* OPTIONAL */;
		ReselectionThreshold_t	*s_IntraSearch	/* OPTIONAL */;
		AllowedMeasBandwidth_t	*allowedMeasBandwidth	/* OPTIONAL */;
		PresenceAntennaPort1_t	 presenceAntennaPort1;
		NeighCellConfig_t	 neighCellConfig;
		T_Reselection_t	 t_ReselectionEUTRA;
		struct SpeedStateScaleFactors	*t_ReselectionEUTRA_SF	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} intraFreqCellReselectionInfo;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct SystemInformationBlockType3__s_IntraSearch_v920 {
		ReselectionThreshold_t	 s_IntraSearchP_r9;
		ReselectionThresholdQ_r9_t	 s_IntraSearchQ_r9;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *s_IntraSearch_v920;
	struct SystemInformationBlockType3__s_NonIntraSearch_v920 {
		ReselectionThreshold_t	 s_NonIntraSearchP_r9;
		ReselectionThresholdQ_r9_t	 s_NonIntraSearchQ_r9;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *s_NonIntraSearch_v920;
	Q_QualMin_r9_t	*q_QualMin_r9	/* OPTIONAL */;
	ReselectionThresholdQ_r9_t	*threshServingLowQ_r9	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType3_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_q_Hyst_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sf_Medium_23;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sf_High_28;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType3;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SpeedStateScaleFactors.h"

#endif	/* _SystemInformationBlockType3_H_ */
#include <asn_internal.h>
