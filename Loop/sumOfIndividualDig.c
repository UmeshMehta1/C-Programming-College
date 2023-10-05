// individual digit sum
#include<stdio.h>
int main(){
   int n, s=0,r;

   printf("Enter a Number: ");
   scanf("%d", &n);

   while(n!=0){
    r=n%10;
    s = r+s;  
    n = n/10;
   }
   printf("\nSum of digits is %d\n",s );
   return 0;
}



