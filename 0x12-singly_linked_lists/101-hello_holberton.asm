section .data
format db "Hello, Holberton", 0xA, 0

section .text
global main
extern printf

main:
; Push the format string onto the stack
mov rdi, format
; Call printf function
call printf

; Exit the program
mov eax, 0
ret
