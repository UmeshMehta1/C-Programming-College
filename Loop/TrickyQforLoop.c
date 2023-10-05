#include<stdio.h>

int main(){
    int i=1;
    for( ; ;){
        printf("%d\n",i);
        i++;
        if(i==8){
            break;
        }
        
    }
}