#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n, max;
    float mark, sum=0, avg, perc;
    printf("How many Subject runs in your Institute ? ");
    scanf("%d", &n);
    printf("\nEnter Maximum Mark of Subject: ");
    scanf("%d", &max);
    printf("\nEnter Marks obtained in %d Subjects (Out of %d): ", n, max);
    for(i=0; i<n; i++)
    {
        scanf("%f", &mark);
        sum = sum+mark;
    }
    avg = sum/n;
    perc = (sum/(n*max))*100;
    printf("\nAverage Mark = %0.2f", avg);
    printf("\nPercentage Mark = %0.2f%c", perc, 37);
    getch();
    return 0;
}
