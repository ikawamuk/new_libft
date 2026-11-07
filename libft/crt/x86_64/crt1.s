section .text
global _start
extern main

_start:
	mov rbp, 0
	mov rdi, [rsp]  ; argc
	lea rsi, [rsp + 8] ; argv
	call main
	mov edi, eax
	mov eax, 60 ; sys_exit
	syscall
