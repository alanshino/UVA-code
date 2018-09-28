#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc,char **argv){
    int n,test=0;
    int *ptest=NULL;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&test);
        ptest=malloc(sizeof(int)*test);
        for (int j=0;j<test;j++){
            scanf("%d",(ptest+j));
        }
    }
    free(ptest);
    return 0;
}

