// generate bill program
#include<stdio.h>
#include<string.h>

struct Billing_System  //declear structure ==> like schema(backend nodejs)
{
    int pId;
    char pName[100]; //array in structure
    int rate;
    int qty;

};

struct Billing_System p[3]; //array of structure

int main(){
    int i, total=0;

    // scan the value
    fflush(0);
    for(i=0;i<3;i++){
        printf("Enter Product ID : ");
        scanf("%d",&p[i].pId);

        printf("\nEnter Product Name : ");
        scanf("%s",&p[i].pName);

        printf("\nProduct Rate: ");
        scanf("%d",&p[i].rate);

        printf("\nEnter quentity : ");
        scanf("%d",&p[i].qty);
    };

    printf("\n==============Product Details======================\n\n");
    ///heading
    printf("ID \t NAME \t RATE \t QTY \t Amount \n");

// print id name qty rate
    for(i=0;i<3;i++){
        printf("%d \t %s \t %d \t %d \t %d \t \n",p[i].pId,p[i].pName,p[i].rate,p[i].qty, p[i].qty * p[i].rate);
        total=total+p[i].qty*p[i].rate;
        // printf("\t\t\t%d",total);
   
    };

    printf("\n===================================================\n");


//print the total amount
    printf("\n\t\t\t Total: %d",total);
    return 0;
}


