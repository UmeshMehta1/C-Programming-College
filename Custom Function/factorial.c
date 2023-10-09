#include<stdio.h>

int fact();

int main(){
    fact();
}

int fact(){
    int f=1,n;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(n!=0){
        f=f*n;
        n--;
    }
  printf("Factorial is: %d", f);
    return 0;
}