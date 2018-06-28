#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n1,n2;
    int *pi;
    int highjump=0;
    int lowjump=0;
    scanf("%d",&n1);
    for (int i=0;i<n1;i++){
        scanf("%d",&n2);
        pi=(int *)malloc(sizeof(int)*n2);
        for (int k=0;k<n2;k++){
            scanf("%d",(pi+k));
        }
        highjump=0;
        lowjump=0;
        for (int j=0;j<n2-1;j++){
            if (*(pi+j)>*(pi+j+1)){
                lowjump++;
            }else if(*(pi+j)<*(pi+j+1)){
                highjump++;
            }
        }
        printf("case %d: %d %d",i+1,highjump,lowjump);
    }
    free(pi);
    return 0;
}
