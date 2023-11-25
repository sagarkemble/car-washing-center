#ifndef billprinter
#define billprinter
#include"standard_library.h"
#include"userdefined_header.h"
#include"upi.h"
using namespace std;
extern void upi();
void bill_printer(){
line(50);
cout<<"CAR INFORMATION"<<endl;
next_line(1);
cout<<"COMPANY:"<<company<<endl;
cout<<"MODEL NAME:"<<model_name<<endl;
cout<<"VECHICLE NUMBER:"<<vehicle_number<<endl;
line(50);
next_line(1);
if (login_flag==1)
{
    cout<<"MEMBERSHIP:APPLIED"<<endl;
}
else
{
    cout<<"MEMBERSHIP:N/A"<<endl;

}
next_line(1); 
cout<<"SERVICE SELECTED:"<<selected_service<<endl;
line(50);
next_line(1);
if (login_flag==1)
{
    int total=service_bill-(service_bill*30)/100;
    cout<<setfill(' ');
    cout<<setw(40)<<left<<"SERVICE COST:"<<right<<service_bill<<endl;
    cout<<setw(39)<<left<<"MEMBER SHIP DISCOUNT"<<right<<"-"<<(service_bill*30)/100<<endl;
    line(50);
    cout<<setfill(' ');
    cout<<setw(40)<<left<<"TOTAL:"<<right<<total<<endl;
    line(50);
    next_line(2);
}
else{
        cout<<setw(40)<<left<<"SERVICE COST:"<<right<<service_bill<<endl;
}
cout<<"PRESS ENTER TO CONTINUE PAYMENT";
getchar();

cls();
upi();
cls();
cout<<"YOU CAR WILL BE READY IN 2 HRS "<<endl;
cout<<"THANKYOU FOR VISITING:)"<<endl;
cout<<"A CODE BY SAGAR KEMBLE:)";
sleep(5);



}
#endif
