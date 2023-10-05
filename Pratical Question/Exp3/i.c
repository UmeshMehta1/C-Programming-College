// While purchasing certain items, a discount of 10% is offered if the
// quantity purchased is more than 1000. If quantity and rate are input
// through the keyboard, WAP to calculate the total expenses. 

#include<stdio.h>

int main(){
    int items;
    float rate,expence, dis;
    
    printf("enter quantity of items: ");
    scanf("%d", &items);

    printf("\nenter the rate of item");
    scanf("%f", &rate);

    if(items>1000){
      dis = (items*rate)*10/100;
      expence= items*rate-dis;
    }else{
        expence=items * rate;
    }

    printf("The total expences is : %f", expence);
}