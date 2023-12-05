// Multiply num

#include<stdio.h>

int main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    
    for(int i=1; i<=10; i++){
        printf("The Multiply of %d X %d= %d", num,i, num*i);
        printf("\n");
    }
    
   return 0;

}