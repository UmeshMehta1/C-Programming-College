//Find the greatest/smallest/average number among n numbers 
// entered through keyboard. 

#include <stdio.h>

int main() {
    int n;
   
   printf("Enter a number: ");
   scanf("%d",&n);

   int number,gratest,smallest,sum=0;

   for(int i=1;i<n;i++){
      printf("Enter %d: ",i);
      scanf("%d",&number);

      if(i==1|| number<smallest){
        smallest = number;
      }
      if(i==1|| number>gratest){
        gratest = number;
      }
      
      sum += number;
      
   }

   int avr= sum/n;

   printf("the smallest number: %d\n", smallest);
   printf("the gratest number: %d\n", gratest);
   printf("average: %d", avr);
   
    return 0;
}
