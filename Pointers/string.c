#include<stdio.h>

int main(){
    char str[50], *p;

    int count=0;

    printf("enter string: ");
    gets(str);

    p= &str[0];

    while(*p != '\0'){
        if (*p == 'a' || *p=='e'||*p=='i'||*p=='o'|| *p=='u'){
            count++;
        }
        ++p;
    }

    printf("Total vowel letter are: %d", count);
    return 0;
}

