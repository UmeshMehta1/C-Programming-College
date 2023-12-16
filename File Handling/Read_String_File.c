#include<stdio.h>
#include<string.h>

int main(){
    FILE *fp=NULL;
    char ch;

    fp=fopen("D://cOutput/string.txt","r");
    if(fp==NULL){
        printf("File not found!");
    }else{
        // do{
        //     ch = getc(fp);
        //     printf("%c",ch);
        // }while (ch!=EOF);
        // fclose(fp);

        // ==== or=====

        while(ch!=EOF){
          ch=getc(fp);
          printf("%c",ch);
        }
        fclose(fp);
        
    }
}