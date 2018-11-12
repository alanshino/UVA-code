#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv){
    int a,b,max,i=0,c=0,d=0;
    int temp=0;
    int time=0;
    int check=0;
    while (scanf("%d%d",&a,&b)!=EOF){
        if (a>b){
            c=a;
            d=b;
            temp=a;
            a=b;
            b=temp;
        }else{
            c=a;
            d=b;
        }
        max=0;
        for (i=a;i<=b;i++){
            check=i;
            time=1;
            while (check!=1){
                if (check%2==0){
                    check=check/2;
                    time++;
                }else{
                    check=check*3+1;
                    time++;
                }
            }
            if (time>max){
                max=time;
            }
        }
        printf("%d %d %d\n",c,d,max);
    }
    return 0;
}
