#include<stdio.h>
#include<string.h>

int main(){
    FILE *fp=NULL;
    char ch;
    int sp,nl,cc;

    fp=fopen("D://cOutput/string.txt","r");
    if(fp==NULL){
        printf("File not found!");
    }else{
        do{
            ch = getc(fp);
            if(ch==' ' )
                sp++;
            else if(ch=='\n')
                nl++;
            else
                cc++;
            }while(ch!=EOF);
                printf("\nSpace: %d",sp);
                printf("\nNew Line: %d",nl);
                printf("\nCharacters: %d",cc);

            
            fclose(fp);
        }
    return 0;
}