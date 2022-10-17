#include<stdio.h>
#include<conio.h>
int main()
{
    int num, prod=1, rem;
    printf("Enter any number: ");
    scanf("%d", &num);
    while(num>0)
    {
        rem = num%10;
        if(rem!=0)
            prod = prod*rem;
        num = num/10;
    }
    printf("\nProduct of Digit = %d", prod);
    getch();
    return 0;
}