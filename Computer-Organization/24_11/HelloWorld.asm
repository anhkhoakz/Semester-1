		# purpose: first program, hello world
.text				# define the program instruction
main:				# label to define the main program
	li $v0, 4		# load 4 into $v0 to indicate a print string
	la $a0, greeting	# load the address of greeting into $a0
	syscall			# print greeting. the print is indicated by
				# $v0 having a value of 4, and the string to
				# print is stored at the address in $a0
	li $v0, 10		# load a 10 (halt) into $v0
	syscall			# the program ends.
.data				# define the program data
greeting: .asciiz "Hello World"	# the string to print
