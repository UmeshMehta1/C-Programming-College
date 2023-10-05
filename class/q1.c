/// WAP to convert a string into uppercase with usig strig lirary function 
#include<stdio.h>
#include<conio.h>
#define MAX 100


void main(){
    char word[MAX];
    int i=0, A;
    printf("enter a string: ");
    gets(word);
    while(word[i]!='\0'){
        if(word[i]>=97&& word[i<=122]){
            word[i]=word[i]-32;
            
        }
        i++;
    }
    printf("ther uppercase string is %s ", word);
    // printf("ther value of a is %d ", A);
    getch();
}