#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
    int n,k;
    int a[10000]={0};
    int max=-1;
    int min=9999;
    int med=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&k);
        for (int j=0;j<k;j++){
            scanf("%d",&a[j]);
        }
        for (int j=0;j<k;j++){
            if (a[j]>max){
                max=a[j];
            }
            if (a[j]<min){
                min=a[j];
            }
            if (a[j]>min&&a[j]<max){
                med=a[j];
            }
        }
    }
    printf("%d %d %d",max,min,med);
    return 0;
}
