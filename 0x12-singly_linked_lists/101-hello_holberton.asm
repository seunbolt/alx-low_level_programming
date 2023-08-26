section .data
hello db "Hello, Holberton", 10 ; The string to print, null-terminated
format db "%s", 0 		; The format string for printf, null-terminated

section .text
global main
extern printf

main:
push rbp			; Save the base pointer
mov rdi, format			; Load the address of the format string into rdi (1st argument)
mov rsi, hello			; Load the address of the hello string into rsi (2nd argument)
call printf			; Call the printf function
pop rbp				; restore the base pointer
ret				; return from the main function
