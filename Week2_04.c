//4. Write a C program to find the largest and smallest element in an array.

#include<stdio.h>

void main()
{
    int n, nos[100], h, l;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the integers in arrays: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &nos[i]);
    }

    h =l = nos[0];
    for(int i=0; i<n; i++)
    {
        if(nos[i]>h)
            h= nos[i];
        if(nos[i]<l)
            l= nos[i];
    }
    printf("The highest element in the array is %d .", h);
    printf("The lowest element in the array is %d .", l);
}
