//Input a year number and determine whether it is a leap year
#include<stdio.h>

int main(){
    int year;
    printf("Enter year: ");
    scanf("%d",&year);

    if(year%4==0 && year !=0 || year%100==0){
        printf("This year is laps year: %d", year);
    }
    else{
        printf("This Year is not laps year");
    }

    return 0;
}