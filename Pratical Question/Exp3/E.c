//If the 3 sides of a triangle are entered through the keyboard, WAP
// to check whether the triangle is valid or not. The triangle is valid if the
// sum of two sides is greater than the largest of three sides.

#include<stdio.h>
int main() {

    int s1,s2,s3;
    printf("Enter sides of triangle: ");
    scanf("%d%d%d",&s1,&s2,&s3);

    if(s1>s2&&s1>s3 || s2>s1&&s2>s3|| s3>s1&&s3>s2){
        printf("\nValid Triangle");
    }else{
        printf("not valied");
    }

    return 0;
}