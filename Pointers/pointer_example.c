#include<stdio.h>

int main(){
    int a=23, *p, **r;

    p=&a;
    r=&p;

    printf("%d",a);
    printf("\n %u", p);
    printf("\n %u", *p);
    printf("\n %u",r);
    printf("\n %u", *r);
    printf("\n %u", **r);

    --**r;
    printf("\n %d",a);
}