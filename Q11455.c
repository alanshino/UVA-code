#include <stdio.h>
#include <stdlib.h>

void bubble(int rec[]){
    int temp;
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            if (rec[i]<rec[j]){
                temp=rec[i];
                rec[i]=rec[j];
                rec[j]=temp;
            }
        }
    }
}

int main(int argc,char *argv[]){
    int rec[4];
    for (int i=0;i<4;i++){
        scanf("%d",rec+i);
    }
    bubble(rec);
    if (rec[0]==rec[1]&&rec[1]==rec[2]&&rec[2]==rec[3]){
        printf("square\n");
    }else if (rec[0]==rec[1]&&rec[2]==rec[3]){
        printf("rectangle\n");
    }else if (rec[0]+rec[1]+rec[2]>rec[3]){
        printf("quadrangle\n");
    }else{
        printf("banana\n");
    }
    return 0;
}
