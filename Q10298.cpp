#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <assert.h>
int how(char *);
using namespace std;

int main(int argc,char **argv){
    int i=1,how_long=0;
    char *pc=(char *)malloc(sizeof(char)*1000000);
    int n=0;
    for (;;){
        cin>>pc;
        if (*pc=='.') break;
        else if (*(pc+0)==*(pc+1)){
            how_long=how(pc);
            //printf("%d\n",n);
            cout<<how_long<<endl;
        }else{
            i=1;
            while (*(pc+0)!=*(pc+i)&&*(pc+i)!='\0'){
                //cout<<i<<endl;
                //cout<<*(pc+i)<<endl;
                i++;
            }
            if (*(pc+0)==*(pc+i)){
                how_long=how(pc);
                n=how_long/i;
                cout<<n<<endl;
            }else{
                //cout<<i<<endl;
                cout<<1<<endl;
            }
        }
    }

    return 0;
}

int how(char *pc){
    int i=0;
    while (*pc!='\0'){
        i++;
        pc++;
    }
    return i;
}

