#include<stdio.h>

// int main(){
//     int i, n, j, arr[500],tem;
   

//     printf("enter Limit number: ");
//     scanf("%d",&n);
//     for(i=1; i<n; i++){
//         printf("enter %d: ",i+1);
//         scanf("%d", &arr[i]);
//     }
    

//     for(i=0;i<n;i++){
//         for(j=i+1 ; j<n;j++){
//            if(arr[j]<arr[i]){
//                tem=arr[i];
//                arr[i]=arr[j];
//                arr[j]=tem;
//            }
//         }
//     }
 
//     printf("sorted element are:\n");
//     for(i=0;i<n;i++){
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }

//sorting grater to less- Decriging order;

int main(){
    int n, i, j, temp, arr[200]; 

    printf("Enter limit Number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("\n Enter Element%d : ", (i + 1));
        scanf("%d", &arr[i] );
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted Elements Are \n");
    for(i = 0; i < n; ++i) {
        printf("%d\t", arr[i]);
    }
    return 0;
}

