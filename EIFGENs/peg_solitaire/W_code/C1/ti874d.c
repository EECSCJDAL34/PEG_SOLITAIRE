/*
 * Class TIME_UTILITY
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_874 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_874 [] = {0xFF11,236,0xFF12,873,0xFFFF};
static EIF_TYPE_INDEX gen_type2_874 [] = {0xFF11,873,0xFFFF};
static EIF_TYPE_INDEX gen_type3_874 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_874 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_874 [] = {0xFF11,873,0xFFFF};
static EIF_TYPE_INDEX gen_type6_874 [] = {0xFF11,873,0xFFFF};
static EIF_TYPE_INDEX gen_type7_874 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_874 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_874 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_874 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_874 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_874 [] = {0xFF11,873,0xFFFF};
static EIF_TYPE_INDEX gen_type13_874 [] = {0xFF11,868,0xFFFF};
static EIF_TYPE_INDEX gen_type14_874 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_874[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_874},
	{1, (BODY_INDEX)-1, 236, gen_type1_874},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 873, gen_type2_874},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_874},
	{14, (BODY_INDEX)-1, 0, gen_type4_874},
	{15, (BODY_INDEX)-1, 873, gen_type5_874},
	{16, (BODY_INDEX)-1, 873, gen_type6_874},
	{17, (BODY_INDEX)-1, 0, gen_type7_874},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_874},
	{21, (BODY_INDEX)-1, 219, gen_type9_874},
	{22, (BODY_INDEX)-1, 219, gen_type10_874},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_874},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 873, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 873, gen_type12_874},
	{12755, (BODY_INDEX)-1, 205, NULL},
	{12756, (BODY_INDEX)-1, 205, NULL},
	{12757, (BODY_INDEX)-1, 868, gen_type13_874},
	{12758, (BODY_INDEX)-1, 219, gen_type14_874},
};

extern void Init874(void);
void Init874(void)
{
	IDSC(desc_874, 0, 873);
	IDSC(desc_874 + 1, 1, 873);
	IDSC(desc_874 + 32, 392, 873);
}


#ifdef __cplusplus
}
#endif
