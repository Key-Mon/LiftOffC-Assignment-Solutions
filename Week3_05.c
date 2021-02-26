//5. Write a program in C to check whether a given number is palindrome or not using recursion.

#include<stdio.h>
int palindrome(int n1, int p);
void main()
{
    int n, r;
    printf("Enter number: ");
    scanf("%d", &n);
    r = palindrome(n, 0);
    if(n == r)
        printf("The entered number is a palindrome .");
    else
        printf("The entered number is not a palindrome .");
}
int palindrome(n1, p)
{
    if(n1==0)
        return p;
    else
        return palindrome(n1/10, p*10 + n1%10);
}
