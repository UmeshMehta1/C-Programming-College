#include<stdio.h>
#include<string.h>

int main(){
    FILE *fp=NULL;

    fp= fopen("D://cOutput/output.txt","w");
    if(fp== NULL){
        printf("Error in opening file\n");
    }
    else{
        printf("enter a charactr: ");
        char ch = getchar();
        fputc(ch,fp);
        fclose(fp);
        printf(fp);
        printf("\nfile created successfully.......");
    }
}