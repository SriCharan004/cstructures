#include <stdio.h>

int main(){
    
    FILE *f1,*f2;
    f1=fopen("input.txt","r");
    if(f1==NULL){
            return 0;
    }
    
    f2=fopen("input.txt","r");
    if(f2==NULL){
            return 0;
    }

    
    int countchar=0,counttab=0,countnewline=0;
    char c;
    while((c=fgetc(f1))!=EOF){
        countchar++;
    }
    f1=f2;
    printf("Total Characters are %d \n",countchar);

    while((c=fgetc(f1))!=EOF){
        if(c=='\t'){
            counttab++;
        }
    }
    f1=f2;
    printf("Total Characters are %d \n",counttab);


}