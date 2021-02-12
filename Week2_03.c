//3. Write a C program to count the total number of words in a string.

#include<stdio.h>
#include<string.h>

void main()
{
    char str[100];
    int count=1;

    printf("Enter the string: ");
    gets(str);

    for(int i=0; str[i]!=0; i++)
    {
        if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
        {
            count++;
        }
    }
    printf("Total number of words in a string = %d", count);
}
