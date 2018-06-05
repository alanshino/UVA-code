#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
    int number;
    int sum=0;
    scanf("%d",&number);
    for (int i=1;i<number;i++){
        if (number%i==0){
            sum+=i;
        }
    }
    if (sum==number){
        printf("perfect");
    }else if (sum<number){
        printf("deficient");
    }else{
        printf("abundant");
    }
    return 0;
}
