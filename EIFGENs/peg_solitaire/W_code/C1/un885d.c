/*
 * Class UNOCCUPIED_SLOT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_885 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_885 [] = {0xFF11,236,0xFF12,884,0xFFFF};
static EIF_TYPE_INDEX gen_type2_885 [] = {0xFF11,884,0xFFFF};
static EIF_TYPE_INDEX gen_type3_885 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_885 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_885 [] = {0xFF11,884,0xFFFF};
static EIF_TYPE_INDEX gen_type6_885 [] = {0xFF11,884,0xFFFF};
static EIF_TYPE_INDEX gen_type7_885 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_885 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_885 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_885 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_885 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_885 [] = {0xFF11,884,0xFFFF};


static struct desc_info desc_885[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_885},
	{1, (BODY_INDEX)-1, 236, gen_type1_885},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{12810, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 884, gen_type2_885},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_885},
	{14, (BODY_INDEX)-1, 0, gen_type4_885},
	{15, (BODY_INDEX)-1, 884, gen_type5_885},
	{16, (BODY_INDEX)-1, 884, gen_type6_885},
	{17, (BODY_INDEX)-1, 0, gen_type7_885},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_885},
	{12814, (BODY_INDEX)-1, 219, gen_type9_885},
	{22, (BODY_INDEX)-1, 219, gen_type10_885},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_885},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 884, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 884, gen_type12_885},
	{12813, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init885(void);
void Init885(void)
{
	IDSC(desc_885, 0, 884);
	IDSC(desc_885 + 1, 1, 884);
	IDSC(desc_885 + 32, 362, 884);
}


#ifdef __cplusplus
}
#endif
