# Store inputs in $s0 and $s1
li $v0, 5 # System call code for read integer
syscall
move $s0, $v0 # Store input in $s0

li $v0, 5
syscall
move $s1, $v0 # Store input in $s1

# Find Least Common Multiple using a loop
li $t0, 1 # Initialize counter
li $t1, 1 # Initialize LCM

loop:
beq $s0, $t0, exit # If $s0 == $t0, exit loop
beq $s1, $t0, exit # If $s1 == $t0, exit loop

div $t2, $t0, $s0 # Calculate $t2 = $t0 / $s0
mfhi $t3 # Move remainder to $t3
beq $t3, $zero, update # If $t3 == 0, update LCM

div $t2, $t0, $s1 # Calculate $t2 = $t0 / $s1
mfhi $t3 # Move remainder to $t3
beq $t3, $zero, update # If $t3 == 0, update LCM

addi $t0, $t0, 1 # Increment counter
j loop

update:
mul $t1, $t0, $t1 # Calculate LCM
j loop

exit:
# Output LCM
li $v0, 1 # System call code for print integer
move $a0, $t1
syscall

# End program
li $v0, 10 # System call code for exit
syscall
