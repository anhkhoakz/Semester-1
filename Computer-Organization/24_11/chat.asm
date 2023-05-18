# viet chuong trinh chat

main:
    li $v0, 4
    la $a0, thongbao1
    syscall

    li $v0, 8
    syscall
    move $s0, $v0

    li $v0, 4
    la $a0, thongbao2
    syscall

    li$ $v0, 4
    la $a0, $s0
    syscall

    li $v0, 10
    syscall

.data
thonbao1: .asciiz "I am a computer. What is your name?\n"
thonbao2: .asciiz "Hello, "