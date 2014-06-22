_TEXT segment 
_getCPUflag@8 proc

enter 0,0
mov eax,dword ptr[ebp+8]
push eax
call _getCPUflagEDX@4

mov eax,dword ptr[ebp+8+4]
push eax
call _getCPUflagECX@4

leave
ret 8
_getCPUflag@8 endp
;=======================================================================================

_getAllCPUflag@8 proc

enter 0,0
mov eax,dword ptr[ebp+8]
push eax
call _getCPUAllflagEDX@4

mov eax,dword ptr[ebp+8+4]
push eax
call _getCPUAllflagECX@4

leave
ret 8
_getAllCPUflag@8 endp
;=======================================================================================




_getCPUflagEDX@4 proc
enter 0,0
mov eax,1
cpuid
push edx
push offset edx_flag
push dword ptr[ebp+8]
call _copyCPUflag@12

leave
ret 4
_getCPUflagEDX@4 endp
;=======================================================================================

_getCPUflagECX@4 proc
enter 0,0
mov eax,1
cpuid
push ecx
push offset ecx_flag
push dword ptr[ebp+8]
call _copyCPUflag@12

leave
ret 4
_getCPUflagECX@4 endp
;=======================================================================================

_getCPUAllflagECX@4 proc
enter 0,0

mov eax,dword ptr[ebp+8]
push offset ecx_flag
push eax
call _copyCPUAllflag@8


leave
ret 4
_getCPUAllflagECX@4  endp
;=======================================================================================
_getCPUAllflagEDX@4 proc
enter 0,0


mov eax,dword ptr[ebp+8]
push offset edx_flag
push eax
call _copyCPUAllflag@8

leave
ret 4
_getCPUAllflagEDX@4  endp
;=======================================================================================

_TEXT ends