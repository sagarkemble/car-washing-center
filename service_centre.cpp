#include"userdefined_header.h"//header file "header.h" includes all the headerfiles
#include"standard_library.h"//includes standard library


using namespace std; 
void welcome_screen();//welcome screen
void main1();//flow control function//junction function
void submain1();//function for services of washing center 
void submain2();//function to create memberhip
void submain3();//funtion for about member ship
void submain4();//about developer
int input_of_main1;//input variable of main1 function


int main(){ 
    cls();          
    welcome_screen();//function of control flow
    while(1){
    
    main1();
    if(input_of_main1==5){
        break;
    }
    }
    return 0;
}



void welcome_screen(){

    linewithoutendl(38);
    cout<<"VEHICLE WASHING CENTER ";
    line(39);
    next_line(3);
    cout<<setw(87)<<"WELCOME TO VEHICLE WASHING CENTRE WHERE YOU WILL GET A STATISFIED SERVICES"<<endl;
    cout<<setw(61.5)<<right<<"PRESS ENTER TO CONTINUE";
    line(39);
    line(100);
    getchar();
    cls();



    loading("loading application",5,1,'.');
    cls();
    cout<<"\"GET READY TO EXPERIENCE THE SHINE OF YOUR VEHICLE\"";
    loading("",3,1,'.');
    next_line(1);
    cls();
    cout<<"LETS GO";
    loading("",1,2,'.');
    cls();
    return;
    
}
void main1(){
    line(56);
    //stores the input of main1 function
    cout<<"PRESS FOLLOWING NUMEBR ACCORDIN TO SERVICE YOU NEED :)"<<endl;
    cout<<"1 FOR SERVICES OF WASHING CENTER"<<endl;
    cout<<"2 FOR PURCHASING MEMBERSHIP OR QWERY ABOUT MEMBERSHIP"<<endl;
    cout<<"3 FOR MORE INFORMATION ABOUT MEMBERSHIP"<<endl;
    cout<<"4 FOR TO KNOW DEVELOPERS"<<endl;
    cout<<"5 TO QUIT"<<endl;
    cout<<"USER INPUT:";
    cin>>input_of_main1;
    cls();
    if (input_of_main1<=5)
    {
        switch (input_of_main1)
        {
        case 1:
            submain1();
            break;
        case 2:
            submain2();
            break;
        case 3:
            submain3();
            break;
        case 4:
            submain4();
            case 5:
        return;
        default:
            break;
        }
    }
else{
error();
cls();
}
    return;
}
void submain1(){//features of washing center
    submain_1();//function from submain.h header file 
    return;
}
void submain2(){//create membership

    createorqwery();//function frrom create_and_login header file
    return;
}
void submain3(){//about membership
    line(80);
    cout<<"OUR WASHING CENTER HAS A MEMBERSHIP PLAN FOR A YEAR";
    loading("",3,1,'.');
    next_line(1);
    cout<<"YOU MIGHT WONDER MEMBER SHIP? BUT WHY";
    loading("",5,1,'?');
    next_line(1);
    cout<<"OUR MEMBERSHIP OFFER GREAT DISCOUNT ON WASHING SERVICES DEPENDING IF YOU OWNN A MEMBERSHIP"<<endl;
    cout<<"PRESS ENTER TO CONTIUNE";
    getchar();
    getchar();
    cls();

    return;
}
void submain4(){//about developer
    cout<<"I AM SAGAR KEMBLE DEVELOPER OF THIS PROGRAM :)";
    next_line(1);
    cout<<"PRESS ENTER TO CONTIUNE";
    getchar();
    getchar();
    cls();

    return;
}

