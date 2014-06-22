_TEXT segment
_getCPUflag_EXT@8 proc

enter 0,0
mov eax,dword ptr[ebp+8]
push eax
call _getCPUflagEBX_EXT@4

mov eax,dword ptr[ebp+8+4]
push eax
call _getCPUflagECX_EXT@4

leave
ret 8
_getCPUflag_EXT@8 endp
;=======================================================================================




_getAllCPUflag_EXT@8 proc

enter 0,0
mov eax,dword ptr[ebp+8]
push eax
call _getCPUAllflagEBX_EXT@4

mov eax,dword ptr[ebp+8+4]
push eax
call _getCPUAllflagECX_EXT@4

leave
ret 8
_getAllCPUflag_EXT@8 endp
;=======================================================================================



_getCPUflagEBX_EXT@4 proc
enter 0,0
push ebx
mov eax,7
cpuid
push ebx
push offset ebx_ext_flag
push dword ptr[ebp+8]
call _copyCPUflag@12

pop ebx
leave
ret 4
_getCPUflagEBX_EXT@4 endp
;=======================================================================================

;=======================================================================================

_getCPUflagECX_EXT@4 proc
enter 0,0
mov eax,7
cpuid
push ecx
push offset ecx_ext_flag
push dword ptr[ebp+8]
call _copyCPUflag@12

leave
ret 4
_getCPUflagECX_EXT@4 endp
;=======================================================================================




;=======================================================================================
_getCPUAllflagEBX_EXT@4 proc
enter 0,0


mov eax,dword ptr[ebp+8]
push offset ebx_ext_flag
push eax
call _copyCPUAllflag@8

leave
ret 4
_getCPUAllflagEBX_EXT@4  endp
;=======================================================================================

_getCPUAllflagECX_EXT@4 proc
enter 0,0


mov eax,dword ptr[ebp+8]
push offset ecx_ext_flag
push eax
call _copyCPUAllflag@8

leave
ret 4
_getCPUAllflagECX_EXT@4 endp
;=======================================================================================

_TEXT ends