CONST segment
_edx_hi_fpu db 0 ,"fpu: 			Onboard x87 FPU",0
_edx_hi_vme db 1 ,"vme: 			Virtual mode extensions (VIF)",0
_edx_hi_de  db 2 ,"de: 			Debugging extensions (CR4 bit 3)",0
_edx_hi_pse db 3 ,"pse: 			Page Size Extension",0
_edx_hi_tsc db 4 ,"tsc: 			Time Stamp Counter",0
_edx_hi_msr db 5 ,"msr: 			Model-specific registers",0
_edx_hi_pae db 6 ,"pae: 			Physical Address Extension",0
_edx_hi_mce db 7 ,"mce: 			Machine Check Exception",0
_edx_hi_cx8 db 8 ,"cx8: 			CMPXCHG8 (compare-and-swap) instruction",0
_edx_hi_apic db 9 ,"apic: 			Onboard Advanced Programmable Interrupt Controller",0
_edx_hi_syscall db 11 ,"syscall: 		SYSCALL and SYSRET instructions",0
_edx_hi_mtrr db 12 ,"mtrr: 			Memory Type Range Registers",0
_edx_hi_pge db 13 ,"pge: 			Page Global Enable bit in CR4",0
_edx_hi_mca db 14 ,"mca: 			Machine check architecture",0
_edx_hi_cmov db 15 ,"cmov: 			Conditional move and FCMOV instructions",0
_edx_hi_pat db 16 ,"pat: 			Page Attribute Table",0
_edx_hi_pse36 db 17 ,"pse36: 			36-bit page size extension",0

_edx_hi_mp db 19 ,"mp: 			Multiprocessor Capable",0
_edx_hi_nx db 20 ,"nx: 			NX bit",0

_edx_hi_mmxext db 22 ,"mmxext: 		Extended MMX",0
_edx_hi_mmx db 23 ,"mmx: 			MMX instructions",0
_edx_hi_fxsr db 24 ,"fxsr: 			FXSAVE, FXRSTOR instructions, CR4 bit 9",0
_edx_hi_fxsr_opt db 25 ,"fxsr_opt: 		FXSAVE/FXRSTOR optimizations",0
_edx_hi_pdpe1gb db 26 ,"pdpe1gb: 		Gibibyte pages",0
_edx_hi_rdtscp db 27 ,"rdtscp: 		RDTSCP instruction",0

_edx_hi_lm db 29 ,"lm: 			Long mode",0
_edx_hi_3dnowext db 30 ,"3dnowext: 		Extended 3DNow!",0
_edx_hi_3dnow db 31 ,"3dnow: 			3DNow!",0

;===========================================================================================
edx_hi_flag dd offset _edx_hi_fpu
			dd offset _edx_hi_vme
			dd offset _edx_hi_de
			dd offset _edx_hi_pse
			dd offset _edx_hi_tsc
			dd offset _edx_hi_msr
			dd offset _edx_hi_pae
			dd offset _edx_hi_mce
			dd offset _edx_hi_cx8
			dd offset _edx_hi_apic
			dd offset _edx_hi_syscall
			dd offset _edx_hi_mtrr
			dd offset _edx_hi_pge
			dd offset _edx_hi_mca
			dd offset _edx_hi_cmov
			dd offset _edx_hi_pat
			dd offset _edx_hi_pse36

			dd offset _edx_hi_mp
			dd offset _edx_hi_nx

			dd offset _edx_hi_mmxext
			dd offset _edx_hi_mmx
			dd offset _edx_hi_fxsr
			dd offset _edx_hi_fxsr_opt
			dd offset _edx_hi_pdpe1gb
			dd offset _edx_hi_rdtscp

			dd offset _edx_hi_lm
			dd offset _edx_hi_3dnowext
			dd offset _edx_hi_3dnow
			dd 0


CONST ends