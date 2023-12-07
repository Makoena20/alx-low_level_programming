section .data
    hello_format db "Hello, Holberton", 10, 0 ; 10 is the ASCII code for newline, and 0 indicates the end of the string

section .text
    global main

main:
    ; Call printf
    mov rdi, hello_format
    mov rax, 0          ; 0 is the syscall number for printf
    call printf

    ; Exit the program
    mov rax, 60         ; 60 is the syscall number for exit
    xor rdi, rdi        ; Exit code 0
    syscall

section .text
    extern printf

