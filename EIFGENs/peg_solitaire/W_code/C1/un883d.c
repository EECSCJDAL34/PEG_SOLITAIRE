/*
 * Class UNAVAILABLE_SLOT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_883 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_883 [] = {0xFF11,236,0xFF12,882,0xFFFF};
static EIF_TYPE_INDEX gen_type2_883 [] = {0xFF11,882,0xFFFF};
static EIF_TYPE_INDEX gen_type3_883 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_883 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_883 [] = {0xFF11,882,0xFFFF};
static EIF_TYPE_INDEX gen_type6_883 [] = {0xFF11,882,0xFFFF};
static EIF_TYPE_INDEX gen_type7_883 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_883 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_883 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_883 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_883 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_883 [] = {0xFF11,882,0xFFFF};


static struct desc_info desc_883[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_883},
	{1, (BODY_INDEX)-1, 236, gen_type1_883},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{12810, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 882, gen_type2_883},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_883},
	{14, (BODY_INDEX)-1, 0, gen_type4_883},
	{15, (BODY_INDEX)-1, 882, gen_type5_883},
	{16, (BODY_INDEX)-1, 882, gen_type6_883},
	{17, (BODY_INDEX)-1, 0, gen_type7_883},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_883},
	{12812, (BODY_INDEX)-1, 219, gen_type9_883},
	{22, (BODY_INDEX)-1, 219, gen_type10_883},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_883},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 882, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 882, gen_type12_883},
	{12811, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init883(void);
void Init883(void)
{
	IDSC(desc_883, 0, 882);
	IDSC(desc_883 + 1, 1, 882);
	IDSC(desc_883 + 32, 360, 882);
}


#ifdef __cplusplus
}
#endif
