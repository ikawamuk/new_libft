global _ft_syscall
section .text

_ft_syscall:
	mov rax, rdi    ; syscall number
    mov rdi, rsi    ; arg1
    mov rsi, rdx    ; arg2
    mov rdx, rcx    ; arg3
    mov r10, r8     ; arg4
    mov r8, r9      ; arg5
    mov r9, [rsp+8] ; arg6
    syscall
    ret
