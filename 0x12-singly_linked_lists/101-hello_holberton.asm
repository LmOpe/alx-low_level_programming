	global		main
	extern		puts

	secton		.text
main:
	mov		rdi, message
	call		puts
	ret
message:
	db		"Hello, Holberton", 0
