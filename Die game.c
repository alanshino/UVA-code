#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int cases;
    while (scanf("%d",&cases)!=EOF){
        int top=1;
        int N=2,E=4,W=3,S=5;
        char *pn="north";
        char *pe="east";
        char *pw="west";
        char *ps="south";
        for (int i=1;i<=cases;i++){
            char *pc=(char *)malloc(sizeof(char)*10);
            scanf("%s",pc);
            if (strncmp(pc,pn,10)==0){
                N=top;
                top=S;
                S=7-N;
            }
            else if (strncmp(pc,pe,10)==0){
                E=top;
                top=W;
                W=7-E;
            }else if (strncmp(pc,ps,10)==0){
                S=top;
                top=N;
                N=7-S;
            }else if (strncmp(pc,pw,10)==0){
                W=top;
                top=E;
                E=7-W;
            }
        }
        printf("%d\n",top);
    }
    return 0;
}
