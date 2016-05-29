/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define XMM27_REG 64
#define XMM9_REG 46
#define ST6_REG 14
#define MASK5_REG 74
#define R13_REG 42
#define XMM14_REG 51
#define ARGP_REG 16
#define PCOM_TRUE 1
#define BND0_REG 77
#define PPERM_SRC 0x00
#define PPERM_ZERO 0x80
#define MM7_REG 36
#define XMM6_REG 27
#define ST3_REG 11
#define MASK2_REG 71
#define BND3_REG 80
#define R10_REG 39
#define XMM11_REG 48
#define XMM19_REG 56
#define ST1_REG 9
#define MASK3_REG 72
#define MM4_REG 33
#define ST7_REG 15
#define XMM25_REG 62
#define ROUND_CEIL 0x2
#define COM_FALSE_P 3
#define XMM3_REG 24
#define XMM24_REG 61
#define ST0_REG 8
#define MASK7_REG 76
#define COM_FALSE_S 2
#define SP_REG 7
#define AX_REG 0
#define ROUND_NO_EXC 0x8
#define MM1_REG 30
#define MM3_REG 32
#define XMM1_REG 22
#define ROUND_ZERO 3
#define XMM16_REG 53
#define FPCR_REG 19
#define XMM8_REG 45
#define XMM4_REG 25
#define ST5_REG 13
#define XMM23_REG 60
#define R12_REG 41
#define R9_REG 38
#define XMM26_REG 63
#define ROUND_MXCSR 0x4
#define BND1_REG 78
#define PCOM_FALSE 0
#define MASK4_REG 73
#define XMM12_REG 49
#define FLAGS_REG 17
#define PPERM_INVERT 0x20
#define MM6_REG 35
#define PPERM_SRC1 0x00
#define PPERM_SRC2 0x10
#define ST2_REG 10
#define MASK1_REG 70
#define XMM10_REG 47
#define XMM20_REG 57
#define ROUND_TRUNC 0x3
#define BND2_REG 79
#define XMM18_REG 55
#define DI_REG 5
#define ROUND_SAE 8
#define XMM29_REG 66
#define NO_ROUND 4
#define BP_REG 6
#define XMM5_REG 26
#define COM_TRUE_P 5
#define COM_TRUE_S 4
#define ROUND_FLOOR 0x1
#define FPSR_REG 18
#define MASK6_REG 75
#define R14_REG 43
#define XMM28_REG 65
#define R15_REG 44
#define XMM13_REG 50
#define ROUND_NEAREST_INT 0
#define PPERM_SIGN 0xc0
#define MM0_REG 29
#define XMM31_REG 68
#define BX_REG 3
#define XMM7_REG 28
#define XMM30_REG 67
#define ST4_REG 12
#define PPERM_INV_SIGN 0xe0
#define R11_REG 40
#define R8_REG 37
#define FIRST_PSEUDO_REG 81
#define MM5_REG 34
#define PPERM_REVERSE 0x40
#define CX_REG 2
#define MASK0_REG 69
#define SI_REG 4
#define XMM22_REG 59
#define XMM15_REG 52
#define XMM0_REG 21
#define XMM17_REG 54
#define ROUND_NEG_INF 1
#define ROUND_POS_INF 2
#define XMM2_REG 23
#define FRAME_REG 20
#define PPERM_ONES 0xa0
#define XMM21_REG 58
#define MM2_REG 31
#define DX_REG 1
#define PPERM_REV_INV 0x60

enum unspec {
  UNSPEC_GOT = 0,
  UNSPEC_GOTOFF = 1,
  UNSPEC_GOTPCREL = 2,
  UNSPEC_GOTTPOFF = 3,
  UNSPEC_TPOFF = 4,
  UNSPEC_NTPOFF = 5,
  UNSPEC_DTPOFF = 6,
  UNSPEC_GOTNTPOFF = 7,
  UNSPEC_INDNTPOFF = 8,
  UNSPEC_PLTOFF = 9,
  UNSPEC_MACHOPIC_OFFSET = 10,
  UNSPEC_PCREL = 11,
  UNSPEC_SIZEOF = 12,
  UNSPEC_STACK_ALLOC = 13,
  UNSPEC_SET_GOT = 14,
  UNSPEC_SET_RIP = 15,
  UNSPEC_SET_GOT_OFFSET = 16,
  UNSPEC_MEMORY_BLOCKAGE = 17,
  UNSPEC_STACK_CHECK = 18,
  UNSPEC_PROBE_STACK = 19,
  UNSPEC_TP = 20,
  UNSPEC_TLS_GD = 21,
  UNSPEC_TLS_LD_BASE = 22,
  UNSPEC_TLSDESC = 23,
  UNSPEC_TLS_IE_SUN = 24,
  UNSPEC_SCAS = 25,
  UNSPEC_FNSTSW = 26,
  UNSPEC_SAHF = 27,
  UNSPEC_PARITY = 28,
  UNSPEC_FSTCW = 29,
  UNSPEC_FLDCW = 30,
  UNSPEC_REP = 31,
  UNSPEC_LD_MPIC = 32,
  UNSPEC_TRUNC_NOOP = 33,
  UNSPEC_DIV_ALREADY_SPLIT = 34,
  UNSPEC_PAUSE = 35,
  UNSPEC_LEA_ADDR = 36,
  UNSPEC_XBEGIN_ABORT = 37,
  UNSPEC_STOS = 38,
  UNSPEC_PEEPSIB = 39,
  UNSPEC_INSN_FALSE_DEP = 40,
  UNSPEC_FIX_NOTRUNC = 41,
  UNSPEC_MASKMOV = 42,
  UNSPEC_MOVMSK = 43,
  UNSPEC_RCP = 44,
  UNSPEC_RSQRT = 45,
  UNSPEC_PSADBW = 46,
  UNSPEC_COPYSIGN = 47,
  UNSPEC_IEEE_MIN = 48,
  UNSPEC_IEEE_MAX = 49,
  UNSPEC_SIN = 50,
  UNSPEC_COS = 51,
  UNSPEC_FPATAN = 52,
  UNSPEC_FYL2X = 53,
  UNSPEC_FYL2XP1 = 54,
  UNSPEC_FRNDINT = 55,
  UNSPEC_FIST = 56,
  UNSPEC_F2XM1 = 57,
  UNSPEC_TAN = 58,
  UNSPEC_FXAM = 59,
  UNSPEC_FRNDINT_FLOOR = 60,
  UNSPEC_FRNDINT_CEIL = 61,
  UNSPEC_FRNDINT_TRUNC = 62,
  UNSPEC_FRNDINT_MASK_PM = 63,
  UNSPEC_FIST_FLOOR = 64,
  UNSPEC_FIST_CEIL = 65,
  UNSPEC_SINCOS_COS = 66,
  UNSPEC_SINCOS_SIN = 67,
  UNSPEC_XTRACT_FRACT = 68,
  UNSPEC_XTRACT_EXP = 69,
  UNSPEC_FSCALE_FRACT = 70,
  UNSPEC_FSCALE_EXP = 71,
  UNSPEC_FPREM_F = 72,
  UNSPEC_FPREM_U = 73,
  UNSPEC_FPREM1_F = 74,
  UNSPEC_FPREM1_U = 75,
  UNSPEC_C2_FLAG = 76,
  UNSPEC_FXAM_MEM = 77,
  UNSPEC_SP_SET = 78,
  UNSPEC_SP_TEST = 79,
  UNSPEC_SP_TLS_SET = 80,
  UNSPEC_SP_TLS_TEST = 81,
  UNSPEC_ROUND = 82,
  UNSPEC_CRC32 = 83,
  UNSPEC_BEXTR = 84,
  UNSPEC_PDEP = 85,
  UNSPEC_PEXT = 86,
  UNSPEC_KMOV = 87,
  UNSPEC_BNDMK = 88,
  UNSPEC_BNDMK_ADDR = 89,
  UNSPEC_BNDSTX = 90,
  UNSPEC_BNDLDX = 91,
  UNSPEC_BNDLDX_ADDR = 92,
  UNSPEC_BNDCL = 93,
  UNSPEC_BNDCU = 94,
  UNSPEC_BNDCN = 95,
  UNSPEC_MPX_FENCE = 96,
  UNSPEC_MOVNTQ = 97,
  UNSPEC_PFRCP = 98,
  UNSPEC_PFRCPIT1 = 99,
  UNSPEC_PFRCPIT2 = 100,
  UNSPEC_PFRSQRT = 101,
  UNSPEC_PFRSQIT1 = 102,
  UNSPEC_MOVNT = 103,
  UNSPEC_LDDQU = 104,
  UNSPEC_PSHUFB = 105,
  UNSPEC_PSIGN = 106,
  UNSPEC_PALIGNR = 107,
  UNSPEC_EXTRQI = 108,
  UNSPEC_EXTRQ = 109,
  UNSPEC_INSERTQI = 110,
  UNSPEC_INSERTQ = 111,
  UNSPEC_BLENDV = 112,
  UNSPEC_INSERTPS = 113,
  UNSPEC_DP = 114,
  UNSPEC_MOVNTDQA = 115,
  UNSPEC_MPSADBW = 116,
  UNSPEC_PHMINPOSUW = 117,
  UNSPEC_PTEST = 118,
  UNSPEC_PCMPESTR = 119,
  UNSPEC_PCMPISTR = 120,
  UNSPEC_FMADDSUB = 121,
  UNSPEC_XOP_UNSIGNED_CMP = 122,
  UNSPEC_XOP_TRUEFALSE = 123,
  UNSPEC_XOP_PERMUTE = 124,
  UNSPEC_FRCZ = 125,
  UNSPEC_AESENC = 126,
  UNSPEC_AESENCLAST = 127,
  UNSPEC_AESDEC = 128,
  UNSPEC_AESDECLAST = 129,
  UNSPEC_AESIMC = 130,
  UNSPEC_AESKEYGENASSIST = 131,
  UNSPEC_PCLMUL = 132,
  UNSPEC_PCMP = 133,
  UNSPEC_VPERMIL = 134,
  UNSPEC_VPERMIL2 = 135,
  UNSPEC_VPERMIL2F128 = 136,
  UNSPEC_CAST = 137,
  UNSPEC_VTESTP = 138,
  UNSPEC_VCVTPH2PS = 139,
  UNSPEC_VCVTPS2PH = 140,
  UNSPEC_VPERMVAR = 141,
  UNSPEC_VPERMTI = 142,
  UNSPEC_GATHER = 143,
  UNSPEC_VSIBADDR = 144,
  UNSPEC_VPERMI2 = 145,
  UNSPEC_VPERMT2 = 146,
  UNSPEC_VPERMI2_MASK = 147,
  UNSPEC_UNSIGNED_FIX_NOTRUNC = 148,
  UNSPEC_UNSIGNED_PCMP = 149,
  UNSPEC_TESTM = 150,
  UNSPEC_TESTNM = 151,
  UNSPEC_SCATTER = 152,
  UNSPEC_RCP14 = 153,
  UNSPEC_RSQRT14 = 154,
  UNSPEC_FIXUPIMM = 155,
  UNSPEC_SCALEF = 156,
  UNSPEC_VTERNLOG = 157,
  UNSPEC_GETEXP = 158,
  UNSPEC_GETMANT = 159,
  UNSPEC_ALIGN = 160,
  UNSPEC_CONFLICT = 161,
  UNSPEC_COMPRESS = 162,
  UNSPEC_COMPRESS_STORE = 163,
  UNSPEC_EXPAND = 164,
  UNSPEC_MASKED_EQ = 165,
  UNSPEC_MASKED_GT = 166,
  UNSPEC_EMBEDDED_ROUNDING = 167,
  UNSPEC_GATHER_PREFETCH = 168,
  UNSPEC_SCATTER_PREFETCH = 169,
  UNSPEC_EXP2 = 170,
  UNSPEC_RCP28 = 171,
  UNSPEC_RSQRT28 = 172,
  UNSPEC_SHA1MSG1 = 173,
  UNSPEC_SHA1MSG2 = 174,
  UNSPEC_SHA1NEXTE = 175,
  UNSPEC_SHA1RNDS4 = 176,
  UNSPEC_SHA256MSG1 = 177,
  UNSPEC_SHA256MSG2 = 178,
  UNSPEC_SHA256RNDS2 = 179,
  UNSPEC_DBPSADBW = 180,
  UNSPEC_PMADDUBSW512 = 181,
  UNSPEC_PMADDWD512 = 182,
  UNSPEC_PSHUFHW = 183,
  UNSPEC_PSHUFLW = 184,
  UNSPEC_CVTINT2MASK = 185,
  UNSPEC_REDUCE = 186,
  UNSPEC_FPCLASS = 187,
  UNSPEC_RANGE = 188,
  UNSPEC_VPMADD52LUQ = 189,
  UNSPEC_VPMADD52HUQ = 190,
  UNSPEC_VPMULTISHIFT = 191,
  UNSPEC_LFENCE = 192,
  UNSPEC_SFENCE = 193,
  UNSPEC_MFENCE = 194,
  UNSPEC_FILD_ATOMIC = 195,
  UNSPEC_FIST_ATOMIC = 196,
  UNSPEC_LDA = 197,
  UNSPEC_STA = 198
};
#define NUM_UNSPEC_VALUES 199
extern const char *const unspec_strings[];

enum unspecv {
  UNSPECV_BLOCKAGE = 0,
  UNSPECV_STACK_PROBE = 1,
  UNSPECV_PROBE_STACK_RANGE = 2,
  UNSPECV_ALIGN = 3,
  UNSPECV_PROLOGUE_USE = 4,
  UNSPECV_SPLIT_STACK_RETURN = 5,
  UNSPECV_CLD = 6,
  UNSPECV_NOPS = 7,
  UNSPECV_RDTSC = 8,
  UNSPECV_RDTSCP = 9,
  UNSPECV_RDPMC = 10,
  UNSPECV_LLWP_INTRINSIC = 11,
  UNSPECV_SLWP_INTRINSIC = 12,
  UNSPECV_LWPVAL_INTRINSIC = 13,
  UNSPECV_LWPINS_INTRINSIC = 14,
  UNSPECV_RDFSBASE = 15,
  UNSPECV_RDGSBASE = 16,
  UNSPECV_WRFSBASE = 17,
  UNSPECV_WRGSBASE = 18,
  UNSPECV_FXSAVE = 19,
  UNSPECV_FXRSTOR = 20,
  UNSPECV_FXSAVE64 = 21,
  UNSPECV_FXRSTOR64 = 22,
  UNSPECV_XSAVE = 23,
  UNSPECV_XRSTOR = 24,
  UNSPECV_XSAVE64 = 25,
  UNSPECV_XRSTOR64 = 26,
  UNSPECV_XSAVEOPT = 27,
  UNSPECV_XSAVEOPT64 = 28,
  UNSPECV_XSAVES = 29,
  UNSPECV_XRSTORS = 30,
  UNSPECV_XSAVES64 = 31,
  UNSPECV_XRSTORS64 = 32,
  UNSPECV_XSAVEC = 33,
  UNSPECV_XSAVEC64 = 34,
  UNSPECV_FNSTENV = 35,
  UNSPECV_FLDENV = 36,
  UNSPECV_FNSTSW = 37,
  UNSPECV_FNCLEX = 38,
  UNSPECV_RDRAND = 39,
  UNSPECV_RDSEED = 40,
  UNSPECV_XBEGIN = 41,
  UNSPECV_XEND = 42,
  UNSPECV_XABORT = 43,
  UNSPECV_XTEST = 44,
  UNSPECV_NLGR = 45,
  UNSPECV_CLWB = 46,
  UNSPECV_PCOMMIT = 47,
  UNSPECV_CLFLUSHOPT = 48,
  UNSPECV_MONITORX = 49,
  UNSPECV_MWAITX = 50,
  UNSPECV_CLZERO = 51,
  UNSPECV_PKU = 52,
  UNSPECV_EMMS = 53,
  UNSPECV_FEMMS = 54,
  UNSPECV_LDMXCSR = 55,
  UNSPECV_STMXCSR = 56,
  UNSPECV_CLFLUSH = 57,
  UNSPECV_MONITOR = 58,
  UNSPECV_MWAIT = 59,
  UNSPECV_VZEROALL = 60,
  UNSPECV_VZEROUPPER = 61,
  UNSPECV_CMPXCHG = 62,
  UNSPECV_XCHG = 63,
  UNSPECV_LOCK = 64
};
#define NUM_UNSPECV_VALUES 65
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */