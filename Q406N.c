#include <stdio.h>
#include <stdlib.h>
int primee(int i);

int main(int agrc,char **argv)
{
    int test[10010]={0};
    int prime[10000]={0};
    int number=1;
    prime[1]=1;
    int N=0,C=0;
    while (scanf("%d%d",&N,&C)!=EOF){
        number=1;
        for (int i=2,a=2;i<N;i++){
            if (primee(i)){
                number++;
                prime[a]=i;
                a++;
            }
        }
     /*   for (int i=1;i<=number;i++){
            printf("%d ",prime[i]);
        }*/
        printf("\n");
        if (number%2==1){
            printf("%d %d: ",N,C);
            C=C*2-1;
            if (C>=number){
                for (int a=1;a<=number;a++)
                    printf("%d ",prime[a]);
            }else
                for (int a=1;a<=C;a++){
                    printf("%d ",prime[number/C+a]);
                }
        }else if (number%2==0){
            printf("%d %d: ",N,C);
            C*=2;
            if (C>=number)
                for (int a=1;a<=number;a++)
                    printf("%d ",prime[a]);
            else
                for (int a=1;a<=C;a++){
                    printf("%d ",prime[number/C+a]);
                }
        }
        printf("\n");
    }
    return 0;
}

int primee(int i){
    for (int k=2;k<i;k++){
        if ((i%k==0) && (i!=k)){
            return 0;
        }
    }
    return 1;
}
