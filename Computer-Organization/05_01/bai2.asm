	# Nhap mang n so nguyen, tinh tong va trung binh cac so

	.data
		mang1: .word 0
		msgNhapN: .asciiz "Nhap vao N: "
		msgNhapMang: .asciiz "Nhap mang: "
		msgXuatTong: .asciiz "Tong cua cac so trong mang: "
		msgXuatTrungBinh: .asciiz "\nTrung binh cong cua cac so trong mang: "
		
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
		
		# khoi tao gia tri
		la $s1, mang1
		li $t0, 0
		
		# nhap mang
		readLoop:
			# get an integer number
			li $v0, 5 # read integer
			syscall
			
			sw $v0, ($s1)
			addi $t0, $t0, 1
			addi $s1, $s1, 4
			blt $t0, $s0, readLoop
			
		# khoi tao gia tri
		la $s1, mang1
		li $t0, 0
		li $s2, 0	# sum = 0
		# vong lap tong
		sumLoop:
			lw $t1, ($s1)
			add $s2, $s2, $t1
			
			addi $t0, $t0, 1
			addi $s1, $s1, 4
			blt $t0, $s0, sumLoop
			
		# thong bao xuat tong
		li $v0, 4
		la $a0, msgXuatTong
		syscall
		
		# xuat tong
		li $v0, 1
		move $a0, $s2
		syscall
		
		# tinh trung binh cong
		div $s2, $s2, $s0

		# thong bao xuat trung binh cong
		li $v0, 4
		la $a0, msgXuatTrungBinh
		syscall

		# xuat trung binh cong
		li $v0, 1
		move $a0, $s2
		syscall
		
		# thoat
		li $v0, 10
		syscall
	.end main
		
