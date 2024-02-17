#include <stdio.h>

int main(){
    
    FILE *f1,*f2;

    f1=fopen("input.txt","r");
    if(f1==NULL){
        return 0;
    }
    f2=fopen("Copied.txt","w");
    if(f2==NULL){
        return 0;
    }
    char c;
    while ((c=fgetc(f1))!=EOF){
        
        fputc(c,f2);


    }

    fclose(f1);
    fclose(f2);
    



}