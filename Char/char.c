#include<stdio.h>

int main(){
    char ch1,ch2,ch3,ch4;
 
     printf("enter your password: ");
     ch1=getch();
     printf("*");
     ch2=getch();
     printf("*");
     ch3=getch();
     printf("*");
    ch4=getch();
     printf("*");

    printf("\n%c%c%c%c",ch1,ch2,ch3,ch4);
}