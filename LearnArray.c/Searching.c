#include<stdio.h>
int main(){
    int n,i, arr[400],s, f=0;

    printf("enter limit Array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("\nEnter element %d : ", i+1 );
        scanf("%d", &arr[i]);
    }

    printf("Enter the searching Number: ");
    scanf("%d",&s);
    for(i=0;i<n;i++){
        if ( s == arr[i] ){
            f=1;
            break;
        }
     
    }


    if(f==1){
        printf("\n Element found in array");
    }else{
        printf("\n Element not found in array");
    }
    return 0;
}