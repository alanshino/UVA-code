#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,j,k;
    int high,length;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        scanf("%d",&j);
        for (k=1;k<=j;k++){
            for (high=1;high<=k;high++){
                printf("%d",k);
            }
            printf("\n");
        }
        for (length=k-2;length>=1;length--){
            for (j=1;j<=length;j++){
                printf("%d",length);
            }
            printf("\n");
        }
    }
    return 0;
}
