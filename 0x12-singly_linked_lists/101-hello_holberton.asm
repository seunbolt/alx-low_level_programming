
n .data
hello db "Hello, Holberton", 0
format db "%s", 10, 0

section .text
global main
extern printf

main:
sub rsp, 8     ; Align stack
push rdi       ; Preserve rdi register

mov rdi, format
mov rsi, hello
call printf

pop rdi        ; Restore rdi register
add rsp, 8     ; Restore stack alignment

ret

