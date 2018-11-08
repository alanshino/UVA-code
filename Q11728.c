#include <stdio.h>
#include <stdlib.h>
int factor(int n);

int main(int argc,char **argv){
    int n,a=1,test=0;
    while (scanf("%d",&n)!=EOF){
        test=0;
        if (n==0) break;
        for (int i=n;i>0;i--){
            if (factor(i)==n){
                printf("Case %d: %d\n",a,i);
                test=1;
                break;
            }
        }
        if (test==1);
        else
            printf("Case %d: %d\n",a,-1);
        a++;
    }
    return 0;
}

int factor(int n){
    int answer=0;
    for (int i=1;i<=n;i++){
        if (n%i==0) answer+=i;
    }
    return answer;
}
