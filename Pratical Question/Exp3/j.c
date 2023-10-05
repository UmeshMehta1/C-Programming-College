//If the cost price and selling price of an item is input through the 
// keyboard, WAP to determine whether the seller has made profit or 
// incurred loss. Also determine how much profit he made or loss he 
// incurred. 

#include<stdio.h>
int main() {
    float cprice; //Cost Price
    float sprice;//Selling Price
    float pL;//Selling Price
    

    printf("Enter cost Price: ");
    scanf("%f",&cprice);

    printf("Enter Selling Price: ");
    scanf("%f", &sprice);
    
    if(cprice<sprice){
        printf("\n\tSeller has made a profit: ");
        pL= sprice-cprice;
        printf("%f", pL);

    }
    else{
        printf("\n\tSeller has Incured Loss: ");
        pL=-(sprice-cprice);
        printf ("%f ",pL );
    }
 return 0;
    
}
