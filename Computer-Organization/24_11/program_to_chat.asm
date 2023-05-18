        .data
prompt:  .asciiz "I am a computer. What is your name?\n"
greet:   .asciiz "Hello, "
input:   .space  100
        .text
        .globl  main
main:
        # Print prompt
        la      $a0, prompt # load address of prompt into $a0
        li      $v0, 4      # syscall code for print string
        syscall
        
        # Read user input
        li      $v0, 8      # syscall code for read string
        la      $a0, input  # load address of input buffer into $a0
        li      $a1, 100    # specify the size of input buffer
        syscall
        
        # Print greet
        la      $a0, greet  # load address of greet into $a0
        li      $v0, 4      # syscall code for print string
        syscall
        
        # Print user input
        la      $a0, input  # load address of input into $a0
        li      $v0, 4      # syscall code for print string
        syscall
        
        # Exit program
        li      $v0, 10     # syscall code for exit
        syscall
