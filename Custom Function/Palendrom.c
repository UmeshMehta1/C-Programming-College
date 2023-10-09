#include<stdio.h>
int pal();
int main(){
    int x,y;
printf("enter a number: ");
scanf("%d",&x);

 y=pal(x);

if(y==x){
    printf("this number is palendrom");
}else{
    printf("not palendrom");
}
}

int pal(int n){
    int r, s=0;

    while (n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    return s;  
}