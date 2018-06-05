#include <stdio.h>
#include <stdlib.h>

int main(void){
    long long int N;
    long long int sum=0;
    int col;
    int n;
    scanf("%d",&N);
    col=N/2+1;
    n=(1+N)*col/2;
    sum=3*(2*n-3);
    printf("%d",sum);
    return 0;
}
