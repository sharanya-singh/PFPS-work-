#include<stdio.h>
float fahToCelFun(float);
int main()
{
    printf("RA2211042010006")
    float fahrenheit, celsius;
    printf("Enter Temperature Value (in Fahrenheit): ");
    scanf("%f", &fahrenheit);
    celsius = fahToCelFun(fahrenheit);
    printf("\nEquivalent Temperature (in Celsius) = %0.2f", celsius);
    getch();
    return 0;
}
float fahToCelFun(float fah)
{
    return ((fah-32)/1.8);
}
