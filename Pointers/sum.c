#include <stdio.h>

int main(){
    int a[100];
    int sum=0, i, n, *p;

    printf("Enter Limit of Array: %d",n);
    scanf("%d: ",&n);

    for(i=0;i<n;i++){
        printf("%d: ", i+1);
        scanf("%d",&a[i]);
    }

    p = &a[0];

    for(i=0;i<n;i++) {
        sum += *p;
        ++p;
    }
    
    printf("Sum: %d", sum);
  
  return 0;

}