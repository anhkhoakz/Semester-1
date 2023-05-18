	.data
input_message:	.asciiz "Enter two numbers A and B: "
result_message:	.asciiz "The common divisors of A and B are: "
newline:	.asciiz "\n"
	.text
	.globl main
main:
	# print input message
	li $v0, 4 # syscall code for print string
	la $a0, input_message # load address of input message
	syscall

	# read values for A and B
	li $v0, 5 # syscall code for read integer
	syscall
	move $s0, $v0 # move read value to $s0 (A)

	li $v0, 5 # syscall code for read integer
	syscall
	move $s1, $v0 # move read value to $s1 (B)

	# find common divisors
	li $t0, 1 # initialize divisor to 1
	li $s2, 0 # initialize number of divisors to 0
find_divisors:
	beq $t0, $s1, print_results # exit loop if divisor is greater than B

	# check if A is divisible by the current divisor
	div $s0, $t0
	mfhi $t1
	beq $t1, $zero, check_B # if A is divisible, check if B is also divisible

	# if A is not divisible, increment the divisor
	addi $t0, $t0, 1
	j find_divisors

check_B:
	# check if B is divisible by the current divisor
	div $s1, $t0
	mfhi $t1
	bne $t1, $zero, add_divisor # if B is divisible, add the divisor to the list

	# if B is not divisible, increment the divisor
	addi $t0, $t0, 1
	j find_divisors

add_divisor:
	# add the divisor to the list of common divisors
	addi $s2, $s2, 1 # increment number of divisors
	sw $t0, divisors($s2) # store divisor in memory

	# increment the divisor and continue the loop
	addi $t0, $t0, 1
	j find_divisors

print_results:
	# print result message
	li $v0, 4 # syscall code for print string
	la $a0, result_message # load address of result message
	syscall

	# print each divisor
	li $t0, 1 # initialize loop counter
print_loop:
	beq $t0, $s2, exit # exit loop if all divisors have been printed

	# print the current divisor
	lw $a0, divisors($t0) # load divisor from memory
	li $v0, 1 # syscall code for print integer
	syscall

	# print a space
	li $v0
