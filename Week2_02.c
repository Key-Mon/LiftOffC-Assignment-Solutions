/*2. Write a C program to print the sum of all the even elements and even position elements
in an array.*/

#include<stdio.h>

void main()
{
    int n, nos[100], sum=0, sum1=0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the integers in arrays: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &nos[i]);
    }

    for(int i=0; i<n; i++)
    {
        if(nos[i]%2 == 0)
        {
            sum+=nos[i];
        }
    }
    printf("Sum of all even elements = %d", sum);

    for(int i=0; i<n; i++)
    {
        if(i%2 == 0)
        {
            sum1+=nos[i];
        }
    }
    printf("The sum of all even position elements = %d", sum1);
}
