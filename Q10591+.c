#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int happy_number(long long int testnumber);

int main(int argc,char **argv)
{
    int a=1;
    long long int testnumber=0;
    int number;
    scanf("%d",&number);
    for (int i=0;i<number;i++){
        scanf("%lld",&testnumber);
        if (happy_number(testnumber)){
            printf("Case #%d: %lld is a Happy number.\n",a,testnumber);
        }else{
            printf("Case #%d: %lld is an Unhappy number.\n",a,testnumber);
        }
        a++;
    }
    return 0;
}

int happy_number(long long int testnumber){
    long long int i=testnumber;
    long long int check=0;
    while (check!=1){
        check=0;
        while (testnumber!=0){
            check+=((testnumber%10)*(testnumber%10));
            testnumber/=10;
        }
        testnumber=check;
        //printf("%d",testnumber);
        if (check==i) break;
    }
    if (check==1) return 1;
    else return 0;
}
