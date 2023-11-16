section .data
    hello db "Hello, Holberton", 10, 0; define hello as a sequence of bytes

; declare both main and printf functions as assessible
section .text
    global main
    extern printf

; define main, set up stack
main:
    push rbp; push value of rbp register onto stack
    mov rbp, rsp; copy value of rsp register into rbp register.

    lea rdi, [hello]; loads &hello variable into rdi register, which is the first argument to the printf function
    xor eax, eax; set eax register to 0, which is the return value of printf function
    call printf; call printf function for hello

; tear down stack frame and return from the main function
    mov rsp, rbp; copy value of rbp register into rsp register
    pop rbp; pop value of rbp register from the stack
    ret; return string
