//WAP to determine the division/grade of a student. The percentage
// mark is entered through keyboard.

#include<stdio.h>
int main(){
    float P;

    printf("enter your marks: ");
    scanf("%f",&P);
if(P>=0&&P<=100){
    if(P>90){
        printf("\n\tYou have A+");
    }
    else if(P>80){
        printf("You have A");
    }else if(P>70){
        printf("You have B+");
    }
    else if(P>60){
        printf("You have B");
    }else if(P>50){
        printf("you have C+");
    }else{
        printf("you are failed");
    }
}
    return 0;

}