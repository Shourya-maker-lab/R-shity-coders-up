#include<stdio.h>
#include<conio.h>
int main()
{
    float basic, bonus, gross;
    printf("Enter basic salary of the Employee: ");
    scanf("%f", &basic);
    bonus = (basic*20)/100;
    gross = bonus + basic;
    printf("\nBonus = %0.2f", bonus);
    printf("\nGross = %0.2f", gross);
    getch();
    return 0;
}