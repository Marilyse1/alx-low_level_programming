section .data
message db 'Hello, Holberton', 0
format db '%s', 0

section .text
extern printf

global main

main:
; Prepare the arguments for printf
mov rdi, format
mov rsi, message

; Call printf
mov eax, 0
call printf

; Exit the program
mov eax, 0
ret
