global start
section .text

start:
	mov rax, 1		; write(
	mov rdi, 1 		;	STDOUT FILENO,
	mov rsi, msg 	;	"Hello, Holberton\n",
	mov rdx, msglen ;	sizeof("Hello, Holberton\n")
	syscall 		; );

	mov rax, 60		; exit(
	mov rdi, 0		;	EXIT_SUCCESS
	syscall 		; );

section .rodata
	msg: db "Hello, Holberton", 14
	msglen: equ $ - msg
