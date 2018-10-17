#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int Absolute(int );

int main(void){
    char *pc = new char[10];
    int car_number=0,answer=0,input=0;
    cin>>input;
    for (;input>0;input--){
        cin>>pc;
        answer=((*(pc+0)-'A')*26*26)+((*(pc+1)-'A')*26)+((*(pc+2)-'A')*1);
        car_number=atoi(pc+4);
        if (Absolute(answer-car_number)<=100){
            cout<<"nice"<<endl;
            //cout<<Absolute(answer-car_number)<<endl;
        }else{
            cout<<"not nice"<<endl;
        }
    }
    return 0;
}

int Absolute(int n){
    return (n<0)?-n:n;
}
