#include <stdio.h>
#include <stdlib.h>

int main(){
    char *pc=(char *)malloc(sizeof(char)*200);
    char *ps=(char *)malloc(sizeof(char)*200);
    char *pd=(char *)malloc(sizeof(char)*200);
    char c;
    int n=0;
    int j=0;
    int sum=0;
    scanf("%s",pc);
    for (int i=0;i<200;i++){
        *(ps+i)='\0';
    }
    for (int i=0;*(pc+i)!='\0';i++){
        if (i%2==0){
            c=*(pc+i);
            //printf("%c",c);
        }else{
            n=atoi(pc+i);
            sum+=n;
            for (;j<sum;j++){
                *(ps+j)=c;
            }
        }
    }
    printf("%s\n",ps);
    //printf("%s",pd);
    return 0;
}
