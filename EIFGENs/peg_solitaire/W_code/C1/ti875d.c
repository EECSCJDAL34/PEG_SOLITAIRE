/*
 * Class TIME_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_875 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_875 [] = {0xFF11,236,0xFF12,874,0xFFFF};
static EIF_TYPE_INDEX gen_type2_875 [] = {0xFF11,874,0xFFFF};
static EIF_TYPE_INDEX gen_type3_875 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_875 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_875 [] = {0xFF11,874,0xFFFF};
static EIF_TYPE_INDEX gen_type6_875 [] = {0xFF11,874,0xFFFF};
static EIF_TYPE_INDEX gen_type7_875 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_875 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_875 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_875 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_875 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_875 [] = {0xFF11,874,0xFFFF};
static EIF_TYPE_INDEX gen_type13_875 [] = {0xFF11,868,0xFFFF};
static EIF_TYPE_INDEX gen_type14_875 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type15_875 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_875[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_875},
	{1, (BODY_INDEX)-1, 236, gen_type1_875},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 874, gen_type2_875},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_875},
	{14, (BODY_INDEX)-1, 0, gen_type4_875},
	{15, (BODY_INDEX)-1, 874, gen_type5_875},
	{16, (BODY_INDEX)-1, 874, gen_type6_875},
	{17, (BODY_INDEX)-1, 0, gen_type7_875},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_875},
	{21, (BODY_INDEX)-1, 219, gen_type9_875},
	{22, (BODY_INDEX)-1, 219, gen_type10_875},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_875},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 874, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 874, gen_type12_875},
	{12755, (BODY_INDEX)-1, 205, NULL},
	{12756, (BODY_INDEX)-1, 205, NULL},
	{12757, (BODY_INDEX)-1, 868, gen_type13_875},
	{12758, (BODY_INDEX)-1, 219, gen_type14_875},
	{12763, (BODY_INDEX)-1, 205, NULL},
	{12764, (BODY_INDEX)-1, 205, NULL},
	{12759, (BODY_INDEX)-1, 205, NULL},
	{12760, (BODY_INDEX)-1, 205, NULL},
	{12761, (BODY_INDEX)-1, 205, NULL},
	{12762, (BODY_INDEX)-1, 219, gen_type15_875},
};

extern void Init875(void);
void Init875(void)
{
	IDSC(desc_875, 0, 874);
	IDSC(desc_875 + 1, 1, 874);
	IDSC(desc_875 + 32, 392, 874);
	IDSC(desc_875 + 36, 389, 874);
}


#ifdef __cplusplus
}
#endif
