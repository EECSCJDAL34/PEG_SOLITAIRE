/*
 * Class DATE_MEASUREMENT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_881 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_881 [] = {0xFF11,236,0xFF12,880,0xFFFF};
static EIF_TYPE_INDEX gen_type2_881 [] = {0xFF11,880,0xFFFF};
static EIF_TYPE_INDEX gen_type3_881 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_881 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_881 [] = {0xFF11,880,0xFFFF};
static EIF_TYPE_INDEX gen_type6_881 [] = {0xFF11,880,0xFFFF};
static EIF_TYPE_INDEX gen_type7_881 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_881 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_881 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_881 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_881 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_881 [] = {0xFF11,880,0xFFFF};
static EIF_TYPE_INDEX gen_type13_881 [] = {0xFF11,868,0xFFFF};
static EIF_TYPE_INDEX gen_type14_881 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type15_881 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type16_881 [] = {0xFF11,249,0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type17_881 [] = {0xFF11,249,0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type18_881 [] = {0xFF11,249,0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type19_881 [] = {0xFF11,249,0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type20_881 [] = {0xFF11,296,205,0xFFFF};


static struct desc_info desc_881[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_881},
	{1, (BODY_INDEX)-1, 236, gen_type1_881},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 880, gen_type2_881},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_881},
	{14, (BODY_INDEX)-1, 0, gen_type4_881},
	{15, (BODY_INDEX)-1, 880, gen_type5_881},
	{16, (BODY_INDEX)-1, 880, gen_type6_881},
	{17, (BODY_INDEX)-1, 0, gen_type7_881},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_881},
	{21, (BODY_INDEX)-1, 219, gen_type9_881},
	{22, (BODY_INDEX)-1, 219, gen_type10_881},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_881},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 880, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 880, gen_type12_881},
	{12755, (BODY_INDEX)-1, 205, NULL},
	{12756, (BODY_INDEX)-1, 205, NULL},
	{12757, (BODY_INDEX)-1, 868, gen_type13_881},
	{12758, (BODY_INDEX)-1, 219, gen_type14_881},
	{12784, (BODY_INDEX)-1, 205, NULL},
	{12785, (BODY_INDEX)-1, 205, NULL},
	{12786, (BODY_INDEX)-1, 205, NULL},
	{12787, (BODY_INDEX)-1, 205, NULL},
	{12788, (BODY_INDEX)-1, 205, NULL},
	{12789, (BODY_INDEX)-1, 205, NULL},
	{12790, (BODY_INDEX)-1, 219, gen_type15_881},
	{12791, (BODY_INDEX)-1, 249, gen_type16_881},
	{12792, (BODY_INDEX)-1, 249, gen_type17_881},
	{12793, (BODY_INDEX)-1, 249, gen_type18_881},
	{12794, (BODY_INDEX)-1, 249, gen_type19_881},
	{12795, (BODY_INDEX)-1, 190, NULL},
	{12796, (BODY_INDEX)-1, 190, NULL},
	{12797, (BODY_INDEX)-1, 296, gen_type20_881},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 205, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 205, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 205, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12809, (BODY_INDEX)-1, 205, NULL},
};

extern void Init881(void);
void Init881(void)
{
	IDSC(desc_881, 0, 880);
	IDSC(desc_881 + 1, 1, 880);
	IDSC(desc_881 + 32, 392, 880);
	IDSC(desc_881 + 36, 382, 880);
	IDSC(desc_881 + 50, 383, 880);
}


#ifdef __cplusplus
}
#endif
