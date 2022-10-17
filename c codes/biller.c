#include<stdio.h>
main()
{
    double milk=7.00;
    double shirt=50.00;
    double watch=37;
    double fridge=1100;
    double a,b,c,d;
    double h,i,j,k;
    printf("Enter the quantity of milk purchased n");
    scanf("%lf",&a);
    h=a*milk;
    printf("Enter the quantity of shirt purchased n");
    scanf("%lf",&b);
    i=b*shirt;
    printf("Enter the quantity of watch purchased n");
    scanf("%lf",&c);
    j=c*watch;
    printf("Enter the quantity of fridge purchased n");
    scanf("%lf",&d);
    k=d*fridge;
    double tbill=h+i+j+k;
    printf("BILL SUMMARYn ");
    printf("__________________________________________________________________________________________ n");
    printf("SL NO             ITEM NAME             QTY                   PRICE     n");
    printf("1.                MILK                   %lf                   %lf      n",a,h);
    printf("2.                SHIRT                  %lf                   %lf      n",b,i);
    printf("3.                WATCH                  %lf                   %lf      n",c,j);
    printf("4.                FRIDGE                 %lf                   %lf      n",d,k);
    printf("__________________________________________________________________________________________ n");
    printf("TOTAL BILL AMOUNT = %lf n",tbill);
    printf("__________________________________________________________________________________________ n");
    printf("....HAPPY SHOPPING.... n");
}