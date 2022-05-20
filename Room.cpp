#include <cstring>
#include <iostream>
using namespace std;

class Room{
private:
int room_id;
double room_price;
char room_type[10];

public:
Room(); 
Room(int rID, double rPrice, char rType[]);
void update_room();
void store_roomdetails(int rID, double rPrice, char rType[]);
char get roomdetails();
void display_room();

};
		
		
		int main (){
			
			Room Rooms[];
		 
		 cout<<"Enter room ID:"<<endl;
		 cin>>room_id<<endl;
		 cout<<"Enter room price"<<endl;
		 cin>>room_price<<endl;
		 cout<<"Enter room type:"<<endl;
		 cin>>room_type<<endl;
		  
		 
		 Room1.setroomdetails(room_id,room_price,room_type);
		 
		cout<<"Room details are :"<< room1.getroomdetails()<<endl;
		
		 Room2.setroomdetails(room_id,room_price,room_type);
		 
		cout<<"Room details are :"<< room2.getroomdetails()<<endl;
	    
		 Room3.setroomdetails(room_id,room_price,room_type);
		
	    cout<<"Room details are :"<< room3.getroomdetails()<<endl;
  
  return 0;
}
