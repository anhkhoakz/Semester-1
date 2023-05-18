# nhap 1 mang gom n so nguyen, xuat mang
.data
	mang1: .word 0
	msgNhapN: .asciiz "Nhap vao N: "
	msgNhapMang: .asciiz "Nhap mang: "
	msgXuatMang: .asciiz "Xuat mang: "
.text
.globl main
main:
	# thong bao nhap N
	li $v0, 4
	la $a0, msgNhapN
	syscall
	
	# nhap vao N
	li $v0, 5
	syscall
	move $s0, $v0
	
	# thong bao nhap mang
	li $v0, 4
	la $a0, msgNhapMang
	syscall
	
	# khoi tao ban dau
	la $s1, mang1
	li $t0, 0
	move $s2, $s0
	
	# nhapm mang
	readLoop:
		# get an integer number
		li $v0, 5 # read integer
		syscall
		
		sw $v0, ($s1)
		addi $t0, $t0, 1
		addi $s1, $s1, 4
		bne $t0, $s2, readLoop
		
	# in chuoi xuat
	li $v0, 4
	la $a0, msgXuatMang
	syscall
	
	# xuat chuoi da nhap
	la $s1, mang1
	li $t0, 0
	
	printLoop:
		li $v0, 1
		lw $a0, ($s1)
		syscall
		
		addi $t0, $t0, 1
		addi $s1, $s1, 4
		bne $t0, $s2, printLoop
		
	# thoat
	li $v0, 10
	syscall
.end main
	