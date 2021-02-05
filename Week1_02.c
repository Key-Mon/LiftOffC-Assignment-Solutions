//2. Write a C program to enter temperature in Celsius and convert it into Fahrenheit.

#include<stdio.h>

void main()
{
    float temp, f, c;

    printf("Enter the temperature(in celcius):");
    scanf("%f", &temp);

    f= (temp * 1.8)+ 32;

    printf("The temperature(in fahrenheit) is %f ", f);

}
