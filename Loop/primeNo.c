//Prime Number;
// #include<stdio.h>
// int main(){
 
//   int n;
//   printf("Enter a number: ");
//   scanf("%d",&n);
// int i=2;
//   while(i<n){ 
//     if(n%i==0){
//         printf("\nNot Prime\n");
//         break;
//     }else{
//         printf("prime number\n");
//         break;
//     }
//     i++;
//   }
// }

// Correct way to find prime number;

#include<stdio.h>

int main(){
    int n, i=2, f=0;

    printf("enter a Number: ");
    scanf("%d",&n);

    while(i<n){
        if(n%i==0){
            f =1 ;
            break;
        }
        i++;
    }

    if(f==0){
        printf("this is Prime Number.");
    }
    else{
        printf("not prime number.");
    }
    return 0;
}