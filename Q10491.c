#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int degrees(int total);

int main(int argc,char **argv)
{
    int total=0,degree=1,i=0;
    char *ps;
    char *pc=malloc(sizeof(char)*1005);
    assert(pc!=NULL);
    while (scanf("%s",pc)!=EOF){
        i=0,total=0,degree=1;
        if (*pc=='0') break;
        ps=pc;
        for (;*ps!='\0';ps++){
            total+=*ps-'0';
        }
        if (total%9!=0)
            printf("%s is not a multiple of 9.\n",pc);
        else{
            while(total>10){
                total=degrees(total);
                degree++;
            }
            printf("%s is a multiple of 9 and has 9-degree %d.\n",pc,degree);
        }
    }
    free(pc);
    return 0;
}

int degrees(int total){
    int sum=0;
    while (total!=0){
        sum+=total%10;
        total/=10;
    }
    return sum;
}
