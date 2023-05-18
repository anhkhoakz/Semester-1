# Viết chương trình theo yêu cầu sau:
#	 1. Nhập vào số nguyên N với N >=0 nếu không thỏa điều kiện thì nhập lại N 
#	 2. Tính kết quả N! và xuất kết quả ra màn hình
#	 3. Encoding phép tính giai thừa
#	 4. Cho biết giá trị PC với N = 4

.data
	msgNhapN: .asciiz "Nhap vao N (N >=0): "
	msgXuatGiaiThua: .asciiz "Ket qua cua N!: "
	
.text
.globl main
main:
	nhapN:
		# Thong bao nhap n
		li $v0, 4
		la $a0, msgNhapN
		syscall
		
		# nhap vao n
		li $v0, 5
		syscall
		move $s0, $v0
	
		# kiem tra dieu kien
		blt $s0, $zero, nhapN
	
	# khai bao gia tri ban dau
	move $t0, $s0
	li $t1, 1 # res = 1
	
	loopFactorials:
		mul $t1, $t1, $t0
		addi $t0, $t0, -1
		bgt $t0, $zero, loopFactorials
	
	# xuat thong bao ket qua N!
	li $v0, 4
	la $a0, msgXuatGiaiThua
	syscall	
	
	# in N!
	li $v0, 1
	move $a0, $t1
	syscall
	
	# ket thuc chuong trinh
	li $v0, 10
	syscall
.end main