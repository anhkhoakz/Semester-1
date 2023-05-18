main:
	li $v0, 4	# xuat thong bao 1
	la $a0, thongbao1
	syscall
	
	li $v0, 8	# nhap vao ten
	syscall
	move $t1, $v0
	
	li $v0, 4	# xuat thong bao 2
	la $a0, thongbao2
	syscall
	
	li $v0, 4	#xuat ten
	move $a0, $t0
	syscall
	
.data
thongbao1: .asciiz "Hello, what's your name: "
thongbao2: .asciiz "\nHello, "