//Read temperature in Fahrenheit & convert it into Celsius, where 
//C=5*(F-32)/9.

#include<stdio.h>


int main(){

    float F,C;

    printf("Enter The Temperature in Fahrenheit: ");
    scanf("%f", &F);

    C= 5*(F-32)/9;

    printf("The Temperature in Celsius: %f",C);

    return 0;
}