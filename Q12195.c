#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc,char **argv){
    int check=0,beat=0;
    char *pc=malloc(sizeof(char)*200);
    while (scanf("%s",pc)!=EOF&&*pc!='*'){
        while (*pc!='\0'){
            if (*pc=='/'){
                if (beat==64){
                    check++;
                }
                beat=0;
            }else{
                if (*pc=='W'){
                    beat+=64;
                }else if (*pc=='H'){
                    beat+=32;
                }else if (*pc=='Q'){
                    beat+=16;
                }else if (*pc=='E'){
                    beat+=8;
                }else if (*pc=='S'){
                    beat+=4;
                }else if (*pc=='T'){
                    beat+=2;
                }else{
                    beat+=1;
                }
            }
            pc++;
        }
        printf("%d\n",check);
        check=0;
    }
    return 0;
}
