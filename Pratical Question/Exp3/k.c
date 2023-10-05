//A library charges a fine for every book returned late. For first 5
// days, the fine is 1 rupee, for 6-10 days, fine is 5 rupees and above 10 days
// fine is 15 rupees. If you return the book after 30 days, your membership
// will be cancelled. WAP to accept the number of days the member is late to
// return the book and display the fine or the appropriate message

#include<stdio.h>
int main(){
    int Lday;
    printf("Enter the no of Late days: ");
    scanf("%d",&Lday);

    if(Lday>30){
        printf("Your membership willl be cancelled");
    }
    else if(Lday>10){
        printf("Your fine is 15 rupees");
    }
    else if(Lday>5){
        printf("Your fine is 5 rupeess");
    }
    else {
        printf("your fine is 1 rupees");
    }
    return 0;
}