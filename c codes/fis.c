#include<stdio.h>
#include<conio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter Temperature Value (in Celsius): ");
    scanf("%f", &celsius);
    fahrenheit = (celsius*1.8)+32;
    printf("\nEquivalent Temperature Value (in Fahrenheit) = %0.2f", fahrenheit);
    getch();
    return 0;
}