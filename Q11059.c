#include <stdio.h>
#include <stdlib.h>

int anser(int test[],int n){
    int max=0;
    int temp=0;
    for (int i=0;i<n;i++){
        temp=1;
        for (int j=0;j<n;j++){
            if (i==j){
                continue;
            }
            temp*=test[j];
            if (temp>max){
                max=temp;
            }
        }
    }
    return max;
}

int main(int argc,char *argv[]){
    int test[18];
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&test[i]);
    }
    printf("%d",anser(test,n));
    return 0;
}
