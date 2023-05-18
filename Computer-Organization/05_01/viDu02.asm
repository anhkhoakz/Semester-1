.data
	mang1: .word 0
	n: .word 4
	msgNhap: .asciiz "Nhap mang: "
	msgXuat: .asciiz "Xuat mang: "
	
.text
.globl main
main:
	li $v0, 4
	la $a0, msgNhap
	syscall
	
	# Khoi tao ban dau
	la $s0, mang1	# $s0 = address char1
	li $s1, 0	# $s1 = i = 0
	lw $s2, n	# $s2 = n = 4
	
	# Nhap mang
	readLoop:
		# get a integer number
		li $v0, 5	# read integer, store to $v0
		syscall
		
		sw $v0, ($s0)	# store value to dia chi cua mang 1
		addi $s1, $s1, 1 # i = i + 1
		addi $s0, $s0, 4 # tang 4 bytes ky tu tiep theo
		bne $s1, $s2, readLoop
		
	# in chuoi xuat
	li $v0, 4
	la $a0, msgXuat
	syscall
	
	# xuat chuoi da nhap
	la $s0, mang1
	li $s1, 0
	printLoop:
		li $v0, 1
		lw $a0, ($s0)
		syscall
		
		addi $s1, $s1, 1	# i = i + 1
		addi $s0, $s0, 4	# tang 4 bytes tiep theo
		bne $s1, $s2, printLoop
		
	# thoat
	li $v0, 10
	syscall
.end main