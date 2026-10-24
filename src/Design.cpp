#include "setting.h"
#include<windows.h>
#include<string.h>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

void gotoxy(short x, short y){
 HANDLE hConsoleOutput;
 COORD Cursor_an_Pos = { x, y };
 hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}

void TextColor(int x)
{
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, x);
}

void hide_Cursor()
{
    HANDLE hOut;
    CONSOLE_CURSOR_INFO ConCurInf;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    ConCurInf.dwSize = 10;
    ConCurInf.bVisible = FALSE;
    SetConsoleCursorInfo(hOut,&ConCurInf);
}

void show_Pointer()
{
    HANDLE hOut;
    CONSOLE_CURSOR_INFO ConCurInf;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    ConCurInf.dwSize = 10;
    ConCurInf.bVisible = TRUE;
    SetConsoleCursorInfo(hOut,&ConCurInf);
} 


int ControlsMenuMain(int number){
    int controls = 1;
    string StrItem[100];
    StrItem[0] = "| 1. Thong tin sach     |";
    StrItem[1] = "| 2. Quan ly trang thai |";
    StrItem[2] = "| 3. Chuc nang tien ich |";
    StrItem[3] = "| 4. Thoat              |";

    TextColor(3);
    gotoxy(SetOX,SetOY);
    cout << "+-----------------------+";
    for(int i = 1; i <= 4; i++){
        gotoxy(SetOX,SetOY + 2*i - 1);
        cout << StrItem[i - 1];
        gotoxy(SetOX,SetOY + 2*i);
        cout << "+-----------------------+";
    }
    TextColor(15);
    gotoxy(SetOX,SetOY+1);
    cout << StrItem[0];
    gotoxy(SetOX + 24,SetOY + 1);
    char c;
    while(1){
        if(kbhit()){
            c = getch();
            switch(c){
                case 13:{ // Enter
                    return number;
                    break;
                }
                case 72:{ // len
                    if(controls == 1){
                        controls = 9;
                        number = 4;
                    }
                    controls -= 2;
                    number -= 1;
                    gotoxy(SetOX + 24, SetOY + controls);
                    break;
                }
                case 80:{ //xuong
                    if(controls == 7){
                        controls = -1;
                        number = -1;
                    }
                    controls += 2;
                    number += 1;
                    gotoxy(SetOX + 24, SetOY + controls);
                    break;
                }
            }
            TextColor(3);
            gotoxy(SetOX,SetOY);
            cout << "+-----------------------+";
            for(int i = 1; i <= 4; i++){
                gotoxy(SetOX,SetOY + 2*i - 1);
                cout << StrItem[i - 1];
                gotoxy(SetOX,SetOY + 2*i);
                cout << "+-----------------------+";
            }
            TextColor(15);
            gotoxy(SetOX, SetOY + controls);
            cout << StrItem[number]; 
        }
    }
}
int ControlsMenuStatus(int number){
    int controls = 1;
    string StrItem[100];
    StrItem[0] = "| 1. Chinh sua thong tin. |";
    StrItem[1] = "| 2. Them sach.           |";
    StrItem[2] = "| 3. Xoa thong tin.       |";
    StrItem[3] = "| 4. Quay Lai menu chinh. |";

    TextColor(3);
    gotoxy(SetOX,SetOY);
    cout << "+-----------------------+";
    for(int i = 1; i <= 4; i++){
        gotoxy(SetOX,SetOY + 2*i - 1);
        cout << StrItem[i - 1];
        gotoxy(SetOX,SetOY + 2*i);
        cout << "+-----------------------+";
    }
    TextColor(15);
    gotoxy(SetOX,SetOY+1);
    cout << StrItem[0];
    gotoxy(SetOX + 24,SetOY + 1);
    char c;
    while(1){
        if(kbhit()){
            c = getch();
            switch(c){
                case 13:{ // Enter
                    return number;
                    break;
                }
                case 72:{ // len
                    if(controls == 1){
                        controls = 9;
                        number = 4;
                    }
                    controls -= 2;
                    number -= 1;
                    gotoxy(SetOX + 24, SetOY + controls);
                    break;
                }
                case 80:{ //xuong
                    if(controls == 7){
                        controls = -1;
                        number = -1;
                    }
                    controls += 2;
                    number += 1;
                    gotoxy(SetOX + 24, SetOY + controls);
                    break;
                }
            }
            TextColor(3);
            gotoxy(SetOX,SetOY);
            cout << "+-----------------------+";
            for(int i = 1; i <= 4; i++){
                gotoxy(SetOX,SetOY + 2*i - 1);
                cout << StrItem[i - 1];
                gotoxy(SetOX,SetOY + 2*i);
                cout << "+-----------------------+";
            }
            TextColor(15);
            gotoxy(SetOX, SetOY + controls);
            cout << StrItem[number]; 
        }
    }
}
int ControlsMenuUtilities(int number){
    int controls = 1;
    string StrItem[100];
    StrItem[0] = "| 1. Tim kiem sach theo ten tac gia |";
    StrItem[1] = "| 2. Tim kiem sach theo ten sach    |";
    StrItem[2] = "| 3. Loc thong tin nha xuat ban     |";
    StrItem[3] = "| 4. Kiem tra tinh trang sach       |";
    StrItem[4] = "| 5. Quay Lai menu chinh            |";

    TextColor(3);
    gotoxy(SetOX,SetOY);
    cout << "+-----------------------+";
    for(int i = 1; i <= 5; i++){
        gotoxy(SetOX,SetOY + 2*i - 1);
        cout << StrItem[i - 1];
        gotoxy(SetOX,SetOY + 2*i);
        cout << "+-----------------------+";
    }
    TextColor(15);
    gotoxy(SetOX,SetOY+1);
    cout << StrItem[0];
    gotoxy(SetOX + 24,SetOY + 1);
    char c;
    while(1){
        if(kbhit()){
            c = getch();
            switch(c){
                case 13:{ // Enter
                    return number;
                    break;
                }
                case 72:{ // len
                    if(controls == 1){
                        controls = 9;
                        number = 5;
                    }
                    controls -= 2;
                    number -= 1;
                    gotoxy(SetOX + 24, SetOY + controls);
                    break;
                }
                case 80:{ //xuong
                    if(controls == 7){
                        controls = -1;
                        number = -1;
                    }
                    controls += 2;
                    number += 1;
                    gotoxy(SetOX + 24, SetOY + controls);
                    break;
                }
            }
            TextColor(3);
            gotoxy(SetOX,SetOY);
            cout << "+-----------------------+";
            for(int i = 1; i <= 5; i++){
                gotoxy(SetOX,SetOY + 2*i - 1);
                cout << StrItem[i - 1];
                gotoxy(SetOX,SetOY + 2*i);
                cout << "+-----------------------+";
            }
            TextColor(15);
            gotoxy(SetOX, SetOY + controls);
            cout << StrItem[number]; 
        }
    }
}
// int main(){
//     int n = 0;
//     ControlsMenuMain(n);
// }
