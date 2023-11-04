#ifndef file_printer
#define file_printer
#include<iostream>
#include<iomanip>
#include<windows.h>
#include<unistd.h>
#include <stdio.h>
#include<string.h>
#include"create_and_login.h"
#include"submain1.h"
#include"required_function.h"
//#include"global_variable.h"
#include<iomanip>
#include<windows.h>
#include<unistd.h>
#include"required_function.h"
using namespace std;
void vehicle_info_printer(string vehicle_info_from_other_file){
    FILE*vehicle_information;
    vehicle_information=fopen("vehicleinformation.txt","w");
    fprintf(vehicle_information,"%s", vehicle_info_from_other_file.c_str());
    fclose(vehicle_information);
}


void service_printer(string service_from_other_file){
    FILE* service;
    service=fopen("service.txt","w");
    fprintf(service,"%s",service_from_other_file.c_str());
    fclose(service);
}
void service__bill(int service_bill){
    FILE* servicebill;
    servicebill=fopen("service_bill.txt","w");
    fprintf(servicebill,"\t\t\t");
    fprintf(servicebill,"%d",service_bill);
    fclose(servicebill);
}
// void final_amount(){
//     linewithoutendl(40);
//     cout<<"FINAL BILL"<<endl;
//     line(40);
//     cout<<"COMPANY"<<company<<endl;
//     cout<<"MODEL NAME"<<model_name<<endl;
//     cout<<"VEHICLE NUMBER"<<vehicle_number<<endl;
//     cout<<"MEMBER SHIP :";
//     line(90);
//     next_line(3);


// }
#endif