//Input seconds and convert it into hours, minutes, and seconds

#include<stdio.h>
int main() {
    float sec,min,hours;

    printf("Enter Seconds: ");
    scanf("%f", &sec);
    printf("\n");

    min = sec/60;
    printf ("Minutes : %f\n ", min );

    hours= sec/3600;
    printf("Hours: %f\n", hours);

    printf("Senconds %f", sec);
}