#include<stdio.h>

int main(){
    int n, x;
    printf("enter Number: ");
    scanf("%d",&n);

    x=factriol(n);
    printf("%d",x);
}

factriol(n){
    static int f=1;
    if(n==0){
       return f;
    }
      
    f=f*n;
    n--;
    factriol(n);
}