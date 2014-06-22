.586
option casemap:none
option segment:use32

_TEXT segment
_getCPUName@4 proc
enter 0,0
push ebx
xor eax,eax
cpuid
mov eax,dword ptr[ebp+8]
mov dword ptr[eax],ebx
mov dword ptr[eax+4],edx
mov dword ptr[eax+8],ecx
mov byte ptr[eax+12],0
pop ebx
leave
ret 4
_getCPUName@4  endp
_TEXT  ends

end