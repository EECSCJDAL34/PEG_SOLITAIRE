/*
 * Class SLOT_STATUS_ACCESS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_862 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_862 [] = {0xFF11,915,861,0xFFFF};
static EIF_TYPE_INDEX gen_type2_862 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_862 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_862 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_862 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type6_862 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type7_862 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type8_862 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_862 [] = {0xFF11,882,0xFFFF};
static EIF_TYPE_INDEX gen_type10_862 [] = {0xFF11,885,0xFFFF};
static EIF_TYPE_INDEX gen_type11_862 [] = {0xFF11,884,0xFFFF};


static struct desc_info desc_862[] = {
	{(BODY_INDEX) 12637, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_862},
	{1, (BODY_INDEX)-1, 915, gen_type1_862},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 861, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_862},
	{14, (BODY_INDEX)-1, 0, gen_type3_862},
	{15, (BODY_INDEX)-1, 861, NULL},
	{16, (BODY_INDEX)-1, 861, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type4_862},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type5_862},
	{21, (BODY_INDEX)-1, 219, gen_type6_862},
	{22, (BODY_INDEX)-1, 219, gen_type7_862},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type8_862},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 861, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 861, NULL},
	{12634, (BODY_INDEX)-1, 882, gen_type9_862},
	{12635, (BODY_INDEX)-1, 885, gen_type10_862},
	{12636, (BODY_INDEX)-1, 884, gen_type11_862},
};

extern void Init862(void);
void Init862(void)
{
	IDSC(desc_862, 0, 861);
	IDSC(desc_862 + 1, 1, 861);
	IDSC(desc_862 + 32, 352, 861);
}


#ifdef __cplusplus
}
#endif
