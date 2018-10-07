#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#define false 0
#define true 1
#include <conio.h>
void gotoxy(int , int );

struct Snake{
    int x,y;
}snake;

int main(int argc,char **argv){
    char c,user;
    int x=10,y=10;
    ShowCursor(false);
    for (int i=0;i<30;i++){
        for (int j=0;j<50;j++) {
            if (i==0||i==29||j==0||j==49){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    system("pause");
    gotoxy(x,y);
    printf("a");
    SetCursor(NULL);
    for (;;){
        switch (getch()){
            case 224:
                switch (getch()){
                    case 72:
                        //Sleep(1);
                        system("CLS");
                        //Sleep(1);
                        for (int i=0;i<30;i++){
                            for (int j=0;j<50;j++) {
                                if (i==0||i==29||j==0||j==49){
                                    printf("*");
                                }else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                        y--;
                        gotoxy(x,y);
                        //printf("a");
                        break;
                    case 80:
                        system("CLS");
                        Sleep(1);
                        for (int i=0;i<30;i++){
                            for (int j=0;j<50;j++) {
                                if (i==0||i==29||j==0||j==49){
                                    printf("*");
                                }else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                        y++;
                        gotoxy(x,y);
                        //printf("a");
                        break;
                    case 75:
                        system("CLS");
                        Sleep(1);
                        for (int i=0;i<30;i++){
                            for (int j=0;j<50;j++) {
                                if (i==0||i==29||j==0||j==49){
                                    printf("*");
                                }else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                        x--;
                        gotoxy(x,y);
                        //printf("a");
                        break;
                    case 77:
                        system("CLS");
                        Sleep(1);
                        for (int i=0;i<30;i++){
                            for (int j=0;j<50;j++) {
                                if (i==0||i==29||j==0||j==49){
                                    printf("*");
                                }else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                        x++;
                        gotoxy(x,y);
                        //printf("a");
                        break;
                }
        }
    }
    return 0;
}

void gotoxy(int xpos, int ypos){
    COORD scrn;
    HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
    scrn.X = xpos; scrn.Y = ypos;
    SetConsoleCursorPosition(hOuput,scrn);
}

void showCursor(int visible){
    CONSOLE_CURSOR_INFO ConCurInf;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleCursorInfo(hStdOut, &ConCurInf);
    ConCurInf.bVisible = visible;
    SetConsoleCursorInfo(hStdOut, &ConCurInf);
}
