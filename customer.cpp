#include <iostream>
#include <cstring>
using namespace std;
 Class customer{
 
 private:
       char customer_id;
	   char customer_name;
	   char customer_password;
	   char customer_email;
	   char customer_address;
	   char customer_contactnumber;
	   
	   public:
	   	customer();
	   customer(char c_name, char c_email,char c_address, char c_number);
	   void setcustomerDetails (char c_name, char c_email,char c_address, int c_number);
	   char getcustomerDetails();
	   void assigncustomer_id (char c_id);
	   void assigncustomer_password(char c_password);}
	   
	   
	   
	   #include<iostream>
	   #include <cstring>
	    using namespace std;
		
		
		int main{
			
		customer customers[];
		 
		 cout<<"Enter name:"<<endl;
		 cin>>customer_name<<endl;
		 cout<<"Enter email address"<<endl;
		 cin>>customer_email<<endl;
		 cout<<"Enter contact number:"<<endl;
		 cin>>customer_contactnumber<<endl;
		  cout<<"Enter address" <<endl;
		 cin>>customer_address<<endl;
		 
		 cus1.setcustomerDetails(customer_name,customer_email, customer_contactnumber,customer_address);
		 cus1.assigncustomer_id (char c_id);
	     cus1.assigncustomer_password(char c_password);
		cout<<"customer details are :"<< cus1.getcustomerDetails()<<endl ;
		
		 cus2.setcustomerDetails(customer_name,customer_email, customer_contactnumber,customer_address);
		 cus2.assigncustomer_id (char c_id);
		 
	     cus2.assigncustomer_password(char c_password);
	     cout<<"enter customer id and password:"<<endl;
	     cin>> customer_id>>customer_password<<endl;
		cout<<"customer details are :"<< cus2.getcustomerDetails()<<endl;
		
		
		}
	   