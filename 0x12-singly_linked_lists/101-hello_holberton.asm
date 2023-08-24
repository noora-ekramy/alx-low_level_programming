section .data
    hello db "Hello, Holberton", 0   ; Null-terminated string

section .text
    global main

extern printf
main:
    push rbp             ; Align stack
    mov rdi, hello       ; Load the address of the string
    call printf          ; Call printf
    add rsp, 8           ; Adjust the stack after the call
    pop rbp              ; Restore rbp
    ret                  ; Return from the main function

