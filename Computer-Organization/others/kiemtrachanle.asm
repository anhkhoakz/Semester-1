.data
	thongbaonhapsoa: .asciiz "Nhap vao mot so nguyen: "
	thongbaole: .asciiz "So vua nhap la so le"
	thongbaochan: .asciiz "So vua nhap la so chan"
.text
.globl main
main:
	# in chuoi
	li $v0, 4
	la $a0, thongbaonhapsoa
	syscall
	
	# nhap vao so a
	li $v0, 5
	syscall
	move $t0, $v0
	
	# kiem tra chan
	li $t1, 1
	rem $t2, $t0, 2
	blt $t2, $t1, sochan

# xuat thong bao le
sole:
	li $v0, 4
	la $a0, thongbaole
	syscall
	j Exit

# xuat thong bao chan
sochan:
	li $v0, 4
	la $a0, thongbaochan
	syscall
	j Exit

# thoat
Exit:
	li $v0, 10
	syscall	