#include<iostream>

using namespace std;

class mother{
	
	public:
		
		 void display (){
		 
		     cout<<"MOTHER : The low of the house , who run the whole the whole house . Moreover , she took all responsibilities on her self and make all other family member comfortable ."<<endl<<endl;
		     
			 
		 }
	
};
class daugther : public mother{
	
	public:
		
		 void display (){
		 	 
		 	 cout<<"DAUGHTER : Whenever any girl born in an family , she make that family more valuable and vulnerable . Most important , she make bring some kind of happiness ."<<endl;
		
		 }
		 
};

int main(){

	daugther obj;
	
	obj.mother::display();
	obj.daugther::display();
	
	return 0;
}
