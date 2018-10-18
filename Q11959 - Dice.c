#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <windows.h>
int check(int *,char *,char *);

int main(int argc,char **argv){
    int n;
    int *pans=malloc(sizeof(int)*6);
    char *pdice=malloc(sizeof(char)*7);
    char *pdice1=malloc(sizeof(char)*7);
    if (scanf("%d",&n)!=EOF){
        while (n){
            scanf("%s",pdice);
            scanf("%s",pdice1);
            printf("%s",(check(pans,pdice,pdice1)==1)?"Equal\n":"Not Equal\n");
            n--;
        }
    }
    free(pans);
    free(pdice);
    free(pdice1);
    return 0;
}

int check(int *pans,char *pdice,char *pdice1){
    int check=0;
    for (int i=0;i<3;i++){
        if (i==0){
            *(pans+i)=*(pdice+i)+*(pdice+i+1)-48*2;
        }else{
            *(pans+i)=*(pdice+i+1)+*(pdice+i+3)-48*2;
        }
        if (i==0){
            *(pans+i+3)=*(pdice1+i)+*(pdice1+i+1)-48*2;
        }else{
            *(pans+i+3)=*(pdice1+i+1)+*(pdice1+i+3)-48*2;
        }
    }
    for (int i=0;i<3;i++){
        for (int j=3;j<6;j++){
            if (*(pans+i)==*(pans+j)) check++;
        }
    }
    return (check==3)?1:0;
}
