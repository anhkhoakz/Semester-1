.data
	thongbaonhapN: .asciiz	"Nhap vao so n: "
	thongbaotongchan: .asciiz "Tong so chan tu 1 den n: "
.text

.globl main
main:

	li $v0, 4
	la $a0, thongbaonhapN
	syscall
	

	li $v0, 5
	syscall
	move $t0, $v0

	li $t1, 0 	# $t1 = sum = 0
	li $t2, 1 	# $t2 = i = 1
	move $t3, $t0 	# $t3 = n
	li $t4, 1 	# $t4 = 1
	
	li $v0, 4
	la $a0, thongbaotongchan
	syscall
	
	loopSum:
		bgt, $t2, $t3, ExitLoop
		rem $t5, $t2, 2
		blt $t5, $t4, sum
		addi $t2, $t2, 1
		j loopSum

	sum:
		add $t1, $t1, $t2
		addi $t2, $t2, 1
		j loopSum

	ExitLoop:
		li $v0, 1
		move $a0, $t1
		syscall
	
	Exit:
		li $v0, 10
		syscall