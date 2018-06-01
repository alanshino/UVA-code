#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sss(int i){
    i=i<0?-i:i;
    return i;
}

void jolly(int a[],int i){
    int n;
    int jo=0;
    int div=0;
    for (n=0;n<i-1;n++){
        div=sss(a[n]-a[n+1]);
        printf("%d ",div);
        if (div<=i-1&&div>=1){

        }else{
            jo=1;
        }
    }
    if (jo){
        printf("not jolly");
    }else{
        printf("jolly");
    }
    return ;
}

int main(void){
    int a[10000]={0};
    int n;
    char c;
    int i=0;
    do {
        scanf("%d%c",&a[i],&c);
        i++;
    }while (c!='\n');
    jolly(a,i);
    return 0;
}
