#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
    int credit[16]={0};
    int number;
    int n=3;
    int k=7;
    int sum=0,odd=0;;
    for (int i=0;i<4;i++){
        scanf("%d",&number);
        while (number!=0){
            credit[n]=number%10;
            number/=10;
            n--;
        }
        n=k;
        k=n+4;
    }
    for (int i=0;i<16;i+=2){
        credit[i]*=2;
    }
    for (int i=1;i<16;i+=2){
        odd+=credit[i];
    }
    for (int i=0;i<16;i+=2){
        while (credit[i]!=0){
            sum+=credit[i]%10;
            credit[i]/=10;
        }
    }
    number+=odd+sum;
    if (number%10==0){
        printf("Valid");
    }else{
        printf("Invalid");
    }
    return 0;
}
