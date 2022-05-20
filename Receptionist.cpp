#include <iostream>
#include <string.h>
 using namespace std;
 
 class Receptionist{
 	private:
 		int Receptionist_id;
 		char receptionist_name[20];
 		char password[10];
 	
 	public:
 		Receptionist();
 		Receptionist(int R_id,const char R_name[],const char r_password[]);
 		void Display_details();
 		void respond_email();
 		
 };
 
 Receptionist::Receptionist()
 {
    Receptionist_id=0;
    strcpy(receptionist_name,"");
    strcpy(password,"");
    
 }
 
 Receptionist::Receptionist(int R_id,const char R_name[],const char R_password[])
 {
 	Receptionist_id=R_id;
    strcpy(receptionist_name,R_name);
    strcpy(password,R_password);
 }
 
 void Receptionist::Display_details()
 {
 	cout<<"Receptionist ID :"<<Receptionist_id<<endl;
 	cout<<"Receptionist Name :"<<receptionist_name<<endl;
 	cout<<"Password :"<<password<<endl;
 }
 
 int main()
 {
 	Receptionist  r1(1001,"ABC","ab1");
 	r1.Display_details();
 }