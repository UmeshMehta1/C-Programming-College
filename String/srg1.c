#include<stdio.h>
#include<string.h>
int main(){
    int i;
    int x;
    char str[100];
    char str2[100];

    printf("entr string: ");
    gets(str);

    printf("enter str2");
    gets(str2);
    
    
    // puts(str);
    // puts(strrev(str));
    // puts(strupr(str));
//   int l=  strlen(str);
//    printf("Length of string is : %d", l);

//strcpy string copy
//  strcpy(str2,str);

//  printf("%s",str2);

 x=strcmp(str,str2);
printf("%d",x);

}