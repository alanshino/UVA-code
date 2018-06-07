#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
    char *pc=(char *)malloc(sizeof(char)*200);
    int sum=0;
    int prime=1;
    scanf("%s",pc);
    for (;*pc!='\0';pc++){
        if (*pc>='A'&&*pc<='Z'){
            sum+=*pc-38;
        }else if (*pc>='a'&&*pc<='z'){
            sum+=*pc-96;
        }
    }
    for (int i=2;i<sum;i++){
        if (sum%i==0){
            prime=0;
            break;
        }
    }
    if (prime){
        printf("It is a prime word.");
    }else{
        printf("It is not a prime word.");
    }
    return 0;
}
