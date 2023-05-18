# nhap vao 2 so nguyen, tinh tong, hieu
.text
main:
	li $v0, 4	# Service xuat chuoi thong bao nhap vao so nguyen 1
	la $a0, thongbao1
	syscall
	
	li $v0, 5	# Service nhap vao so nguyen 1=
	syscall
	move $s0, $v0
	
	li $v0, 4	# Service xuat chuoi thong bao nhap vao so nguyen 2
	la $a0, thongbao2
	syscall
	
	li $v0, 5	# Service nhap vao so nguyen 2
	syscall
	move $s1, $v0
	
	add $t0, $s0, $s1	# cong
	sub $t1, $s0, $s1	# tru
	
	li $v0, 4	# service xuat thong bao tong
	la $a0, thongbaoTong
	syscall
	
	li $v0, 1	# service xuat tong
	move $a0, $t0
	syscall
	
	li $v0, 4	# service xuat thong bao hieu
	la $a0, thongbaoHieu
	syscall
	
	li $v0, 1	# service xuat hieu
	move $a0, $t1
	syscall

.data
thongbao1: .asciiz "Nhap vao so nguyen thu nhat: "
thongbao2: .asciiz "Nhap vao so nguyen thu hai: "
thongbaoTong: .asciiz "\nTong 2 so nguyen la: "
thongbaoHieu: .asciiz "\nHieu 2 so nguyen la: "