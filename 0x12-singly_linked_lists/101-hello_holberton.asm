section .data
    hello db 'Hello, Holberton', 10 ; Message to print, followed by a newline (10)

section .text
    global _start

_start:
    ; Write message to stdout (file descriptor 1)
    mov rax, 1                 ; syscall number for sys_write
    mov rdi, 1                 ; file descriptor 1 (stdout)
    lea rsi, [hello]           ; pointer to the message
    mov rdx, 17                ; message length, including the newline character
    syscall

    ; Exit the program
    mov rax, 60                ; syscall number for sys_exit
    xor rdi, rdi               ; exit status 0
    syscall