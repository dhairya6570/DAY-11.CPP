#include<iostream>

using namespace std;

class School{
	
	private :
		
		char name[50];
		int std;
		char address[100];
		int pincode;
		
	public:
		
		void set1(){
			
			cout<<"School name :";
			cin>>name;
			
			cout<<"School std :";
			cin>>std;
			
			cout<<"School address :";
			cin>>address;
			
			cout<<"address pincode :";
			cin>>pincode;
			
		}
};

class  Collage{
	
	private :
		
		char name[50];
		char semester[20];
		char address[100];
		int pincode;
		
	public:
		
		void set2(){
			
			cout<<"Collage name :";
			cin>>name;
			
			cout<<"Collage std :";
			cin>>semester;
			
			cout<<"Collage address :";
			cin>>address;
			
			cout<<"address pincode :";
			cin>>pincode;
			
		}
		 
};
class Student : public School , public Collage{
 
   public :
   	
   	    void s_Data(){
   	 	
   	 	cout<<"I am study in college"<<endl;
		} 
	
};


int main(){

Student obj;

		obj.set1();
		obj.set2();
		obj.s_Data();
	
	return 0;
}
