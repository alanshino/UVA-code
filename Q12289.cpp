#include <iostream>
using namespace std;

int howlong(char *pc){
    int i;
    for (i=0;*pc!='\0';i++){
        pc++;
    }
    return i;
}

int main(void){
    char *pc = new char[10];
    int n;
    int number=0;
    cin>>n;
    while (n){
        cin>>pc;
        if (howlong(pc)==5){
            cout<<"3";
        }else if (howlong(pc)==3){
            for (int i=0;i<howlong(pc);i++){
                if (*(pc+i)=='o'&&i!=1){
                    number++;
                }else if (*(pc+i)=='n'){
                    number++;
                }else if (*(pc+i)=='e'){
                    number++;
                }
            }
            if (number>=2){
                cout<<"1";
            }else{
                cout<<"2";
            }
        }
        n--;
        number=0;
    }
    return 0;
}
