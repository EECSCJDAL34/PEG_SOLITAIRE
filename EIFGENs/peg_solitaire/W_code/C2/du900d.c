/*
 * Class DURATION
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_900 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_900 [] = {0xFF11,236,0xFF12,899,0xFFFF};
static EIF_TYPE_INDEX gen_type2_900 [] = {0xFF11,899,0xFFFF};
static EIF_TYPE_INDEX gen_type3_900 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_900 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_900 [] = {0xFF11,899,0xFFFF};
static EIF_TYPE_INDEX gen_type6_900 [] = {0xFF11,899,0xFFFF};
static EIF_TYPE_INDEX gen_type7_900 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_900 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_900 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_900 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_900 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_900 [] = {0xFF11,899,0xFFFF};
static EIF_TYPE_INDEX gen_type13_900 [] = {0xFF11,899,0xFFFF};
static EIF_TYPE_INDEX gen_type14_900 [] = {0xFF11,899,0xFFFF};
static EIF_TYPE_INDEX gen_type15_900 [] = {0xFF11,899,0xFFFF};
static EIF_TYPE_INDEX gen_type16_900 [] = {0xFF11,899,0xFFFF};
static EIF_TYPE_INDEX gen_type17_900 [] = {0xFF11,899,0xFFFF};


static struct desc_info desc_900[] = {
	{(BODY_INDEX) 12953, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_900},
	{1, (BODY_INDEX)-1, 236, gen_type1_900},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 899, gen_type2_900},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_900},
	{14, (BODY_INDEX)-1, 0, gen_type4_900},
	{15, (BODY_INDEX)-1, 899, gen_type5_900},
	{16, (BODY_INDEX)-1, 899, gen_type6_900},
	{17, (BODY_INDEX)-1, 0, gen_type7_900},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_900},
	{21, (BODY_INDEX)-1, 219, gen_type9_900},
	{22, (BODY_INDEX)-1, 219, gen_type10_900},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_900},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 899, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 899, gen_type12_900},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 190, NULL},
	{1443, (BODY_INDEX)-1, 190, NULL},
	{1444, (BODY_INDEX)-1, 190, NULL},
	{1445, (BODY_INDEX)-1, 190, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 190, NULL},
	{12954, (BODY_INDEX)-1, 190, NULL},
	{12955, (BODY_INDEX)-1, 190, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 899, gen_type13_900},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 899, gen_type14_900},
	{12957, (BODY_INDEX)-1, 899, gen_type15_900},
	{12956, (BODY_INDEX)-1, 899, gen_type16_900},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 899, gen_type17_900},
};

extern void Init900(void);
void Init900(void)
{
	IDSC(desc_900, 0, 899);
	IDSC(desc_900 + 1, 1, 899);
	IDSC(desc_900 + 32, 203, 899);
	IDSC(desc_900 + 36, 381, 899);
	IDSC(desc_900 + 39, 391, 899);
}


#ifdef __cplusplus
}
#endif
