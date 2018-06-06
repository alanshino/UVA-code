#include <stdio.h>
#include <stdlib.h>

int abss(long long int t1,long long int t2){
    int div;
    div=t2-t1;
    return (div>0)?div:-div;
}

int main(void){
    long int n[10000]={0};
    int a;
    long int t1,t2;
    int max=0;
    int sum=0;
    int div=0;
    int action=0;
    long int themaxis=0;
    scanf("%d",&a);
    for (int i=0;i<a;i++){
        scanf("%ld%ld",&t1,&t2);
        div=abss(t1,t2);
        for (long int j=t1;j<=t2;j++){
            sum=0;
            for (long int k=1;k<=j;k++){
                if (j%k==0){
                    sum++;
                }
            }
            n[action]=sum;
            action++;
        }
        for (int p=0;p<=div;p++){
            if (n[p]>max){
                max=n[p];
            }
        }
        for (int p=0;p<=div;p++){
            if (n[p]==max){
                themaxis=p+1;
                break;
            }
        }
        printf("Between %ld and %ld, %ld has a maximum of %d divisors.",t1,t2,themaxis,max);
        action=0;
    }
    return 0;
}
