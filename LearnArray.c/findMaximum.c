#include<stdio.h>

// int main(){
//     int i,n,max,arr[500];

//     printf("enter Limit of array: ");
//     scanf("%d",&n);

//     for(i=0;i<n;i++){
//         printf("enter %d: ", i+1);
//         scanf("%d",&arr[i]);
//     }
//      max=arr[0];
//     for(i=1;i<n;i++){
//         if(arr[i]>max){
//         max=arr[i];
//         }
//     }

//    printf(" the ans is: %d",max);
//    return 0;
// }

// Minimum

int main(){
    int n,i, ar[400],min;
    
    printf("Enter a Limit Number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter:  %d",i+1);
        scanf("%d",&ar[i]);
    }
   
     min=ar[0];

    for(i=1;i<n;i++){
       if(min>ar[i]){
        min=ar[i];
       }
    }

    printf("Min is %d", min);
    return 0;

}