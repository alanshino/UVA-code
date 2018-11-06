#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv){
    unsigned long int n=0;
    unsigned long int input=0;
    scanf("%d",&input);
    for (int i=1;i<=input;i++){
        n+=i*i;
    }
    printf("%ld",n);
    return 0;
}
