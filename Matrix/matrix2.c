//diagonal of martix;

#include<stdio.h>

int main(){
    int a[3][3],c,r;
    printf("Enter row and column:\n");

    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            scanf("%d",&a[r][c]);
        }
    }

    
for(r=0;r<3;r++){
    for(c=0;c<3;c++){
        printf("%5d", a[r][c]);
    }
    printf("\n");
}

for(r=0;r<3;r++){
    for(c=0;c<3;c++){
        if(r==c){
           printf("%5d", a[r][c]);
        }
    }
    printf("\n");
}
return 0;
}

