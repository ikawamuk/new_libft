global ft_syscall
extern g_ft_errno
section .text

ft_syscall:
	mov rax, rdi	; syscall number
	mov rdi, rsi	; arg1
	mov rsi, rdx	; arg2
	mov rdx, rcx	; arg3
	mov r10, r8		; arg4
	mov r8, r9		; arg5
	mov r9, [rsp+8]	; arg6
	syscall
	cmp rax, -4095
	jae .error
	ret
.error:
	neg eax
	mov [rel g_ft_errno], eax
	mov rax, -1
	ret
