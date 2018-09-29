#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int parking(int );

int main(int argc,char **argv){
    int n,test=0;
    int max=-1,min=100;
    int *ptest=NULL;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&test);
        max=-1,min=100;
        ptest=malloc(sizeof(int)*test);
        for (int j=0;j<test;j++){
            scanf("%d",(ptest+j));
        }
        for (int j=0;j<test;j++){
            if (*(ptest+j)>max){
                max=*(ptest+j);
            }
            if (*(ptest+j)<min){
                min=*(ptest+j);
            }
        }
        printf("%d\n",parking(max-min));
    }
    free(ptest);
    return 0;
}

int parking(int n){
    return (n<0)?-n*2:n*2;
}
