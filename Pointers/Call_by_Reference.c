#include <stdio.h>

int display(int *);

int main(){
    int a = 50;
    display(&a);
    printf("%d", a);
}

display (int *a)
{
   ++*a;
}
