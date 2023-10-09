#include<stdio.h>
int main(){
    int i=0;
    char str[100];

    printf("enter a string: ");
    gets(str);


    while(str[i]!='\0'){
        i++;
    }
    printf("\nlength of the entered string is %d",i);
    return 0;
}