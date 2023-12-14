#include <stdio.h>
int febonacci(int);
int main(){
    int n;
    printf("enter the limit: ");
    scanf("%d",&n);

    febonacci(n);

}

int febonacci(int n)
{
    static int a=1,b=1,c;
    if (n==0)
    return 0;
    
    c= a+b;
    printf("%d",c);
    printf("\n");
    
    // n--;
    a=b;
    b=c;
    
    febonacci(n-1);

}