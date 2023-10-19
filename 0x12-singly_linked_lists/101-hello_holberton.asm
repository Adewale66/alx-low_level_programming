global _start

section .text

_start:
	mov rax,1
	mov rdi,1
	mov rsi,greet
	mov rdx,len
	syscall

	mov rax,60
	mov rdi,0
	syscall


section .data
	greet: db "Hello, Holberton", 0xA
	len: equ $-greet
