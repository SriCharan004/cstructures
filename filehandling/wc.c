#include <stdio.h>

int main(){
    
    FILE *f1;
    f1=fopen("input.txt","r");
    if(f1==NULL){
            return 0;
    }

    
    int countchar=0,counttab=0,countnewline=0;
    char c;
    while((c=fgetc(f1))!=EOF){
        countchar++;
    }
    
    printf("Total Characters are %d \n",countchar);
    fclose(f1);

    f1=fopen("input.txt","r");
    if(f1==NULL){
            return 0;
    }


    while((c=fgetc(f1))!=EOF){
        if(c == '\t'){
            counttab++;
        }
    }
    printf("Total tabs are %d \n",counttab);


}