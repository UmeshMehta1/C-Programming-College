#include<stdio.h>

int main(){
    int i=0;
    char str[10];
    printf("Enter a string: ");
    gets(str);
    puts(str);

    while(str[i] !='\0'){
        if(str[i]!=' '){
         printf("%c",str[i]+35);
         }
        else{
         printf("%c",str[i]);
         }
        i++;
    }
    return 0;
}