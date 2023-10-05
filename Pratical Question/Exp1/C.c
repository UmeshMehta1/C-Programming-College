//WAP to accept the principal, rate, number of years and find out the
// interest

#include<stdio.h>
int main() {
        float P,R,Y, Interest;

        printf("Enter the Principal: ");
        scanf("%f", &P);

        printf("Enter the Rate: ");
        scanf("%f", &R);

        printf("Enter The Year: ");
        scanf("%f", &Y);

        Interest = P*R*Y/100;

        printf("The Interst is: %f", Interest);

    return 0;

}