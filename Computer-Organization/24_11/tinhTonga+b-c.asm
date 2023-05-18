# Nhap vao 3 so, tinh tong a + b - c

main:
	li $v0, 4	# xuat thong bao 1
	la $a0, thongbao1
	syscall
	
	li $v0, 5	# nhap vao so nguyen 1
	syscall
	move $s0, $v0
	
	li $v0, 4	# xuat thong bao 2
	la $a0, thongbao2
	syscall
	
	li $v0, 5	# nhap vao so nguyen 2
	syscall
	move $s1, $v0
	
	li $v0, 4	# xuat thong bao 3
	la $a0, thongbao3
	syscall
	
	li $v0, 5	# nhap vao so nguyen 3
	syscall
	move $s2, $v0
	
	add $t0, $s0, $s1	# a + b
	sub $t0, $t0, $s2	# (a + b) - c
	
	li $v0, 4	# Xuat thong bao D = a + b - c
	la $a0, thongbao4
	syscall
	
	li $v0, 1	# xuat D
	move $a0, $t0
	syscall
	
	sll $t1, $t0, 2	# dich sang trai 2 bits
	
	li $v0, 4	# xuat thong bao dich D sang trai 2 bits
	la $a0, thongbao5
	syscall
	
	li $v0, 1	# xuat gia tri dich D sang trai 2 bits
	move $a0, $t1
	syscall
	
	srl $t1, $t0, 3	# dich sang phai 3 bits
	
	li $v0, 4	# xuat thong bao dich D sang phai 2 bits
	la $a0, thongbao6
	syscall
	
	li $v0, 1	# xuat gia tri dich D sang phai 3 bits
	move $a0, $t1
	syscall
	
	li $v0, 10	# ket thuc chuong trinh
	syscall

.data
thongbao1: .asciiz "Nhap vao so nguyen A: "
thongbao2: .asciiz "Nhap vao so nguyen B: "
thongbao3: .asciiz "Nhap vao so nguyen C: "
thongbao4: .asciiz "D = A + B - C = "
thongbao5: .asciiz "\nD dich sang trai 2 bits = "
thongbao6: .asciiz "\nD dich sang phai 3 bits = "