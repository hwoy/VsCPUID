.586
option casemap:none
option segment:use32

_TEXT segment
_getSMF@4 proc
enter 4,0
push edi
mov eax,1

cpuid
mov dword ptr[ebp-4],eax
mov edi,dword ptr[ebp+8]

;==========================================================
shl eax,(32-4)
shr eax,(32-4)
mov dword ptr[edi],eax

mov eax,dword ptr[ebp-4]
shl eax,(32-8)
shr eax,(32-4)
mov dword ptr[edi+4],eax


mov eax,dword ptr[ebp-4]
shl eax,(32-12)
shr eax,(32-4)
mov dword ptr[edi+4+4],eax
;==========================================================
mov eax,dword ptr[ebp-4]
shl eax,(32-14)
shr eax,(32-2)
mov dword ptr[edi+4+4+4],eax

mov eax,dword ptr[ebp-4]
shl eax,(32-20)
shr eax,(32-4)
mov dword ptr[edi+4+4+4+4],eax

mov eax,dword ptr[ebp-4]
shl eax,(32-28)
shr eax,(32-8)
mov dword ptr[edi+4+4+4+4+4],eax

pop edi
leave
ret 4
_getSMF@4 endp
_TEXT ends
end