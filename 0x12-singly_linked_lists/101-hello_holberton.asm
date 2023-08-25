section .data
    hello db 'Hello, Holberton', 10  ; The string to print with a newline at the end
    hello_len equ $ - hello          ; Compute the length of the string

section .text
    extern printf                    ; Tell the assembler that printf will be linked externally

    global main
main:
    ; Prepare arguments for printf
    mov rdi, hello                   ; First argument: format string, which is the address of our string
    ; Since we're using x86-64 System V ABI, the first argument is passed in rdi

    ; Call printf
    call printf

    ; Exit the program
    mov rax, 60                      ; syscall: exit
    xor rdi, rdi                     ; status: 0
    syscall                          ; make the syscall

