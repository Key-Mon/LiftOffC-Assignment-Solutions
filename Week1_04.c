/*4. Write a C program to input marks of five subjects Physics, Chemistry, Biology,
Mathematics and Computer. Calculate percentage and grade according to
following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F */

#include<stdio.h>

void main()
{
    int phy, chem, bio, maths, comp;
    float total, percent;
    char grade;

    printf("Enter the marks of physics: ");
    scanf("%d", &phy);
    printf("Enter the marks of chemistry: ");
    scanf("%d", &chem);
    printf("Enter the marks of biology: ");
    scanf("%d", &bio);
    printf("Enter the marks of mathematics: ");
    scanf("%d", &maths);
    printf("Enter the marks of computer: ");
    scanf("%d", &comp);

    total = phy+chem+bio+maths+comp;
    percent = (total/500)*100;

    printf("\n Total marks: %f", total);
    printf("\n Percentage secured: %f", percent);

    if(percent >=90)
        grade = 'A';
    if(percent<90 && percent>=80)
        grade = 'B';
    if(percent<80 && percent>=70)
        grade = 'C';
    if(percent<70 && percent>=60)
        grade = 'D';
    if(percent<60 && percent>=40)
        grade = 'F';
    if(percent<40)
        grade = 'F';

    printf("\n Grade awarded: %c", grade);
}
