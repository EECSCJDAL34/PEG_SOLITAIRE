/*
 * Class PLAYER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_887 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_887 [] = {0xFF11,236,0xFF12,886,0xFFFF};
static EIF_TYPE_INDEX gen_type2_887 [] = {0xFF11,886,0xFFFF};
static EIF_TYPE_INDEX gen_type3_887 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_887 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_887 [] = {0xFF11,886,0xFFFF};
static EIF_TYPE_INDEX gen_type6_887 [] = {0xFF11,886,0xFFFF};
static EIF_TYPE_INDEX gen_type7_887 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_887 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_887 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_887 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_887 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_887 [] = {0xFF11,886,0xFFFF};
static EIF_TYPE_INDEX gen_type13_887 [] = {0xFF11,863,0xFFFF};
static EIF_TYPE_INDEX gen_type14_887 [] = {0xFF11,860,0xFFFF};


static struct desc_info desc_887[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_887},
	{1, (BODY_INDEX)-1, 236, gen_type1_887},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 886, gen_type2_887},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_887},
	{14, (BODY_INDEX)-1, 0, gen_type4_887},
	{15, (BODY_INDEX)-1, 886, gen_type5_887},
	{16, (BODY_INDEX)-1, 886, gen_type6_887},
	{17, (BODY_INDEX)-1, 0, gen_type7_887},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_887},
	{21, (BODY_INDEX)-1, 219, gen_type9_887},
	{22, (BODY_INDEX)-1, 219, gen_type10_887},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_887},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 886, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 886, gen_type12_887},
	{12817, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12818, 0, 863, gen_type13_887},
	{12819, 8, 860, gen_type14_887},
};

extern void Init887(void);
void Init887(void)
{
	IDSC(desc_887, 0, 886);
	IDSC(desc_887 + 1, 1, 886);
	IDSC(desc_887 + 32, 355, 886);
}


#ifdef __cplusplus
}
#endif
