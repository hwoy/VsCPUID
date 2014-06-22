.586
option casemap:none
option segment:use32

include edxdata.inc
include ecxdata.inc
include ebxdata_ext.inc
include ecxdata_ext.inc
include edxdata_hi.inc
include ecxdata_hi.inc

include 01eax.inc
include 07eax.inc
include 0heax.inc
_TEXT segment
;=======================================================================================








;===============================================================================================
;                                COPY FUNCTION SECTION
;===============================================================================================
_copyCPUAllflag@8:
enter 0,0
push edi
push esi


mov esi,dword ptr[ebp+8+4]
mov edi,dword ptr[ebp+8]

@@:
mov edx,[esi]
test edx,edx
jz @f
mov dword ptr[edi],edx
add edi,4
add esi,4
jmp @b

@@:
mov dword ptr[edi],0


pop esi
pop edi
leave
ret 8



;=======================================================================================
_copyCPUflag@12:
enter 0,0
push edi
push esi

mov esi,dword ptr[ebp+8+4]
mov edi,dword ptr[ebp+8]

@@:
mov edx,[esi]
test edx,edx
jz @f
xor eax,eax
mov al,byte ptr[edx]
bt dword ptr[ebp+8+4+4],eax
jnc _copyCPUflag@12_goon
mov dword ptr[edi],edx


add edi,4
_copyCPUflag@12_goon:
add esi,4
jmp @b

@@:
mov dword ptr[edi],0

pop esi
pop edi
leave
ret 12

;=======================================================================================


_hcpuid@0:
mov eax,80000000h
cpuid
cmp eax,80000001h
jae _hcpuid@0_exit0
mov eax,1
jmp _hcpuid@0_exit
_hcpuid@0_exit0:
xor eax,eax
_hcpuid@0_exit:
ret 

_TEXT ends



end



;=======================================================================================