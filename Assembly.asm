; -----------------------------------------------------------------------------
; Some assembly procedures that get called from the C program.
;
; @author Jacob Schrum, 8/5/2022
; -----------------------------------------------------------------------------

	global sendArray
	global readAssemblyIntArray
	section .text
; The int[] pointer parameter will be in register rdi, 
; the int parameter is in esi, and the return value comes from eax
sendArray:
	mov eax, [rdi + 4*rsi]
	ret 				; Implicitly returns eax

; The int parameter is in register edi
readAssemblyIntArray:
	mov eax, [intArray + 4*edi]
	ret

; This section is a data segment that stores static global array variables
	section .data

intArray	dd 	89, 10, 67, -1, 4, 27, -12, 34, 86, 3
quadArray	dq 	5FEE99h, 0E9392Ch, 0FFFh, 453h, 12345678h, 100h, 9ABCDEFh, 92Ah, 77h, 93Ch, 0BACh, 0Dh, 90203000h 
charArray 	db 	"Each character is a byte in memory, and these are stored in adjacent locations"
