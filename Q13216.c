#include <stdio.h>
#include <stdlib.h>

int the66(long long int n){
    long long int sum=1;
    for (int i=0;i<n;i++){
        if (i==0){
            sum=1;
        }
        sum*=66;
    }
    return sum%100;
}

int main(void){
    int n;
    int i;
    long long int k;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&k);
        printf("%ld\n",the66(k));
    }
    return 0;
}
