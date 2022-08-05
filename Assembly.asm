; -----------------------------------------------------------------------------
; Simple assembly procedure that gets called from the main function
; in a C program. The function signature is:
;
; int sendArray(int[],int);
;
; @author Jacob Schrum, 8/5/2022
; -----------------------------------------------------------------------------

	global sendArray
	section .text
; The int[] pointer parameter will be in register rdi, 
; the int parameter is in esi, and the return value comes from eax
sendArray:
	mov eax, [rdi + 4*rsi]
	ret 				; Implicitly returns eax