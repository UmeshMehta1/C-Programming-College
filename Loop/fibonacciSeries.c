//Fibonacci Sequence;
//0 1 1 2 3 5 8 13 24.........n
#include<stdio.h>

int main(){
  int a,b,c,n;
  int i=1;
  printf("Enter the Limit Number");
  scanf("%d",&n);
   a=0;
   b=1;

   if(n==1){
    printf("%d",a);
   }else{
    printf("%d",b);
   }

   if(n>2){
    while(i<=n-2){
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
        i++;
    }
   }
  return 0;
}