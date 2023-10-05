//Check whether an input number is palindrome/ piglatin. 
#include<stdio.h>
int main() {

int sum=0, r=0, n;
printf("enter a number: ");
scanf("%d",&n);

int orig=n;

while(n>0){
    r= n%10;
    sum= sum*10+r;
    n/=10;

}

if(orig==sum){
    printf("The given number %d is a Palindromic Number",sum);
}
else{
    printf("nto palindroic number, orignal: %d", orig);
}
}
