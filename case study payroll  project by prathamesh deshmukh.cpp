/* NAME : PRATHAMESH SUNIL DESHMUKH
   ROLL NO :  20141219  
   SECOND YEAR INFO . TECH 
   */

 #include<iostream>
#include<iomanip>
#include<string.h>
using namespace std ;

class payroll {

private :

string name ;

int days_work ;
float rate ;
float   base_salary ;



public : 

float in_hand ;

float hra ;

float da ;
float pf ;


int get_info() ;
void displayinfo();


};


int payroll :: get_info()
{
   string k ;
   string password ;
   cout<<endl ;

    cout<<" Payroll system in c++ using polymorphism"<<endl ;
    
    cout<<"enter employees name  :"<<endl ;
    
    getline(cin,name );
     cout<<"enter employees log in id :"<<endl ;
      cin>>k ;
      
      cout<<"enter employees password:"<<endl ;
        cin>>password ; 
        
    //     cout<<"logged in succsfully" <<endl ;
        
    cout<<"enter no of days worked : "<<endl ;
      
     cin>>days_work ;   
    
    cout<<"enter daily rate  :"<<endl;
     cin>>rate ;
    
    cout<<fixed<<setprecision(2) ;
     
    base_salary  = (days_work*rate );
   
   hra  = (0.30*base_salary) ;
   da = (0.10*base_salary)  ; 
   pf = (0.15*base_salary) ;
cout<<fixed<<setprecision(2) ;
    in_hand = base_salary  + hra + da - pf ;
    
}
void payroll:: displayinfo()
    {
    
    cout<<"          * DETAILED SALARY SLIP *       " <<endl ;
    
    cout<<"             Employees Name   : "<< name << endl ;
    
   cout<< "             THIS IS YOUR BASE SALARY : "<< base_salary <<endl  ;
     
       cout<< "          THIS IS YOUR HOUSE RENT ALLOWANCE  : "<< hra <<endl  ;

        
        
       cout<< "           THIS IS YOUR DEARNESS ALLOWANCE   : "<< da <<endl  ;

        
       cout<< "           THIS IS AMOUNT  IS DEDUCTION FOR THE PROVIDENT FUND   : "<< pf<<endl   ;

       cout<< "            THIS IS YOUR  FINAL IN HAND SALARY   : "<< in_hand<<endl;

    }
    
    int main ()
    {
    
    payroll  emp ;
    
    emp.get_info() ;
    emp.displayinfo();
    
    
    return 0 ;
    }