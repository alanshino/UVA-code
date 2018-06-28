#include <iostream>
using namespace std;

int main(void){
    long long int n;
    long int k=0;
    for (int i=0;i<10;i++){
        cin>>n;
        if (n==0){
            break;
        }
        k=n%10*5;
        if (((n/10)-k)%17==0){
            cout<<1<<"\n";
        }else{
            cout<<0<<"\n";
        }
    }
    return 0;
}
