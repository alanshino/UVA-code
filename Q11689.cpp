#include <stdio.h>
#include <iostream>
using namespace std;

int main(void){
    int n=0;
    int k=0;
    int e,f,c;
    cin>>e>>f>>c;
    k=e+f;
    while ((k/c)!=0){
        n+=k/c;
        k=k/c+k%c;
    }
    cout<<n;
    return 0;
}
