#include <stdio.h>
#include <stdlib.h>

int happy(int n){
    int sum=0;
    int ans=0;
    int anser=0;
    int original=n;
    while (n!=1){
        sum=n;
        ans=0;
        anser=0;
        while (sum!=0){
            ans=sum%10;
            ans=ans*ans;
            anser+=ans;
            sum/=10;
        }
        if (n==anser||anser==original){
            return 0;
        }
        n=anser;
    }
    return 1;
}

int main(void){
    int n;
    scanf("%d",&n);
    if (happy(n)){
        printf("Happy number");
    }else{
        printf("Unhappy number");
    }
    return 0;
}
