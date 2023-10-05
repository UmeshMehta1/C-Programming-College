//If the 3 sides of a triangle are entered through the keyboard, WAP
// to check whether the triangle is isosceles (a=b or b=c or c=a), equilateral
// (a=b=c), scalene (a!=b!=c) or right-angled (h2=b2+p2) triangle.
#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter three side lengths: ");
    scanf("%f %f %f",&a, &b, &c);
   

   //Isosceles
   
    if(a==b&&b==c){
        printf("equal");
    }else if(a==b||b==c||c==a){
        printf("isos");
    }else if(a!=b!=c){
        printf("sclen");
    }else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
        printf("right");
    }else{
        printf("not a valid input");
    }

    return 0;
}