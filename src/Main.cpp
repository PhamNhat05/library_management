#include <bits/stdc++.h>
#include <fstream>
#include <string>
#include<windows.h>
#include "xuli.h"
using namespace std;

int ControlsMenuMain(int number);
int ControlsMenuStatus(int number);
int ControlsMenuUtilities(int number);

int main(){
   int count;
   BookParent P;
   BookParent BP[Count_MAX];
   count = P.InputData(BP);
   int choose,choose1,choose3;
   bool check = true;
    while(choose != 4 ){
        system("cls");
       choose = ControlsMenuMain(choose);
        switch(choose){
           case 1:{
            system("cls");
            cout <<setw((OXmax-14)/2)<<setfill(' ')<<""<<"THONG TIN SACH"<<endl;
            P.ShowInfor(BP, count);
            check = P.ReturnFun();
            break;
           }
           case 2:{
            bool flag = true;
            while(flag == true){
            	system("cls");
                ControlsMenuStatus(choose1);
                cin >> choose1;
                switch(choose1){
                    case 1:{
                        P.UpdateData(BP);
                        count = P.InputData(BP);
                        flag = P.ReturnFun();
                        break;
                    }
                    case 2:{
                        AddData();
                        count = P.InputData(BP);
                        flag = P.ReturnFun();
                        break;
                        }
                    case 3:{
                        DeleData();
                        count = P.InputData(BP);
                        flag = P.ReturnFun();
                        break;
                    }
                    case 4:{
                        flag = false;   
                    }
                    default:
                        break;
                    }
                }
            }
            break;
           case 3:{
            bool flag = true;
            while(flag == true){
                system("cls");
                ControlsMenuUtilities(choose3);
                cin >> choose3;
                switch(choose3){
                    case 1:{
                        FindAuthor(BP);
                        flag = P.ReturnFun();
                        break;
                    }
                    case 2:{
                        FindNameBook(BP);
                        flag = P.ReturnFun();
                        break;
                    }
                    case 3:{
                        FindPubComp(BP);
                        flag = P.ReturnFun();
                        break;
                    }
                    case 4:{
                        CheckBookStatus(BP);
                        flag = P.ReturnFun();
                        break;
                    }
                    case 5: {
                        flag = false;
                        system("cls");
                        break;
                    }
                    default:
                        flag = true;
                        break;
                }
            }
            break;
           }
           case 4:{
                check = false;
                break;
           }
           default:{   
                check = true;
                break;
            }
       }
   }
   return 0;
}
