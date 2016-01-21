/*
 * Class SLOT_STATUS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_882 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_882 [] = {0xFF11,236,0xFF12,881,0xFFFF};
static EIF_TYPE_INDEX gen_type2_882 [] = {0xFF11,881,0xFFFF};
static EIF_TYPE_INDEX gen_type3_882 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_882 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_882 [] = {0xFF11,881,0xFFFF};
static EIF_TYPE_INDEX gen_type6_882 [] = {0xFF11,881,0xFFFF};
static EIF_TYPE_INDEX gen_type7_882 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_882 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_882 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_882 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_882 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_882 [] = {0xFF11,881,0xFFFF};


static struct desc_info desc_882[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_882},
	{1, (BODY_INDEX)-1, 236, gen_type1_882},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{12810, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 881, gen_type2_882},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_882},
	{14, (BODY_INDEX)-1, 0, gen_type4_882},
	{15, (BODY_INDEX)-1, 881, gen_type5_882},
	{16, (BODY_INDEX)-1, 881, gen_type6_882},
	{17, (BODY_INDEX)-1, 0, gen_type7_882},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_882},
	{21, (BODY_INDEX)-1, 219, gen_type9_882},
	{22, (BODY_INDEX)-1, 219, gen_type10_882},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_882},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 881, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 881, gen_type12_882},
};

extern void Init882(void);
void Init882(void)
{
	IDSC(desc_882, 0, 881);
	IDSC(desc_882 + 1, 1, 881);
}


#ifdef __cplusplus
}
#endif
