CONST segment
;====================================================================================================================
_ecx_sse3 db 0 ,"sse3: 			Prescott New Instructions-SSE3 (PNI)",0
_ecx_pclmulqdq db 1 ,"pclmulqdq: 		PCLMULQDQ support",0
_ecx_dtes64 db 2 ,"dtes64: 		64-bit debug store (edx bit 21)",0
_ecx_monitor db 3 ,"monitor: 		MONITOR and MWAIT instructions (SSE3)",0
_ecx_ds_cpl db 4 ,"ds_cpl: 		CPL qualified debug store",0
_ecx_vmx db 5 ,"vmx: 			Virtual Machine eXtensions",0
_ecx_smx db 6 ,"smx: 			Safer Mode Extensions (LaGrande)",0
_ecx_est db 7 ,"est: 			Enhanced SpeedStep",0
_ecx_tm2 db 8 ,"tm2: 			Thermal Monitor 2",0
_ecx_ssse3 db 9 ,"ssse3: 			Supplemental SSE3 instructions",0
_ecx_cnxt_id db 10 ,"cnxt_id: 		L1 Context ID",0

_ecx_fma db 12 ,"fma: 			Fused multiply-add (FMA3)",0
_ecx_cx16 db 13 ,"cx16: 			CMPXCHG16B instruction",0
_ecx_xtpr db 14 ,"xtpr: 			Can disable sending task priority messages",0
_ecx_pdcm db 15 ,"pdcm: 			Perfmon & debug capability",0

_ecx_pcid db 17 ,"pcid: 			Process context identifiers (CR4 bit 17)",0
_ecx_dca db 18 ,"dca: 			Direct cache access for DMA writes",0
_ecx_sse4_1 db 19 ,"sse4_1: 		SSE4.1 instructions",0
_ecx_sse4_2 db 20 ,"sse4_2: 		SSE4.2 instructions",0
_ecx_x2apic db 21 ,"x2apic: 		x2APIC support",0
_ecx_movbe db 22 ,"movbe: 			MOVBE instruction (big-endian)",0
_ecx_popcnt db 23 ,"popcnt: 		POPCNT instruction",0
_ecx_tsc_deadline db 24 ,"tsc_deadline: 	APIC supports one-shot operation using a TSC deadline value",0
_ecx_aes db 25 ,"aes: 			AES instruction set",0
_ecx_xsave db 26 ,"xsave: 			XSAVE, XRESTOR, XSETBV, XGETBV",0
_ecx_osxsave db 27 ,"osxsave: 		XSAVE enabled by OS",0
_ecx_avx db 28 ,"avx: 			Advanced Vector Extensions",0
_ecx_f16c db 29 ,"f16c: 			F16C (half-precision) FP support",0
_ecx_rdrnd db 30 ,"rdrnd: 			RDRAND (on-chip random number generator) support",0
_ecx_hypervisor db 31 ,"hypervisor: 	Running on a hypervisor (always 0 on a real CPU, but also with some hypervisors)",0
;====================================================================================================================

ecx_flag 		dd offset _ecx_sse3
			dd offset _ecx_pclmulqdq
			dd offset _ecx_dtes64
			dd offset _ecx_monitor
			dd offset _ecx_ds_cpl
			dd offset _ecx_vmx
			dd offset _ecx_smx
			dd offset _ecx_est
			dd offset _ecx_tm2
			dd offset _ecx_ssse3
			dd offset _ecx_cnxt_id

			dd offset _ecx_fma
			dd offset _ecx_cx16
			dd offset _ecx_xtpr
			dd offset _ecx_pdcm

			dd offset _ecx_pcid
			dd offset _ecx_dca
			dd offset _ecx_sse4_1
			dd offset _ecx_sse4_2
			dd offset _ecx_x2apic
			dd offset _ecx_movbe
			dd offset _ecx_popcnt
			dd offset _ecx_tsc_deadline
			dd offset _ecx_aes
			dd offset _ecx_xsave
			dd offset _ecx_osxsave
			dd offset _ecx_avx
			dd offset _ecx_f16c
			dd offset _ecx_rdrnd
			dd offset _ecx_hypervisor
			dd 0
;====================================================================================================================
CONST ends