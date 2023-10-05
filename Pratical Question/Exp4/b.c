// Calculate HCF/LCM of two input numbers. (LCM=A*B/HCF).
#include <stdio.h>

int main(){
    int num1,num2;

    printf("Enter two number: ");
    scanf("%d%d",&num1, &num2 );

    int lcm,hcf;

    int min= (num1<num2)?num1:num2;

    for(int i=1;i<min;i++){
        if(num1%i==0&&num2%i==0){
            hcf=i;
        }
    }
    
    lcm=(num1*num2)/hcf;

    printf("hcf %d\n", hcf);
    printf("Lcm %d", lcm);
}
