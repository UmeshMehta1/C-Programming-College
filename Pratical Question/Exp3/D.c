//Electricity bill for the first 20 units is charged Rs. 80 (minimum
// charge). After that from 21 to 200 units, the rate is fixed at Rs. 7.30 per
// unit. Above 200 units, a charge of Rs. 10.00 per unit is charged. WAP to
// ask for the total consumed units, and print the calculated amount to be
// paid based on the above assumptions. 

#include<stdio.h>

int main(){
    int Unit;
    float bill=0;
    printf("Enter Unit: ");
    scanf("%d", &Unit);

    if(Unit<=20){
        bill = 80;
    }
    else if(Unit<=200){
        bill = 80+(Unit-20)*7.30;
    }
    else{
        bill= 80+(Unit-20)*7.30+(Unit-200)*10;
    }

    printf("the total unit is: %f", bill);
    return 0;


}