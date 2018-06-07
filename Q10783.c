#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
    int n;
    int a[2]={0};
    int odd=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        odd=0;
        for (int j=0;j<2;j++){
            scanf("%d",&a[j]);
        }
        for (int j=a[0];j<=a[1];j++){
            if (j%2==1){
                odd+=j;
            }
        }
        printf("case %d : %d",i+1,odd);
    }
    return 0;
}
