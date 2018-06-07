#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
    long long int n;
    const int i=11;
    for (;;){
        scanf("%lld",&n);
        if (n==0){
            break;
        }
        if (n%11==0){
            printf("%lld is a multiple of %d.",n,i);
        }else{
            printf("%lld is not a multiple of %d.",n,i);
        }
    }
    return 0;
}
