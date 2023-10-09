#include<stdio.h>

int main(){
    int a[50][50];
    int m,n,r,c;

    printf("enter size of matrix: ");
    scanf("%d%d",&m, &n);

    for(r=0;r<m;r++){
        for(c=0;c<n;c++){
            scanf("%d",&a[r][c]);
        }
    }

    
    for(r=0;r<m;r++){
        for(c=0;c<n;c++){
            printf("%5d",a[r][c]);
        }
        printf("\n");
    }

    if(m!=n){
        printf("\nsorry! this is not a square matrix.");

    }else{
        for(r=0;r<m;r++){
        for(c=0;c<n;c++){
            // if(r>=c) // for lower Marix;
            //   printf("%5d",a[r][c]);
            if(r<=c) // for Upper Marix;
              printf("%5d",a[r][c]);
        }
        printf("\n");
    }

    }
return 0;
}
