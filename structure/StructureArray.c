#include<stdio.h>
#include<string.h>

struct student{
    char name[10];
    int rollno;
    int marks;
};

struct student s1[10];

int main(){
    int i;
    fflush(0);
    for(i=0;i<3;i++){
    fflush(0);
    printf("\nEnter Name: ");
    scanf("%s",&s1[i].name);
    fflush(0);
    printf("\nEnter RollNo: ");
    scanf("%d",&s1[i].rollno);

    printf("\nenter marks: ");
    scanf("%d",&s1[i].marks);
    getchar();
    }
      
  printf("\n=====================Student List===========================\n\n");
  printf("\nName:\tRoll No:\tMarks:\n");
    for(i=0;i<3;i++){
        printf("%s",s1[i].name);
        printf("\t%d",s1[i].rollno);
        printf("\t%d",s1[i].marks);
        printf("\n");
        
    }
    
    return 0;
}