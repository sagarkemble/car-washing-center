#ifndef submain
#define submain

//standard lib
#include"standard_library.h"

//user defined lib
#include"global_variable.h"
#include"create_and_login.h"
#include"file_printer.h"
#include"required_function.h"
#include"bill_printer.h"



extern void bill_printer();
extern void LOGIN();
//function decleration
int submain_1();//entery point 
void first();//first ui for choosing type of vehicle
void second();//second ui for details of vehicle
void third();//third ui for selection of service
void fourth();//fourth ui is for conforming from user if he has membership
void fifth();//fifth ui for redeeming membership
void membership_checker();

//global variable
int type_of_vehicle;//recives inout for type of vehicle

int submain_1(){
    first();


    return 0;
}
void first(){
    linewithoutendl(20);
    cout<<"CHOOSE TYPE VECHICLE ";
    line(20);
    cout<<"1 FOR 2 WHEELER"<<endl;
    cout<<"2 FOR CAR"<<endl;
    cout<<"3 FOR TRUCK"<<endl;
    cin>>type_of_vehicle;
    cls();
    if (type_of_vehicle==1||type_of_vehicle==2||type_of_vehicle==3)
    {
        second();
    }
    else{
        error();
        next_line(1);

    }
    return;
}
void second(){
    //local variable
    string space=" ";//adding space

    linewithoutendl(20);
    cout<<"ENTER THE DETAILS CAREFULLY WITOUT MISTAKE";
    line(20);
    cout<<"ENTER COMPANY OF VEHICLE"<<endl;
    getchar();//clear buffer
    getline(cin,company);
    cout<<"ENTER MODEL NAME OF VEHICLE"<<endl;
    getline(cin,model_name);
    cout<<"ENTER VEHICLE NUMBER"<<endl;
    getline(cin,vehicle_number);
    
    cls();
    cout<<"ENTERED VEHICLE INFO"<<endl<<company<<'|'<<space<<model_name<<'|'<<space<<'|'<<vehicle_number<<endl;
    int signal=conformation();//conforms given inforamtion is true
    if (signal==0)
    {
        // vehicle_info_printer(vehicle_information);//prints vehicle info into text file
        vehicle_information=company+space+model_name+space+vehicle_number;
        cls();
        third();
    }
    else if(signal==1){
        cls();
        return;
    }
    else{
        error();
    }
    cls();
    return;
}
void third(){
    int service;//resevices input about user services choice

    linewithoutendl(20);
    cout<<"SELECT THE SERVICE YOU WANT";
    line(20);
    cout<<"1 FOR EXTERIOR WASH"<<"-------"<<type_of_vehicle*500<<endl;
    cout<<"2 FOR INTERIOR CLENING"<<"-------"<<type_of_vehicle*200<<endl;
    cout<<"3 FOR FULL VEHICLE CLEANING AND WASHING"<<"-------"<<type_of_vehicle*800<<endl;
    cin>>service;
    cls();
    if (service==1||service==2||service==3)
    {
        switch (service)
        {
        case 1:
            selected_service="EXTERIOR WASH";//STORES USER SELECTED SERVICE TO GLOBAL VARIBLE FROM HEADER FILE
            break;
        case 2:
            selected_service="INTERIOR CLEANING";//STORES USER SELECTED SERVICE TO GLOBAL VARIBLE FROM HEADER FILE
        case 3:
            selected_service="FULL CAR CLEANING AND WASHING";//STORES USER SELECTED SERVICE TO GLOBAL VARIBLE FROM HEADER FILE
        default:
            break;
        }
    }
    else{
        cls();
        error();
        return;
    }
    if (service==1||service==2||service==3)//prints the amount to file
    {
        switch (service)//switch case for writing the amount of bill to the global variable service bill decleared in globla variable .h
        {
        case 1:
            service_bill=type_of_vehicle*500;

            break;
        case 2:
            service_bill=type_of_vehicle*200;
            break;
        case 3:
            service_bill=type_of_vehicle*800;
            break;
        default:
            break;
        }
    }
    else{
        cls();
        error();
        return;
    }
    cout<<"SELECETED SERVICE"<<endl;
    cout<<vehicle_information<<endl<<"SERVICE: "<<selected_service<<endl<<"TOTAL BILL:"<<service_bill<<endl;//prints the selected services
    loading("LOADING",2,1,'.');
    cls();
    fourth();
    return;
}
void fourth(){//billing mode
    int input;
    linewithoutendl(20);
    cout<<"DO YOU HAVE MEMBERSHIP";
    line(20);
    cout<<"PRESS 1 IF YOU HAVE MEMBERSHIP"<<endl;
    cout<<"PRESS 2 TO CONTINUE BILLING WITHOUT MEMBERSHIP"<<endl;
    cout<<"PRESS 3 TO RETURN TO HOME SCREEN TO BUY MEMEBESHIP "<<endl;
    cout<<"PRESS 4 TO EXIT "<<endl;
    cin>>input;
    cls();
    if (input==1||input==2||input==3||input==4)
    {
        switch (input)
        {
        case 1:
            fifth();
            break;
        case 2:
            bill_printer();
            break;
        case 3:
            return;
            break;
        case 4:
            return;
            break;
        
        default:
            break;
        }
    }
    
    return;

}
void fifth(){
    LOGIN();
    cls();
    if (login_flag==1)
    {
        bill_printer();
        return;
    }
    
    else if (login_flag==0)
    {
        error();
        cls();
        return;
    }
}
#endif