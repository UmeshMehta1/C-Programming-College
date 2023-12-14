#include <stdio.h>
// recursive Function;
int main(){
   static int i=1;
    if(i>10){
        exit(0);
    }
    printf("%d:%d\n",i+1,i);
    i++;
    main();
}

