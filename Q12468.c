#include <stdio.h>

int maxmin(int n,int a){
    int number=0;
    number=n-a;
    number=number<0?-number:number;
    if (number>50){
        return 100-number;
    }else{
        return number;
    }
}

int main(int argc,char *argv[]){
    int n,a;
    for (;;){
        scanf("%d%d",&a,&n);
        if (a==-1&&n==-1){
            break;
        }
        printf("%d\n",maxmin(n,a));
    }
    return 0;
}
