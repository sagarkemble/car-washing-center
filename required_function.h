
#ifndef REQUIRED_FUNCTION_H
#define REQUIRED_FUNCTION_H
#include<iostream>
#include<iomanip>
#include<windows.h>
#include<unistd.h>
#include <stdio.h>
#include<string.h>
#include"create_and_login.h"
#include"submain1.h"
#include"file_printer.h"

void loading(const char* str,int iteration,int time,char symbol);

using namespace std;
int conformation(){
    int conformation;
    cout<<"IS THE GIVEN INFORMATION CORRECT"<<endl;
    cout<<"PRESS 1 TO CONTINUE "<<endl;
    cout<<"PRESS 2 TO RENTER INFORMATION "<<endl;
    cin>>conformation;
    if (conformation==1)
    {
        return 0;
    }
    else if (conformation==2)
    {
        return 1;
    }
    else{
    return 3;
    }
    
}
void cls(){
    system("cls");
}
void error(){
    cout<<"OOPS!! wrong data entered:("<<endl;
    cout<<"TRY AGAIN";
    loading("",3,1,'.');

    return;
}
void line(int a){
    cout<<setw(a)<<setfill('-')<<'-';
    //cout<<setw(' ');
    cout<<endl;
    cout<<flush;
    return;
}
void linewithoutendl(int a){
    cout<<setw(a)<<setfill('-')<<'-';
    //cout<<setw(' ');
    cout<<flush;
    return;

}
void next_line(int a){
    for (int i = 0; i < a; i++)
    {
        cout<<endl;
    }
    return;
}
void loading(const char* str,int iteration,int time,char symbol){
    cout<<str;
    for (int i = 0; i < iteration; i++)
    {
        cout<<symbol;
        sleep(time);
    }
    
    return;
}

#endif