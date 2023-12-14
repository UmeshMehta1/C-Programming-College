// when print limit number enter by user using recursion.

#include<stdio.h>

int main(){
    int n;
    printf("enter limit: ");
    scanf("%d",&n);

    display(n);
}

int display(int n){
    static int i =0;
    if (i == n) return 0; // base case, stops the recursion when it reaches 10
    printf("%d ",i);// prints the number of times you've called the function so far +1 each time
    i++;
    display(n);
}

