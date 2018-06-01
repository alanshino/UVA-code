#include <stdio.h>
#include <stdlib.h>

int sss(int n){
    int i;
    i=(n<0)?-n:n;
    return i;
}

int main(void){
    int n,i;
    int solider=0;
    scanf("%d%d",&n,&i);
    solider=sss(n-i);
    printf("%d",solider);
    return 0;
}
