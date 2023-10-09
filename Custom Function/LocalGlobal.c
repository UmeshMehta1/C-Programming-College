#include<stdio.h>

int xyz();
// int a=10;

int main(){
    int a=5;
 
    a=a+5;
    xyz();
    printf("%d",a);
}

int xyz(){
    int a=20;
    a=a+4;
    // printf("%d",a);
}