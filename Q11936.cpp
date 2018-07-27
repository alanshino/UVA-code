#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(int argc,char *argv[]){
    int tri[3],t=0;
    cin>>t;
    for (int i=0;i<t;i++){
        cin>>*(tri+0)>>*(tri+1)>>*(tri+2);
        if (*(tri+0)+*(tri+1)>*(tri+2)&&*(tri+0)+*(tri+2)>*(tri+1)&&*(tri+1)+*(tri+2)>*(tri+0)){
            cout<<"OK"<<endl;
        }else{
            cout<<"Wrong!!"<<endl;
        }
    }
    return 0;
}
