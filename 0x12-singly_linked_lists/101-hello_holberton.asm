section .data
    holberton_str db 'Hello, Holberton', 0xA

section .text
    global _start

_start:
    mov rax, 1
    mov rdi, 1
    mov rsi, holberton_str
    mov rdx, 18
    syscall

    mov rax, 60
    xor rdi, rdi
    syscall
