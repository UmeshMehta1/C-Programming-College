// //WAP to find greatest/smallest/median number among the given 3
// // numbers

#include<stdio.h>

int main(){
    int num1,num2, num3;

    printf("enter First Number: ");
    scanf("%d%d%d", &num1,  &num2, &num3);

    //for grater
    int gratest;

    if(num1>=num2 && num1>=num3){
        gratest=num1;
    }else if(num2>=num1 && num2>=num3){
        gratest=num2;
    }else{
        gratest=num3;
    }

//smallest
    int smallest;
    if(num1<=num2 && num1<=num3){
        smallest=num1;
    }
    else if(num2<=num1 && num2<=num3){
        smallest=num2;
    }else{
        smallest=num3;
    }

    // medina
    int median;
    if(num1 !=gratest && num1 != smallest){
        median=num1;
    }else if(num2 != gratest && num2 !=smallest){
        median=num2;
    }
    else{
        median= num3;
    }


printf("gratest num is: %d\n", gratest);
printf("medium num is: %d\n", median);
printf("smallest num is: %d", smallest);

return 0;

}

