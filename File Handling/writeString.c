#include<stdio.h>
#include<string.h>

int main(){
    FILE *fp=NULL;
    char ch;

    fp= fopen("D://cOutput/string.txt", "w");
    if(fp==NULL){
        printf("Error in opening file!");

    }else{
        printf("enter a string: ");

        while (1)
        {
            ch=getchar();
            if(ch=='0')
              break;
            fputc(ch,fp);
            
        }
        fclose(fp);
        printf("file is created successfully......");
        
    }
}