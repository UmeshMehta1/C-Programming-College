//Find the absolute value of a number entered through keyboard
// without using library function.

#include<stdio.h>

int main(){
    float num;

    printf("The the number: ");
    scanf("%f", &num);

    if(num<0){
        num=-num;
    }

    printf("The absolute value is: %f",num);

    return 0;

}