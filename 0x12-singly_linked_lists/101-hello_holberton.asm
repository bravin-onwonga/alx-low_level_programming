section .data
    format db 'Hello, %s!', 0
    holberton_str db 'Holberton', 0

section .text
    global my_start

    extern printf
    extern exit

my_start:
    ; Call printf
    mov rdi, format
    mov rsi, holberton_str
    call printf

    mov rax, 60
    xor rdi, rdi
    call exit
