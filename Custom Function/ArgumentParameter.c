#include<stdio.h>

int fact();

int main(){
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);

    y=fact(x);

if(y%2==0){
   printf("%d",y);
}else{
   printf("%d",y+10);
}

    return 0;
}

int fact(int n){
    int f=1;
    while(n!=0){
        f=f*n;
        n--;
    }

    // printf("%d",f);

    return f;
}