// Array sorting using BinaryNumber.

#include<stdio.h>

int main(){
    int i,j,n,temp,arr[100],start,end,mid,s,f=0;

    printf("enter limit of Array NUmber: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("enter %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("enter Sorting element: ");
    scanf("%d",&s);

    start=0;
    end = n-1 ;

    while (start<=end)
    {
        mid=(start+end)/2;

        if(s==arr[mid]){
            f=1;
            break;
        }else if(s>=arr[mid]){
            start=mid+1;
        }else{
            end=mid-n;
        }
    }

    if(f==1){
        printf("\nsorted array is:\t");
    }else{
        printf("\nthe number you are looking not found in the array\n");
    }

    return 0;
    
}