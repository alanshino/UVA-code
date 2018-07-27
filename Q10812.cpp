#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc,char *argv[]){
    int a,b,c,s=0,d=0;
    cin>>c;
    for (int i=0;i<c;i++){
        cin>>a>>b;
        if (a<b){
            cout<<"impossible"<<endl;
        }else if ((a+b)%2==1||(a-b)%2==1){
            cout<<"impossible"<<endl;
        }else{
            s=(a+b)/2;
            d=(a-b)/2;
            cout<<s<<" "<<d<<endl;
        }
    }
    return 0;
}
