#include<stdio.h>

int main(){
    int i, n, j, arr[500],tem;
   

    printf("enter Limit number: ");
    scanf("%d",&n);
    for(i=1; i<n; i++){
        printf("enter %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    

    for(i=0;i<n;i++){
        for(j=i+1 ; j<n;j++){
           if(arr[i]>arr[j]){
               tem=arr[i];
               arr[i]=arr[j];
               arr[j]=tem;
           }
        }
    }
 
    printf("sorted element are:\n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}