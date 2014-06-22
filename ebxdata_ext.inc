CONST segment
;====================================================================================================================
_ebx_ext_fsgbase db 0 ,"fsgbase: 		Access to base of %fs and %gs",0

_ebx_ext_bmi1 db 3 ,"bmi1: 			Bit Manipulation Instruction Sets",0
_ebx_ext_hle db 4 ,"hle: 			Transactional Synchronization Extensions",0
_ebx_ext_avx2 db 5 ,"avx2: 			Advanced Vector Extensions 2",0

_ebx_ext_smep db 7 ,"smep: 			Supervisor-Mode Execution Prevention",0
_ebx_ext_bmi2 db 8 ,"bmi2: 			Bit Manipulation Instruction Sets",0
_ebx_ext_erms db 9 ,"erms: 			Enhanced REP MOVSB/STOSB",0
_ebx_ext_invpcid db 10 ,"invpcid: 		INVPCID instruction",0
_ebx_ext_rtm db 11 ,"rtm: 			Transactional Synchronization Extensions",0

_ebx_ext_mpx db 14 ,"mpx: 			Intel MPX (Memory Protection Extensions)",0
_ebx_ext_avx512f db 16 ,"avx512f: 		AVX-512 Foundation",0
_ebx_ext_rdseed db 18 ,"rdseed: 		RDSEED instruction",0
_ebx_ext_adx db 19 ,"adx: 			Intel ADX (Multi-Precision Add-Carry Instruction Extensions)",0
_ebx_ext_smap db 20 ,"smap: 			Supervisor Mode Access Prevention",0

_ebx_ext_ipt db 25 ,"ipt: 			Intel Processor Trace",0
_ebx_ext_avx512pf db 26 ,"avx512pf: 		AVX-512 PFI (Prefetch Instructions)",0
_ebx_ext_avx512er db 27 ,"avx512er: 		AVX-512 ERI (Exponential and Reciprocal Instructions)",0
_ebx_ext_avx512cd db 28 ,"avx512cd: 		AVX-512 CDI (Conflict Detection Instructions)",0
_ebx_ext_sha db 29 ,"sha: 			Intel SHA extensions",0

;====================================================================================================================

ebx_ext_flag dd offset _ebx_ext_fsgbase

dd offset _ebx_ext_bmi1
dd offset _ebx_ext_hle
dd offset _ebx_ext_avx2

dd offset _ebx_ext_smep
dd offset _ebx_ext_bmi2
dd offset _ebx_ext_erms
dd offset _ebx_ext_invpcid
dd offset _ebx_ext_rtm

dd offset _ebx_ext_mpx
dd offset _ebx_ext_avx512f
dd offset _ebx_ext_rdseed
dd offset _ebx_ext_adx
dd offset _ebx_ext_smap

dd offset _ebx_ext_ipt
dd offset _ebx_ext_avx512pf
dd offset _ebx_ext_avx512er
dd offset _ebx_ext_avx512cd
dd offset _ebx_ext_sha
dd 0
;====================================================================================================================
CONST ends