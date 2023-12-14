#include <stdio.h>

int main(){
    int n, x;
    int reverse(int n);
    printf("Enter a number: ");
    scanf("%d",&n);

    x = reverse(n);

    printf("The reverse value is: %d",x);
}

int reverse(int n)
{
    static int s=0;
    int r=0;
    if(n==0)
      return s;
    
    r= n%10;
    s=(s*10)+r;
    n=n/10;

    reverse(n);

}