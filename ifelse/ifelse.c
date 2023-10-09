// If the cost price and selling price of an item is input through the 
// keyboard, WAP to determine whether the seller has made profit or 
// incurred loss. Also determine how much profit he made or loss he 
// incurred.

#include<stdio.h>
int main(){
    int cp,sp,item, money;

    printf("Enter Cost Price: ");
    scanf("%d",&cp);
    printf("Enter Selling price: ");
    scanf("%d",&sp);
    
    if(sp>cp){
        money= sp-cp;
        printf("profit: %d",money);

    }else{
        money=cp-sp;
        printf("loss; %d", money);
    }


}