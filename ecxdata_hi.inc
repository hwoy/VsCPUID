CONST segment
_ecx_hi_lahf_lm db 0 ,"lahf_lm: 		LAHF/SAHF in long mode",0
_ecx_hi_cmp_legacy db 1 ,"cmp_legacy: 	Hyperthreading not valid",0
_ecx_hi_svm db 2 ,"svm: 			Secure Virtual Machine",0
_ecx_hi_extapic db 3 ,"extapic: 		Extended APIC space",0
_ecx_hi_cr8_legacy db 4 ,"cr8_legacy: 	CR8 in 32-bit mode",0
_ecx_hi_abm db 5 ,"abm: 			Advanced bit manipulation (lzcnt and popcnt)",0
_ecx_hi_sse4a db 6 ,"sse4a: 			SSE4a",0
_ecx_hi_misalignsse db 7 ,"misalignsse: 	Misaligned SSE mode",0
_ecx_hi_3dnowprefetch db 8 ,"3dnowprefetch: 	PREFETCH and PREFETCHW instructions",0
_ecx_hi_osvw db 9 ,"osvw: 			OS Visible Workaround",0
_ecx_hi_ibs db 10 ,"ibs: 			Instruction Based Sampling",0
_ecx_hi_xop db 11 ,"xop: 			XOP instruction set",0
_ecx_hi_skinit db 12 ,"skinit: 		SKINIT/STGI instructions",0
_ecx_hi_wdt db 13 ,"wdt: 			Watchdog timer",0

_ecx_hi_lwp db 15 ,"lwp: 			Light Weight Profiling",0
_ecx_hi_fma4 db 16 ,"fma4: 			4 operands fused multiply-add",0
_ecx_hi_tce db 17 ,"tce: 			Translation Cache Extension",0

_ecx_hi_nodeid_msr db 19 ,"nodeid_msr: 	NodeID MSR",0

_ecx_hi_tbm db 21 ,"tbm: 			Trailing Bit Manipulation",0
_ecx_hi_topoext db 22 ,"topoext: 		Topology Extensions",0
_ecx_hi_perfctr_core db 23 ,"perfctr_core: 	Core performance counter extensions",0
_ecx_hi_perfctr_nb db 24 ,"perfctr_nb: 	NB performance counter extensions",0

_ecx_hi_dbx db 26 ,"dbx: 			Data breakpoint extensions",0
_ecx_hi_perftsc db 27 ,"perftsc: 		Performance TSC",0
_ecx_hi_pcx_l2i db 28 ,"pcx_l2i: 		L2I perf counter extensions",0


;===========================================================================================
ecx_hi_flag dd offset _ecx_hi_lahf_lm
			dd offset _ecx_hi_cmp_legacy
			dd offset _ecx_hi_svm
			dd offset _ecx_hi_extapic
			dd offset _ecx_hi_cr8_legacy
			dd offset _ecx_hi_abm
			dd offset _ecx_hi_sse4a
			dd offset _ecx_hi_misalignsse
			dd offset _ecx_hi_3dnowprefetch
			dd offset _ecx_hi_osvw
			dd offset _ecx_hi_ibs
			dd offset _ecx_hi_xop
			dd offset _ecx_hi_skinit
			dd offset _ecx_hi_wdt

			dd offset _ecx_hi_lwp
			dd offset _ecx_hi_fma4
			dd offset _ecx_hi_tce

			dd offset _ecx_hi_nodeid_msr

			dd offset _ecx_hi_tbm
			dd offset _ecx_hi_topoext
			dd offset _ecx_hi_perfctr_core
			dd offset _ecx_hi_perfctr_nb

			dd offset _ecx_hi_dbx
			dd offset _ecx_hi_perftsc
			dd offset _ecx_hi_pcx_l2i
			dd 0
CONST ends