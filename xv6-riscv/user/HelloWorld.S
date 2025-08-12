.section .data
str: .asciz "Hello CS23B020! Welcome to CS3500\n"

.section .text
.global main

main:
    la a1, str
    li a2, 34
    li a7, 16
    ecall
    li a7, 2
    ecall
