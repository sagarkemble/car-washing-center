#ifndef upi_
#define upi_

#include"standard_library.h"
#include"userdefined_header.h"
using namespace std;
extern int upiflag;    
extern int login_flag;
void upi(){
    int input;//takes input of upi
    int upiconforamtion;//takes input of upi recive conformation
    loading("LOADING",3,1,'.');
    cls();
    cout<<"PRESS 1 TO PAY VIA UPI "<<endl;
    cout<<"PRESS 2 TO QUIT"<<endl;
    cin>>input;
    cls();
    if(input==1){
        loading("LOADING UPI INFORMATION",3,1,'.');
        cls();
        cout<<"PAY ON FOLLOWING NUMBER : 1324567891"<<endl;
    cout<<"PRESS 1 IF PAYMENT IS SUCESSFULLY COMPLETED "<<endl;
    cout<<"PRESS 2 IF PAYMENT FAILED"<<endl;
    cin>>upiconforamtion;
    cls();
    if (upiconforamtion==1)
    {
        cls();
        loading("CONNECTING TO SERVER",3,1,'.');
        cls();
        loading("VALIDATING PAYMENT",2,1,'.');
        cls();
        cout<<"PAYMENT SUCCESFULLY RECIVED:)";
        next_line(1);
        upiflag=1;
        loading("LOADING",3,1,'.');
        return;
    }
    else{
        error();
        upiflag=0;
        return;
    }
    

    }
    else{
        return;
    }
    

}
#endif