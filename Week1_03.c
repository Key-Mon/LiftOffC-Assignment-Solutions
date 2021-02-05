/*3. Write a C program to enter the radius of a circle and find its diameter,
circumference and area.*/

#include<stdio.h>

void main()
{
    float r, d, c, a, pi= 3.14;
    //r=radius, d=diameter, c=circumference, a=area

    printf("Enter the radius of the circle= ");
    scanf("%f", &r);

    d = 2*r;
    c = 2*pi*r;
    a = pi*r*r;

    printf("\n Diameter of the circle= %f", d);
    printf("\n Circumference of the circle= %f", c);
    printf("\n Area of the circle= %f", a);
}
