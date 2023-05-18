# viet chuong trinh so sanh 2 so a, b

.data
	thongbaonhapa: .asciiz "Nhap vao so a: "
	thongbaonhapb: .asciiz "Nhap vao so b: "
	thongbao1: .asciiz "a < b"
	thongbao2: .asciiz "a = b"
	thongbao3: .asciiz "a > b"

.text
.globl main
main:
	li $v0, 4
	la $a0, thongbaonhapa
	syscall
	
	li $v0, 5
	syscall
	move $t0, $v0
	
	li $v0, 4
	la $a0, thongbaonhapb
	syscall
	
	li $v0, 5
	syscall
	move $t1, $v0
	
	blt $t0, $t1, nhohon
	
	beq $t0, $t1, bangnhau
	
lonhon:
	li $v0, 4
	la $a0, thongbao3
	syscall
	j Exit
	

nhohon:
	li $v0, 4
	la $a0, thongbao1
	syscall
	j Exit

bangnhau:
	li $v0, 4
	la $a0, thongbao2
	syscall
	j Exit
		
Exit:
	li $v0, 10
	syscall
