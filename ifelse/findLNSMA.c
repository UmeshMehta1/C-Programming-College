//Find Largest number, smallest numer, averae number.
#include<stdio.h>
int main(){
    int n, ln, sn, a, elm, i;

    printf("Enter the total number of elements: ");
    scanf("%d", &elm);

    ln = 0;    //largest number
    sn = 0;    // smallest number
    a = 0;     // average number

    for (i = 1; i <= elm; i++) { // Change the loop condition
        printf("\nEnter %d number: ", i);
        scanf("%d", &n);
        if (i == 1) {
            ln = n;
            sn = n;
        }
        if (n > ln) {
            ln = n;
        }
        if (n < sn) {
            sn = n;
        }

        a += n;
    }
    a = a / elm;

    printf("Largest number: %d\n", ln);
    printf("Smallest number: %d\n", sn);
    printf("Average number: %d", a);

    return 0;
}
