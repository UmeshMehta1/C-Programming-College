//Given the length and breadth of a rectangle, WAP to find
// whether the area of the rectangle is greater than its perimeter.

#include<stdio.h>

int main(){
  
  float l,b,area,perimeter;

  printf("Enter Length and Bredth: ");
  scanf("%f%f", &l, &b);

  area= l*b;
  perimeter= 2*(l+b);

  printf("the Aeaa is: %f\n", area);
  printf("the perimeter is: %f", perimeter);

 return 0;

}