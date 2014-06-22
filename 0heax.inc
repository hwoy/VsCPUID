_TEXT segment
_getCPUflag_HI@8 proc

enter 0,0
mov eax,dword ptr[ebp+8]
push eax
call _getCPUflagEDX_HI@4

mov eax,dword ptr[ebp+8+4]
push eax
call _getCPUflagECX_HI@4

leave
ret 8
_getCPUflag_HI@8 endp
;=======================================================================================




_getAllCPUflag_HI@8 proc

enter 0,0
mov eax,dword ptr[ebp+8]
push eax
call _getCPUAllflagEDX_HI@4

mov eax,dword ptr[ebp+8+4]
push eax
call _getCPUAllflagECX_HI@4

leave
ret 8
_getAllCPUflag_HI@8 endp
;=======================================================================================



_getCPUflagEDX_HI@4 proc
enter 0,0

call _hcpuid@0
test eax,eax
jnz @f
mov eax,80000001h
cpuid
push edx
push offset edx_hi_flag
push dword ptr[ebp+8]
call _copyCPUflag@12

@@:
leave
ret 4
_getCPUflagEDX_HI@4 endp
;=======================================================================================

;=======================================================================================

_getCPUflagECX_HI@4 proc
enter 0,0
call _hcpuid@0
test eax,eax
jnz @f
mov eax,80000001h
cpuid
push ecx
push offset ecx_hi_flag
push dword ptr[ebp+8]
call _copyCPUflag@12
@@:
leave
ret 4
_getCPUflagECX_HI@4 endp
;=======================================================================================




;=======================================================================================
_getCPUAllflagEDX_HI@4 proc
enter 0,0


mov eax,dword ptr[ebp+8]
push offset edx_hi_flag
push eax
call _copyCPUAllflag@8

leave
ret 4
_getCPUAllflagEDX_HI@4  endp
;=======================================================================================

_getCPUAllflagECX_HI@4 proc
enter 0,0


mov eax,dword ptr[ebp+8]
push offset ecx_hi_flag
push eax
call _copyCPUAllflag@8

leave
ret 4
_getCPUAllflagECX_HI@4 endp
;=======================================================================================

_TEXT ends