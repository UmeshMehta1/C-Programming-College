// WAP to find the roots of quadratic equation ax2+bx+c=0

#include<stdio.h>
#include<math.h>

int main() {
    float a,b,c,root1,root2;

    printf("enter the value of a,b,c: ");
    scanf("%f%f%f",&a,&b,&c);
    float d = b*b - 4 * (a)* c;

    if(d>0){
      root1=( -b+sqrt(d))/(2*a);
      root2=(-b-sqrt(d))/(2*a);
      printf("the value of root1: %f\n",root1);
      printf("the value of root1: %f\n",root2);
      
    }else if(d==0){
        root1= -b/2*a;
        root2= -b/2*a;
        printf("the value of root1==root2 %f%f\n",root1, root2);
    }
    else{
        printf("rootes are imaginary");
    }
 return 0;
}