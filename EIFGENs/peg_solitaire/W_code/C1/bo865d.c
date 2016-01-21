/*
 * Class BOARD_TEMPLATES_ACCESS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_865 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_865 [] = {0xFF11,917,864,0xFFFF};
static EIF_TYPE_INDEX gen_type2_865 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_865 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_865 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_865 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type6_865 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type7_865 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type8_865 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_865 [] = {0xFF11,860,0xFFFF};


static struct desc_info desc_865[] = {
	{(BODY_INDEX) 12661, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_865},
	{1, (BODY_INDEX)-1, 917, gen_type1_865},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 864, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_865},
	{14, (BODY_INDEX)-1, 0, gen_type3_865},
	{15, (BODY_INDEX)-1, 864, NULL},
	{16, (BODY_INDEX)-1, 864, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type4_865},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type5_865},
	{21, (BODY_INDEX)-1, 219, gen_type6_865},
	{22, (BODY_INDEX)-1, 219, gen_type7_865},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type8_865},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 864, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 864, NULL},
	{12660, (BODY_INDEX)-1, 860, gen_type9_865},
};

extern void Init865(void);
void Init865(void)
{
	IDSC(desc_865, 0, 864);
	IDSC(desc_865 + 1, 1, 864);
	IDSC(desc_865 + 32, 350, 864);
}


#ifdef __cplusplus
}
#endif
