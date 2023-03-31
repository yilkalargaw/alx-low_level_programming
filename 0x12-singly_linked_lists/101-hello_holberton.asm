section .data
    hello db 'Hello, Holberton', 0x0a, 0

section .text
    extern printf

    global main

main:
    ; call printf with hello string
    push rbp
    mov rbp, rsp
    mov edi, hello
    xor eax, eax
    call printf

    ; exit program with status code 0
    xor edi, edi
    mov eax, 0
    pop rbp
    ret
