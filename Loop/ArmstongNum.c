#include<stdio.h>

int main(){
    int n, sum=0,r,m;

    printf("Enter a Number: ");
    scanf("%d",&n);
    
    m=n;

    while(n!=0){
        r= n%10;
        sum=sum+r*r*r;
        n=n/10;
    }

    if(m==sum){
        printf("This Number: %d is ArmStrong Number",m);
    }
    else{
        printf("This Numger: %d is not ArmStrong Number",m);
    }
    return 0;
}