#ifndef CREATEORQWERY
#define CREATEORQWERY

#include"submain1.h"
#include"file_printer.h"
#include"required_function.h"
#include"standard_library.h"
#include"upi.h"
//#include"global_variable.h"
//#include"header.h"


//functions
extern void cls();//clear screen
extern int login_flag;
void verifierid(FILE*);
void verifierp(FILE*);
void verifiere(FILE*);
void verifierep(FILE*);
void verifierloginid(FILE*);
void verifierloginp(FILE*);
void login();

void create();
void forgotip();
//functions


//variables//
FILE *id;//FILE POINTER
FILE *password;//FILE POINTER
FILE *email;
FILE *epassword;
int a=0;
int a2=0;
int a3=0;
int in;//stores user entered number
char fid[100];//stores email id from file
char uid[100];//stores input email id
char fp[100];//stores  passsword from fle
char up[100];//stores input password
char ue[50];
char uep[50];
char fe[50];
char fep[50];
int vse;//
int vsep;
int vsi;//recives verifier signal of id
int vsp;//recives verifier signal of password
//varibales
void createorqwery(){
//int main (){
    id=fopen("id.txt","a+");
    password=fopen("password.txt","a+");
    epassword=fopen("epassword.txt","a+");
    email=fopen("email.txt","a+");
    if (id==NULL||password==NULL||email==NULL||epassword==NULL)
    {
        printf("unable to open file sorry :(\na code by sagar\n");
        fclose(id);
        fclose(password);
        fclose(email);
        fclose(epassword);
        return ;
    }
    fclose(password);
    fclose(id);
    fclose(email);
    fclose(epassword);
    printf("--------BUY MEMBERSHIP--------\n");
    printf("PRESS 1 TO BUY MEMBERSHIP\nPRESS 2 IF YOU FORGOT YOUR ID\\PASSWORD OF MEMBERSHIP\n");
    scanf("%d",&in);
    getchar();
    cls();
    if (in==1)
    {
        create();
    }
    else if (in==2)
    {
        forgotip();
    }
    else{
        error();
    }
    cls();
    
    return ;
}
void create(){
    id=fopen("id.txt","a+");
    password=fopen("password.txt","a+");
    epassword=fopen("epassword.txt","a+");
    email=fopen("email.txt","a+");
    printf("SELECTED MOD: CREATE ACCOUNT\n");
    printf("ENTER USER ID ::");
    fgets(uid,50,stdin);
    verifierid(id);
    if (vsi==1)
    {
        printf("THE ID YOU ENTERED EXISTS TRY ENTERING DIFFERENT ID\n");
        loading("PLEASE TRY AGAIN IN FEW MOMENT",5,1,'.');
        cls();
        fclose(id);
        fclose(password);
        fclose(email);
        fclose(epassword);
        return;

    }
    if (vsi==0)
    {
     //   
    }
    printf("ENTER A PASSWORD::");
    fgets(up,50,stdin);
    verifierp(password);
    if (vsp==1)
    {
        printf("THE PASSWORD YOU ENTERED EXISTS TRY ENTERING DIFFERENT PASSWORD\n");
        loading("PLEASE TRY AGAIN IN FEW MOMENT",5,1,'.');
        cls();
        fclose(id);
        fclose(password);
        fclose(email);
        fclose(epassword);
        return;

    }
    if (vsp==0)
    {
        //
        
    }
    printf("ENTER YOUR EMAIL(INCLUDE@gmail.com IN LOWER CASE / SMALL LETTERS)\n");
    fgets(ue,50,stdin);
    char gmail[50];

    strcpy(gmail,ue);
    char tofind[]="@gmail.com";
    if (!strstr(gmail,tofind))
    {
        printf("INCLUDE \"@gamil.com(IN LOWER CASE / SmAILL LETTERS\"\n");
        loading("PLEASE TRY AGAIN IN FEW MOMENT",5,1,'.');
        cls();
        return;
    }
    
    verifiere(email);
    if (vse==1)
    {
        printf("THE EMAIL YOU ENTERED EXISTS \n");
        loading("PLEASE TRY AGAIN IN FEW MOMENT",5,1,'.');
        cls();
        fclose(id);
        fclose(password);
        fclose(email);
        fclose(epassword);
        return;

    }
    if (vsp==0)
    {
        //
        
    }
    printf("ENTER A SECURITY CODE IN CASE YOU FORGET ID OR PASSWORD FOR RECOVERY\n");
    fgets(uep,50,stdin);
    verifierep(epassword);
    cls();
    if (vsep==1)
    {
        printf("THE SECURITY CODE YOU ENTERED EXISTS TRY ENTERING DIFFERENT\n");
        loading("PLEASE TRY AGAIN IN FEW MOMENT",5,1,'.');
        cls();
        fclose(id);
        fclose(password);
        fclose(email);
        fclose(epassword);
        return;

    }
    if (vsep==0)
    {
        //
        
    }
    int conformation;
    linewithoutendl(20);
    cout<<"ABOUT MEMBER SHIP";
    line(20);
    cout<<"COST :"<<"5000"<<endl;
    cout<<"VALITDITY:"<<"1 YEAR "<<endl;
    cout<<"FEATURES:"<<"30 PERCENT DISCOUNT ON EVERY VECHICLE WASH"<<endl;
    cout<<"PRESS 1 TO PURCHASE MEMBERSHIP"<<endl<<"PRESS 2 TO RETURN TO HOME SCREEN "<<endl;
    cin>>conformation;
    cls();
    if (conformation==1)
    {
    
        upi();
    if (upiflag==1)
    {
        //
    }
    else{
        return;
    }
    

    }
    else{
        error();
        return;
    }

    if (vsp==0 && vsi==0&&vse==0&&vsep==0)
    {
        fprintf(password,"%s",up);
        fprintf(id,"%s",uid);
        fprintf(email,"%s",ue);
        fprintf(epassword,"%s",uep);
    printf("\n");
        printf("ID AND PASSSWORD CREATED SUCCESFULLY AND MEMBERSHIP ADDED TO YOUR ID:)");
        cout<<"ID:"<<uid<<endl<<"PASSWORD"<<up<<endl;
        cout<<"RECOVERY EMAIL"<<ue<<endl<<"SECURITY CODE"<<uep<<endl;
        loading("",4,1,'.');
        cls();
    }
    fclose(id);
    fclose(password);
    fclose(email);
    fclose(epassword);
    return;
}
void forgotip(){
    id=fopen("id.txt","a+");
    password=fopen("password.txt","a+");
    epassword=fopen("epassword.txt","a+");
    email=fopen("email.txt","a+");

    printf("ENTER YOUR EMAIL ADRESS\n");
    fgets(ue,50,stdin);
    verifiere(email);
    cls();
    if (vse==1)
    {
        //
    }
    if (vse==0)
    {
        printf("YOU ENTERED WRONG EMAIL OR EMAIL DOESENT EXISTS;(");
        loading("PLEASE TRY AGAIN IN FEW MOMENT",5,1,'.');
        cls();
        return;
    }
    printf("ENTER YOUR SECURITY PIN\n");
    fgets(uep,50,stdin);
    cls();
    verifierep(epassword);
    if (vsep==1)
    {
    //
    }
    if (vsep==0)
    {
        printf("YOU ENTERED WRONG SECURITY PIN:(");
        loading("PLEASE TRY AGAIN IN FEW MOMENT",5,1,'.');
        cls();
        return;
    }
    if (vsep==1&&vse==1)
    {
        for (int i = 1; i <= a3; i++)
        {
            fgets(fid,50,id);
            if (i==a3)
            {
                printf("ID AND PASSWORD TO PROVIDED EMAIL AND SECURITY PIN IS\n");
                printf("ID::");
                printf("%s",fid);
            }
            
        }




        for (int i = 1; i <= a3; i++)
        {
            fgets(fp,50,password);
            if (i==a3)
            {
                printf("PASSWORD::");
                printf("%s",fp);
            }
            
        }
        loading("VIEW IT QUICKLY IT WILL ERASE IN FEW MOMENT",5,1,'.');
        cls();
    }
    
    
    



}
void verifierid(FILE*id){
    rewind(id);
    while (1)
    {
        
        
        fgets(fid,50,id);
        if (strcmp(uid,fid)==0)
        {
            vsi=1;
            break;

        }
        if (feof(id))
        {
            vsi=0;
            break;
        }
        
        
    }
    
    return;
}
void verifierp(FILE*password){
    rewind(password);
    while (1)
    {
        fgets(fep,50,password);
        if (strcmp(up,fp)==0)
        {
            vsp=1;
            break;

        }
        if (feof(password))
        {
            vsp=0;
            break;
        }
        
        
    }

    
    
    return;

    }
void verifiere(FILE*email){
    rewind(email);
    while (1)
    {
        
        a3++;
        fgets(fe,50,email);
        if (strcmp(ue,fe)==0)
        {
            vse=1;
            break;

        }
        if (feof(email))
        {
            vse=0;
            break;
        }
        
        
    }
    
    return;
}
void verifierep(FILE*epassword){
    rewind(epassword);
    while (1)
    {
        fgets(fep,50,epassword);
        if (strcmp(uep,fep)==0)
        {
            
            vsep=1;
            break;

        }
        if (feof(epassword))
        {
            
            vsep=0;
            break;
        }
        
        
    }

    
    return;

    }
void LOGIN(){

    id=fopen("id.txt","a+");
    password=fopen("password.txt","a+");
    epassword=fopen("epassword.txt","a+");
    email=fopen("email.txt","a+");
    if (id==NULL||password==NULL||email==NULL||epassword==NULL)
    {
        printf("unable to open file sorry :(\na code by sagar\n");
        fclose(id);
        fclose(password);
        fclose(email);
        fclose(epassword);
        return ;
    }
    fclose(password);
    fclose(id);
    fclose(email);
    fclose(epassword);
    
    
        login();
    
    return ;
}
void login(){
    id=fopen("id.txt","r");
    password=fopen("password.txt","r");
    rewind(id);
    rewind(password);
    getchar();//to clear buffer
    printf("SELECTED MODE :: LOGIN\n");
    printf("ENTER YOUR ID\n");
    fgets(uid,50,stdin);
    verifierloginid(id);
    cls();
    if (vsi==1)
    {
        //
    }
    if (vsi==0)
    {
        printf("YOU ENTERED WRONG ID OR ID MIGHT NOT EXISTS:(\n");
        login_flag=0;
        return;
    }
    printf("ENTER YOUR PASSWORD\n");
    fgets(up,50,stdin);
    verifierloginp(password);
    cls();
    if (vsp==1)
    {
        printf("YOU SUCCESSFULLTY LOGGED IN WITH MEMEBER SHIP\n");
        login_flag=1;
        loading("loading",2,1,'.');
        return;
    }
    if (vsp==0)
    {
        printf("YOU ENTERED WRONG PASSWORD:(\n");
        login_flag=0;
        return;
    }
    
    
}
void verifierloginid(FILE*id){
    rewind(id);
    while (1)
    {
        a++;
        
        
        fgets(fid,50,id);
        if (strcmp(uid,fid)==0)
        {
            vsi=1;
            break;

        }
        if (feof(id))
        {
            vsi=0;
            break;
        }
        
        
    }
    
    return;
};
void verifierloginp(FILE*password){
    rewind(password);
    while(1)
    {
        a2++;
        
        fgets(fp,50,password);
        if (a2==a)
            {if (strcmp(up,fp)==0)
        {
                vsp=1;
                break;
            }
            else{
                break;
            }
            }
        if (feof(password))
        {
         vsp=0;
         break;
            
        }
        
        
    }

    
    return;
};

#endif

