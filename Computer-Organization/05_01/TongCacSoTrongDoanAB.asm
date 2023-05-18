# Tong cac so trong doan A den B
.data
    thongBaoNhap_a: .asciiz "Nhap vao mot so a: "
    thongBaoNhap_b: .asciiz "Nhap vao mot so b: "
    thongBaoTong: .asciiz "Tong cac so tu a den b: "
.text
.globl main
main:
	# thong bao nhap a
	li $v0, 4
	la $a0, thongBaoNhap_a
	syscall
	
	# nhap vao a
	li $v0, 5
	syscall
	move $t0, $v0 # $t0 = a
	
	# thong bao nhap b
	li $v0, 4
	la $a0, thongBaoNhap_b
	syscall
	
	# nhap vao b
	li $v0, 5
	syscall
	move $t1, $v0
	
	li $t2, 0 	# $t2 = sum = 0
	move $t3, $t0 	# $t3 = $t0 = a
	move $t4, $t1 	# $t4 = $t1 = b
	
	# kiem tra neu a < b
	blt $t0, $t1, loopSum
	
	move $t3, $t1 	# $t3 = $t0 = a
	move $t4, $t0 	# $t4 = $t1 = b
	
	loopSum:
		bgt, $t3, $t4, ExitLoop 
		add $t2, $t2, $t3 # sum += i
		addi $t3, $t3, 1 # i++
		j loopSum

	ExitLoop:
		# thong bao xuat tong
		li $v0, 4
		la $a0, thongBaoTong
		syscall
		
		# xuat gia tri tong
		li $v0, 1
		move $a0, $t2
		syscall
	
	Exit:
		li $v0, 10
		syscall