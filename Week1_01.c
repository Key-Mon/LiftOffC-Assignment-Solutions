//1. Write a C program to enter two numbers and perform all arithmetic operations.

#include<stdio.h>

void main()
{
    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("\n Addition: %d", x+y);
    printf("\n Substraction: %d", x-y);
    printf("\n Multiplication: %d", x*y);
    printf("\n Division: %d", x/y);
    printf("\n Modulus: %d", x%y);
}
