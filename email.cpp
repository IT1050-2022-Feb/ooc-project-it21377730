//email.h
class email{
private:
char sender;
char massege_contant;
char reception;	
public:
void view_email();
void send_email();
};
 
 
//email.cpp
 
void email::view_email(){

}
void email::send_email() {

}
 
//main
#include <iostream>
#include "email.h"
 
 
int main() {
email* e1,e2;

e1=new email;
e2=new email;

e1->view_email();
e2->view_email();

e1->send_email();
e2-> send_email();

delete e1,e2
}
