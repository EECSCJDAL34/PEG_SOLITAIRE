/*
 * Class C_DATE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_860 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_860 [] = {0xFF11,236,0xFF12,859,0xFFFF};
static EIF_TYPE_INDEX gen_type2_860 [] = {0xFF11,859,0xFFFF};
static EIF_TYPE_INDEX gen_type3_860 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_860 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_860 [] = {0xFF11,859,0xFFFF};
static EIF_TYPE_INDEX gen_type6_860 [] = {0xFF11,859,0xFFFF};
static EIF_TYPE_INDEX gen_type7_860 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_860 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_860 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_860 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_860 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_860 [] = {0xFF11,859,0xFFFF};
static EIF_TYPE_INDEX gen_type13_860 [] = {0xFF11,150,0xFFFF};


static struct desc_info desc_860[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_860},
	{1, (BODY_INDEX)-1, 236, gen_type1_860},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 859, gen_type2_860},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_860},
	{14, (BODY_INDEX)-1, 0, gen_type4_860},
	{15, (BODY_INDEX)-1, 859, gen_type5_860},
	{16, (BODY_INDEX)-1, 859, gen_type6_860},
	{17, (BODY_INDEX)-1, 0, gen_type7_860},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_860},
	{21, (BODY_INDEX)-1, 219, gen_type9_860},
	{22, (BODY_INDEX)-1, 219, gen_type10_860},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_860},
	{12612, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 859, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 859, gen_type12_860},
	{12613, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12614, 8, 190, NULL},
	{12615, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12590, (BODY_INDEX)-1, 205, NULL},
	{12591, (BODY_INDEX)-1, 205, NULL},
	{12592, (BODY_INDEX)-1, 205, NULL},
	{12593, (BODY_INDEX)-1, 205, NULL},
	{12594, (BODY_INDEX)-1, 205, NULL},
	{12595, (BODY_INDEX)-1, 205, NULL},
	{12596, 12, 205, NULL},
	{12597, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12598, (BODY_INDEX)-1, 205, NULL},
	{12599, (BODY_INDEX)-1, 205, NULL},
	{12600, (BODY_INDEX)-1, 205, NULL},
	{12601, (BODY_INDEX)-1, 205, NULL},
	{12602, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12603, 0, 150, gen_type13_860},
	{12604, (BODY_INDEX)-1, 214, NULL},
	{12605, (BODY_INDEX)-1, 214, NULL},
	{12606, (BODY_INDEX)-1, 205, NULL},
	{12607, (BODY_INDEX)-1, 205, NULL},
	{12608, (BODY_INDEX)-1, 205, NULL},
	{12609, (BODY_INDEX)-1, 205, NULL},
	{12610, (BODY_INDEX)-1, 205, NULL},
	{12611, (BODY_INDEX)-1, 205, NULL},
};

extern void Init860(void);
void Init860(void)
{
	IDSC(desc_860, 0, 859);
	IDSC(desc_860 + 1, 1, 859);
	IDSC(desc_860 + 32, 368, 859);
}


#ifdef __cplusplus
}
#endif
