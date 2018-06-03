#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n1,n2,max=0;
    int temp=0;
    int time=0;
    int check=0;
    scanf("%d%d",&n1,&n2);
    if (n1>n2){
        temp=n1;
        n1=n2;
        n2=temp;
    }
    for (int i=n1;i<=n2;i++){
        check=i;
        time=0;
        while (check!=1){
            if (check%2==1){
                check=check*3+1;
                time++;
            }else{
                check/=2;
                time++;
            }
        }
        if (time>max){
            max=time;
        }
    }
    printf("%d %d %d",n1,n2,max+1);
    return 0;
}
