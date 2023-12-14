#include<stdio.h>
int swap(int *,int *);

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a, &b);

    printf("Before Swaping a=%d and b=%d\t", a,b);

    swap(&a,&b);

    printf("After Swaping a=%d and b=%d", a,b);
    return 0;
    
}
int swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;

}