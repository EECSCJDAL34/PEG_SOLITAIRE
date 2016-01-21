/*
 * Class OCCUPIED_SLOT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_886 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_886 [] = {0xFF11,236,0xFF12,885,0xFFFF};
static EIF_TYPE_INDEX gen_type2_886 [] = {0xFF11,885,0xFFFF};
static EIF_TYPE_INDEX gen_type3_886 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_886 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_886 [] = {0xFF11,885,0xFFFF};
static EIF_TYPE_INDEX gen_type6_886 [] = {0xFF11,885,0xFFFF};
static EIF_TYPE_INDEX gen_type7_886 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_886 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_886 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_886 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_886 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_886 [] = {0xFF11,885,0xFFFF};


static struct desc_info desc_886[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_886},
	{1, (BODY_INDEX)-1, 236, gen_type1_886},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{12810, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 885, gen_type2_886},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_886},
	{14, (BODY_INDEX)-1, 0, gen_type4_886},
	{15, (BODY_INDEX)-1, 885, gen_type5_886},
	{16, (BODY_INDEX)-1, 885, gen_type6_886},
	{17, (BODY_INDEX)-1, 0, gen_type7_886},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_886},
	{12816, (BODY_INDEX)-1, 219, gen_type9_886},
	{22, (BODY_INDEX)-1, 219, gen_type10_886},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_886},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 885, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 885, gen_type12_886},
	{12815, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init886(void);
void Init886(void)
{
	IDSC(desc_886, 0, 885);
	IDSC(desc_886 + 1, 1, 885);
	IDSC(desc_886 + 32, 361, 885);
}


#ifdef __cplusplus
}
#endif
