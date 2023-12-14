#include<stdio.h>
#include<string.h>

struct student
{
    char std[50];
    int roll;
    float per;
};

struct student s;

int main(){
    printf("\nEnter the name of the student: ");
    gets(s.std);

    printf("\nenter roll no.: ");
    scanf("%d",&s.roll);
   
   printf("\nEnter percentage marks: ");
   scanf("%f", &s.per);

   printf("\nName:%d",s.std);
   printf("\nRoll No: %d",s.roll);
   printf("\nPercentage: %d",s.per);

}

