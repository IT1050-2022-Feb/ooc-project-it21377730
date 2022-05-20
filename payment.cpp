#include <iostream>
using namespace std;
#include<cstring>

class Payment
{
private:
	int payment_id;
	char payment_type[20];
	double payment_amount;
	int card_number;
	char card_type;
public:
	Payment();
	Payment(int pay_id, const char  pay_type[], double pay_amount);  
	void check_Payment();
	void confirm_Payment();
	void displayPayment_Details();
	~Payment();
};

Payment::Payment()
{
        
}
Payment::Payment(int pay_id, const char  pay_type[], double pay_amount)  
{
	payment_id = pay_id;
	strcpy(payment_type, pay_type );
	payment_amount = pay_amount;
}
void displayPayment_Details()
{
  cout<< "Payment ID :"<< payment_id<<endl;
  cout<< "payment type:"<< payment_type<<endl;
  cout<< "paymentamount :"<< payment_amount<<endl;
}
void Payment::check_Payment()
{
	
}
void Payment::confirm_Payment()
{
	
}
void Payment::displayPayment_Details()
{
	
}
Payment::~Payment()
{

}
int main(){
	
	
	Payment *p1 = new Payment(1010,"visa",121212);
  Payment *p2 = new Payment(1015,"visa",558788);

  p1-> displayPayment_Details();
		
		 return 0;
		
		}
