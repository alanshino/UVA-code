#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(void){
    int* pi=new int[2];
    int howmany=0;
    int temp=0;
    cin>>*(pi+0)>>*(pi+1);
    //cout<<*(pi+0)<<*(pi+1);
    int* pp=new int[*(pi+1)];
    int* pt=new int[*(pi+0)];
    for (int i=0;i<*(pi+1);i++){
        cin>>*(pp+i);
    }
    /*for (int i=0;i<*(pi+1);i++){
        cout<<*(pp+i);
    }*/
    for (int i=0;i<*(pi+0);i++){
        *(pt+i)=i+1;
    }
    howmany=*(pi+0)-*(pi+1);
    for (int i=0;i<*(pi+0);i++){
        for (int j=0;j<*(pi+1);j++){
            if (*(pt+i)==*(pp+j)){
                *(pt+i)=0;
                *(pp+j)=0;
            }
        }
    }
    if (howmany==0){
        cout<<"*";
    }else{
        for (int i=0;i<*(pi+0);i++){
            if (*(pt+i)==0){
                continue;
            }else{
                cout<<*(pt+i)<<" ";
            }
        }
    }
    return 0;
}
