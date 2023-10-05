// A company insures its drivers in the following cases: 
// 1. If the driver is married.
// 2. If the driver is unmarried, male and above 30 years of age. 
// 3. If the driver is unmarried, female and above 25 years of age. 
// 4. In all other cases, the driver is not insured. If the marital status, sex and 
// age of the driver are the inputs, WAP to determine whether the driver is to be 
// insured or not

#include<stdio.h>
int main() {
    
    int mAge, fAge;
    char married, gender;

    printf("Is Married (y/n): ");
    scanf(" %c", &married);

    printf("Male or Female (m/f): ");
    scanf(" %c", &gender);



    if(married=='y'){
        printf("\nThe Driver will be Insured\n");
    }else if(married=='n'&&gender=='m'){
        printf("enter age of male: ");
        scanf("%d", &mAge);
        if(mAge>30){
            printf("\n The Man driver will be insured");
        }else{
         printf("\n The Man driver will be not insured");

        }
    }else if(married=='n'&&gender=='f'){
        printf("enter age fo female: ");
        scanf("%d",&fAge );
        if(fAge>25){
        printf("\n The Female driver will be insured");

        }else{
        printf("\n The female driver will be not insured");

        }
    }else{
        printf ("No Insurance for this person");
    }

 return 0;
}