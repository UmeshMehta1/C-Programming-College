#include<stdio.h>

int main(){
    char str[100];
     
     printf("enter a string: ");
     gets(str);

    int i = strlen(str);
    i=i-1;
    while(i>=0){
        printf("%c",str[i]);
        i--;
    }
    return 0;
}