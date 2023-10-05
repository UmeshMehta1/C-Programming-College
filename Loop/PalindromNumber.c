#include<stdio.h>
int main(){
    int i,r,n,s=0;

    printf("enter a numbers: ");
    scanf("%d", &n);
    int m=n;
    while(n>0){
        r = n%10;
        s=s*10+r;
        n=n/10;
    }
    
    if(m==s){
        printf("yes");
    }
    else{
        printf("not");
    }
}