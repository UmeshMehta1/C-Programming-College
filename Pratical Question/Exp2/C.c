//Read temperature in Celsius and convert it into Fahrenheit, where
// F=9*C/5+32 

#include<stdio.h>

int main(){
    float c, f;

   printf("enter the Temprature of Celsius:");
   scanf("%f", &c);

    f= 9*c/5+32;

    printf("\nThe temperature in celsius is: %f", f);
    return 0;

}