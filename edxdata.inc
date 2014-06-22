CONST segment
;====================================================================================================================
 _edx_fpu db 0 ,"fpu:			Onboard x87 FPU",0
 _edx_vme db 1 ,"vme:			Virtual 8086 mode extensions (VIF)",0
 _edx_de  db 2 ,"de:				Debugging extensions (CR4 bit 3)",0
 _edx_pse db 3 ,"pse:			Page Size Extension",0
 _edx_tsc db 4 ,"tsc:			Time Stamp Counter",0
 _edx_msr db 5 ,"msr: 			Model-specific registers",0
 _edx_pae db 6 ,"pae: 			Physical Address Extension",0
 _edx_mce db 7 ,"mce: 			Machine Check Exception",0
 _edx_cx8 db 8 ,"cx8: 			CMPXCHG8 (compare-and-swap)",0
 _edx_apic db 9, "apic:			Onboard Advanced Programmable Interrupt Controller",0

 _edx_sep db 11 ,"sep: 			SYSENTER and SYSEXIT instructions",0
 _edx_mtrr db 12 ,"mtrr: 			Memory Type Range Registers",0
 _edx_pge  db 13 ,"pge: 			Page Global Enable bit in CR4 ",0
 _edx_mca db 14 ,"mca: 			Machine check architecture",0
 _edx_cmov db 15 ,"cmov: 			Conditional move and FCMOV instructions",0
 _edx_pat db 16 ,"pat: 			Page Attribute",0
 _edx_pse_36 db 17 ,"pse_36: 		36-bit page size extension",0
 _edx_psn db 18 ,"psn: 			Processor Serial Number",0
 _edx_clfsh db 19 ,"clfsh: 			CLFLUSH instruction (SSE2)",0

 _edx_ds db 21 ,"ds: 			Debug store save: trace of executed jumps",0
 _edx_acpi db 22 ,"acpi: 			Onboard thermal control MSRs for ACPI",0
 _edx_mmx db 23 ,"mmx: 			MMX instructions",0
 _edx_fxsr db 24 ,"fxsr: 			FXSAVE, FXRESTOR instructions, CR4 bit 9",0
 _edx_sse db 25 ,"sse: 			SSE instructions (a.k.a. Katmai NewInstructions)",0
 _edx_sse2 db 26 ,"sse2: 			SSE2 instructions",0
 _edx_ss db 27 ,"ss: 			CPU cache supports self-snoop",0
 _edx_htt db 28 ,"htt: 			Hyper-threading",0
 _edx_tm db 29 ,"tm: 			Thermal monitor automatically limits temperature",0
 _edx_ia64 db 30 ,"ia64: 			IA64 processor emulating x86",0
 _edx_pbe db 31 ,"pbe: 			Pending Break Enable (PBE# pin) wakeup support",0
;====================================================================================================================
edx_flag		dd offset _edx_fpu
			dd offset _edx_vme 
			dd offset _edx_de
			dd offset _edx_pse
			dd offset _edx_tsc
			dd offset _edx_msr
			dd offset _edx_pae
			dd offset _edx_mce
			dd offset _edx_cx8
			dd offset _edx_apic 

			dd offset _edx_sep 
			dd offset _edx_mtrr 
			dd offset _edx_pge
			dd offset _edx_mca
			dd offset _edx_cmov
			dd offset _edx_pat
			dd offset _edx_pse_36
			dd offset _edx_psn
			dd offset _edx_clfsh 

			dd offset _edx_ds
			dd offset _edx_acpi
			dd offset _edx_mmx
			dd offset _edx_fxsr
			dd offset _edx_sse
			dd offset _edx_sse2
			dd offset _edx_ss
			dd offset _edx_htt
			dd offset _edx_tm
			dd offset _edx_ia64
			dd offset _edx_pbe
			dd 0

CONST ends