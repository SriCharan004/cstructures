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
        if (c == '\t'){
            counttab++;
        }
        else if (c=='\n'){
            countnewline++;
        }
    }
    
    printf("Total Characters are %d \n",countchar);
    printf("Total tabs are %d \n",counttab);
    printf("Total newlines are %d \n",countnewline);

   fclose(f1);

}