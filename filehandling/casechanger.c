#include <stdio.h>
#define max_len 100

void initcase(char *A){
    if(A[0] >= 'a' && A[0] <= 'z'){
        A[0]=A[0]-32;
    }
    for (int i=1;A[i]!=0;i++){
        if(A[i] >= 'A' && A[i] <= 'Z'){
            A[i]+=32;
        }

    }
}


int main(int argc,char *argv[]){
    FILE *f1,*f2;
    
    if (argc!=3){
        printf("error\n");
    }
    
    f1=fopen(argv[1],"r");
    if(f1==NULL){
        return 1;
    }
    
    f2=fopen(argv[2],"w");
    if(f2==NULL){
        return 1;
    }

    char c[max_len],temp[max_len];
    while (fscanf(f1,"%s",c)!=EOF){
        initcase(c);
        fprintf(f2," %s ",c);
    }
    fclose(f1);
    fclose(f2);


}