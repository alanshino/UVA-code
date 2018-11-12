#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,A,F,k,e,high=0;
    while (scanf("%d",&n)!=EOF){
        for (e=0;e<n;e++){
            scanf("%d%d",&A,&F);
            if(e) printf( "\n" );
            for (i=0;i<F;i++){
                if(i) printf( "\n" );
                for (k=1;k<=A;k++){
                    for (high=1;high<=k;high++){
                        printf("%d",k);
                    }
                    printf("\n");
                }
                for (k=A-1;k>=1;k--){
                    for (high=1;high<=k;high++){
                        printf("%d",k);
                    }
                    printf("\n");
                }
            }
        }
    }
    return 0;
}
