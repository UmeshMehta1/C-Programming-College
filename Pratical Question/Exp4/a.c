//Calculate the sum of n numbers entered through keyboard. 

#include<stdio.h>
int main(){
    float num,sum=0;
    int i;
   
   printf("Enter a number: ");
   scanf("%f",&num);

   for(i=0; i<num; i++){
     sum +=i;
   }
   printf("\nSum = %f\n",sum );
  
  return 0;
}