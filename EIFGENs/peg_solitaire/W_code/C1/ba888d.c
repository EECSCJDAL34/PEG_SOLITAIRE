/*
 * Class BAD_PLAYER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_888 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_888 [] = {0xFF11,236,0xFF12,887,0xFFFF};
static EIF_TYPE_INDEX gen_type2_888 [] = {0xFF11,887,0xFFFF};
static EIF_TYPE_INDEX gen_type3_888 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_888 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_888 [] = {0xFF11,887,0xFFFF};
static EIF_TYPE_INDEX gen_type6_888 [] = {0xFF11,887,0xFFFF};
static EIF_TYPE_INDEX gen_type7_888 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_888 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_888 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_888 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_888 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_888 [] = {0xFF11,887,0xFFFF};
static EIF_TYPE_INDEX gen_type13_888 [] = {0xFF11,863,0xFFFF};
static EIF_TYPE_INDEX gen_type14_888 [] = {0xFF11,860,0xFFFF};


static struct desc_info desc_888[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_888},
	{1, (BODY_INDEX)-1, 236, gen_type1_888},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 887, gen_type2_888},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_888},
	{14, (BODY_INDEX)-1, 0, gen_type4_888},
	{15, (BODY_INDEX)-1, 887, gen_type5_888},
	{16, (BODY_INDEX)-1, 887, gen_type6_888},
	{17, (BODY_INDEX)-1, 0, gen_type7_888},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_888},
	{21, (BODY_INDEX)-1, 219, gen_type9_888},
	{22, (BODY_INDEX)-1, 219, gen_type10_888},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_888},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 887, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 887, gen_type12_888},
	{12817, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12818, 0, 863, gen_type13_888},
	{12819, 8, 860, gen_type14_888},
	{12820, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12821, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12822, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12823, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12824, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init888(void);
void Init888(void)
{
	IDSC(desc_888, 0, 887);
	IDSC(desc_888 + 1, 1, 887);
	IDSC(desc_888 + 32, 355, 887);
	IDSC(desc_888 + 35, 348, 887);
}


#ifdef __cplusplus
}
#endif
