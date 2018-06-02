#include <stdio.h>
#include <stdlib.h>

int median(int *pc,int i){
    int med=0;
    int sum=0;
    if ((i)%2==1){
        if (i==1){
            med=*(pc+i);
        }else{
            med=*(pc+i/2+1);
        }
        return med;
    }else{
        if (i==2){
            med=(*(pc+i)+*(pc+i-1))/2;
        }else{
            med=(*(pc+i/2)+*(pc+i/2+1))/2;
        }
        return med;
    }
    return 0;
}

int main(void){
    int n;
    int i=1;
    int *pc=(int *)malloc(sizeof(int)*1000);
    while (scanf("%d",&n)!=EOF){
        *(pc+i)=n;
        printf("%d\n",median(pc,i));
        i++;
    }
    return 0;
}
