;_____________________________________________________________________________________
; My comments: assembly language
; File: 101-hello_holberton.asm
; Auth: Brainstorma
; Desc: 64-bit assembly program that prints "Hello, Holberton followed by a new line."
;_____________________________________________________________________________________
extern printf

section .text
   global main

main:
		push rbp

		mov rdi,fmt
		mov rsi,msg
		mov rax,0
		call printf

		pop rbp

		mov rax,0
		ret

section .data
		message: db "Hello, Holberton", 0
		format: db "%s", 10, 0
