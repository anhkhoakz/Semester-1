		# bai tap 1

# 1: print interger, 4: print string
# 5: input interger, 8: input string
# 10: end program

# li: load indicate
# la: load address

main:
	li $v0, 4	# service xuat chuoi thong bao 1
	la $a0, thongbao1
	syscall
	
	li $v0, 5	# service nhap vao so nguyen tu ban phim
	syscall
	move $s0, $v0
	
	li $v0, 4	# service xuat chuoi thong bao 2
	la $a0, thongbao2
	syscall
	
	li $v0, 1	# service xuat so nguyen ra man hinh
	move $a0, $s0 
	syscall
	
	li $v0, 10	#service ket thuc chuong tirnh
	syscall
.data
thongbao1: .asciiz "Nhap vao mot so nguyen: "
thongbao2: .asciiz "\nBan da nhap vao so: "
	