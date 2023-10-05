// 1.5. Accept the radius of a circle and calculate the area and
// circumference of the circle.

//Circumference of a Circle	C = 2 × π × r
//Area of a Circle	A = π × r2, π=3.14

#include<stdio.h>
#define pie 3.14

int main(){
float r=1.5, area, circumference;

area= 2*pie*r*r;
printf("The Area of Circle is: %f", area);

circumference= 2*pie*r;
printf("\nThe circumference is: %f", circumference);

return 0;
}
