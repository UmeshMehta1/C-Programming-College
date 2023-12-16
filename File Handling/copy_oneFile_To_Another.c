#include<stdio.h>
#include<string.h>

int main(){
    FILE *fp1, *fp2;
    int ch;
    fp1=fopen("D://cOutput/string.txt","r");
    fp2=fopen("D://cOutput/string1.txt","w");

    if(fp1==NULL || fp2==NULL){
        printf("Error in opening the file\n");
    }else{
        do{
            ch = fgetc(fp1);
            fputc(ch,fp2);
        }while(ch!=EOF);
        fclose(fp1);
        fclose(fp2);

        printf("\n Successfully copy.....");
    }
    return 0;
}