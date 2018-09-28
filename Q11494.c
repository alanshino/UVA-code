#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int Positive_integer(int ,int );

int main(int argc,char *argv){
    int *pqueen=malloc(sizeof(int)*4);
    assert(pqueen!=NULL);
    for (;;){
        scanf("%d%d%d%d",(pqueen+0),(pqueen+1),(pqueen+2),(pqueen+3));
        if (*(pqueen+0)==0||*(pqueen+1)==0||*(pqueen+2)==0||*(pqueen+3)==0){
            exit(0);
        }else if (*(pqueen+0)==*(pqueen+2)&&*(pqueen+1)==*(pqueen+3)){
            printf("%d\n",0);
        }else if ((*(pqueen+0)==*(pqueen+2))||(*(pqueen+1)==*(pqueen+3))){
            printf("%d\n",1);
        }else if (Positive_integer(*(pqueen+0),*(pqueen+2))==Positive_integer(*(pqueen+1),*(pqueen+3))){
            printf("%d\n",1);
        }else{
            printf("%d\n",2);
        }
    }
    free(pqueen);
    return 0;
}

int Positive_integer(int a,int b){
    if (a-b>0){
        return a-b;
    }else{
        return b-a;
    }
}
