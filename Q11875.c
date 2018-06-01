#include <stdio.h>
#include <stdlib.h>

int moving(int a[],int n){
    int sum=0;
    int ave=0;
    int move=0;
    for (int i=0;i<n;i++){
        sum+=a[i];
    }
    ave=sum/n;
    for (int i=0;i<n;i++){
        if (a[i]<ave){
            move=move+ave-a[i];
        }
    }
    return move;
}

int main(int argc,char *argv[]){
    int n;
    int a[100000]={0};
    int move=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
        move=moving(a,n);
    }
    printf("The minimum number of moves is %d",move);
    return 0;
}
