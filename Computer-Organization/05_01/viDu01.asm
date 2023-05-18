.data
	mang1: .word 2, 3, 4, 5, 6
	N: .word 5
	newspace: .asciiz ", "

.text
.globl main

main:
	# Khoi tao ban dau
	la $s0, mang1
	li $s1, 0
	lw, $s2, N
	
	# vong lap
	printLoop:
		li $v0, 1
		lw $a0, ($s0)
		syscall
		
		# print ", "
		li $v0, 4
		la $a0, newspace
		syscall
		
		addi $s1, $s1, 1	# i = i + 1
		addi $s0, $s0, 4	# tang dia chi mang 1
		blt $s1, $s2, printLoop
	
	# exit
	li $v0, 10
	syscall
.end main