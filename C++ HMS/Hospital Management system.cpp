////////////////////////////HOSPITAL MANAGEMENT SYSTEM////////////////////////////

#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

class B{
	
	//NOTE: RUN THE PROGRAM ON SCREEN ONLY
	public:
	
	
	void display(){
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t|                         WELCOME TO                              |\n";
cout<<"\t\t\t\t\t\t|                HOSPITAL MANAGEMENT SYSTEM                       |\n";
cout<<"\t\t\t\t\t\t|                                                                 |\n";
cout<<"\t\t\t\t\t\t|                                                                 |\n";
cout<<"\t\t\t\t\t\t|                                                                 |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";

	}
	};

/////////////////////////////////LOGIN ACCOUNT/////////////////////////	
	
	
class C{
	
	private:
	string password="essay";
	string userName="Razaque";
	
	
	
	public:
	int i;
	string userNameAttempt;
	string passwordAttempt;
	string emailAttempt;
	string ageAttempt;
	
	/////////////////////////////CHOICE//////////////////
	   void choice(){

		
		cout<<"\n\t\t\t\t\t**************LOGIN ACCOUNT*****************\n";
		cout<<"\t\t\t\t\t1 << Login"<<endl;
		cout<<"\t\t\t\t\t2 << Registeration"<<endl;
	a:cout<<"\t\t\t\t\t\tEnter your choice: ";
        cin>>i;
        if(i>2||i<1){
        cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";
        cout<<"\t\t\t\t\t\tTry again...........\n\n";goto a;}
		 //if inputed choice is other than given choice
	}
	///////////////////////////REGISTION/////////////////////////////
	
	       void  registerAccount(){
       	
		cout<<"\t\t\t\t\tEnter UserName:";
		cin>>userNameAttempt;
		cout<<"\t\t\t\t\tEnter Password:";
		cin>>passwordAttempt;
		cout<<"\t\t\t\t\tEnter Email:";
		cin>>emailAttempt;
		cout<<"\t\t\t\t\tEnter Age:";
		cin>>ageAttempt;
		cout<<"\t\t\t\t\t\t\t\t\tYour Registeration Is Successfull\n\n\t\t\t\t\t\t\t\t\tNow You can Login it\n:";
		
    }
    
    /////////////////////////////////////LOGIN///////////////////////////////////
    	void login(){
	
		cout<<"\t\t\t\t\tEnter userName:";
		cin>>userNameAttempt;
		
	if(userNameAttempt == userName){
		cout<<"\t\t\t\t\tEnter Password :";
		cin>>passwordAttempt;
		if(passwordAttempt == password){
		
		      
		
		} 
		else {
			
			cout<<" entered password is wrong? "<<endl;
			login();
		}
		
		
	}
		else{
		cout<<userNameAttempt<<" is not Right:\n";
		login();
	}
	}
	
	
};
	
/////////////////////////////////////////////ENTER IN TH SYSTEM///////////////////	
	
class D{
	
 	public:
 		char all[999];
 	string	sal[12],pos[15];
 	string name[15];
 	string staff;
	 string time[15];
	string doctor[15];
	string blood;
	int num,age;
	int i;
		void show(){
		
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";	
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t|             1  >> Available Doctor Information                  |\n";
cout<<"\t\t\t\t\t\t|             2  >> For Doctor Appointment                        |\n";
cout<<"\t\t\t\t\t\t|             3  >> For Checking Patient Appointment Menu:        |\n";
cout<<"\t\t\t\t\t\t|             4  >> For Saving Staff Information                  |\n";
cout<<"\t\t\t\t\t\t|             5  >> For Checking Staff Information:               |\n";
cout<<"\t\t\t\t\t\t|             6  >> Exit the Program                              |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";

a:cout<<"\t\t\t\t\t\tEnter your choice: ";
cin>>i;
if(i>6||i<1){
cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";
cout<<"\t\t\t\t\t\tTry again...........\n\n";/*goto a;*/} //if inputed choice is other than given choice

////////////////////////Doctor Information/////OPTION ONE///////////////////////////
if(i==1){

    cout<<"\n\t\t\t\t\t==========================================================================\n";
	cout<<"\n\n\t\t\t\t\t\t\t(Three Doctor Available)\n\n\t\t\t\t\t\t\t[Information And Timing Are Given Below]\n";
	cout<<"\n\t\t\t\t\t--------------------------------------------------------------------------\n";
	cout<<"\t\t\t\t\t\tDr Available:\n";                                                        
	cout<<"\t\t\t\t\t\tDr. Razaque (Skin Specialist) \n\n";
	cout<<"\t\t\t\t\t\t\t\t[[Timing]]:\n\n";
	cout<<"\t\t\t\t\t\tMonday To Friday\t\t9AM TO 5PM\n";
	cout<<"\t\t\t\t\t\tsatuday         \t\t9AM TO 1PM\n ";
	cout<<"\t\t\t\t\t\tsunday          \t\tOFF\n";
	cout<<"\n\t\t\t\t\t--------------------------------------------------------------------------\n";
	cout<<"\t\t\t\t\t\tDr. Haseeb (Child Specialist)\n\n";
	cout<<"\t\t\t\t\t\t\t\t[[Timing]]:\n\n";
	cout<<"\t\t\t\t\t\tMonday To Friday\t\t2AM TO 10PM\n";
	cout<<"\t\t\t\t\t\tsatuday         \t\t8AM TO 1PM\n ";
	cout<<"\t\t\t\t\t\tsunday          \t\t12AM TO 9PM\n";
	cout<<"\n\t\t\t\t\t--------------------------------------------------------------------------\n";
	cout<<"\n\t\t\t\t\t\tDr. Farhat (Heart Specialist)\n\n";
	cout<<"\t\t\t\t\t\t\t\t[[Timing]]:\n\n";
	cout<<"\t\t\t\t\tMonday To Friday\t\t8AM TO 50PM\n";
	cout<<"\t\t\t\t\tsatuday         \t\t10AM TO 1PM\n ";
	cout<<"\t\t\t\t\tsunday          \t\tOFF\n";
	cout<<"\n\t\t\t\t\t-------------------------------------------------------------------------\n";
	cout<<"\n\t\t\t\t\tPress Any Key To Continuous:";
	getch();
	show();
}

///////////////////////////////APPOINTMENT DOCTOR////////OPTION TWO///////////////

if(i==2){
	char ch;
	int i = 0;

	while(ch != 'n'){
		
	cout<<"\n\t\t\t\t\t\tEnter The Name OF Patient  =";
		cin>>name[i];
		
	
		cout<<"\n\t\t\t\t\t\tEnter The Doctor Name =";
		cin>>doctor[i];
		
		cout<<"\n\t\t\t\t\t\tEnter The Appointment Time =";
		cin>>time[i];
		
		cout<<"\n\t\t\t\t\t\tEnter The Age =";
		cin>>age;
		
		cout<<"\n\t\t\t\t\t\tEnter The Blood Group =";
		cin>>blood;
		
		cout<<"\n\t\t\t\t\t\tEnter The Appointment No =";
		cin>>num;
	i++;
	cout<<"\n\t\t\t\t\t\tYour Appointtment Is Succeccfully Save:\n";
	cout<<"\n\t\t\t\t\t\tDo you want to enter another data press enter or n to leave:\n ";
	ch = getch();
}
    cout<<"\n\t\t\t\t\tPress Any Key To Continuous:";
	getch();
     show();
}




///////////////////////////////STAFF INFORMATION////////////////OPTION FOUR/////

if(i==4){
	char ch;
     int i=0;
	while(ch != 'y'){
	
	cout<<"\n\t\t\t\t\t\tEnter The Name OF Staff  =";
		cin>>staff;
		cout<<"\n\t\t\t\t\t\tEnter The Age =";
		cin>>age;
		cout<<"\n\t\t\t\t\t\tEnter Sallary =";
		cin>>sal[i];
		cout<<"\n\t\t\t\t\t\tEnter Working Positon =";
		cin>>pos[i];
	i++;
	cout<<"\n\t\t\t\t\t\tYour Information Is Succeccfully Save:\n";
	cout<<"\n\t\t\t\t\t\tDo you want to enter another data press enter or y to leave:\n ";
	ch = getch();	
	}
	cout<<"\n\t\t\t\t\tPress Any Key To Continuous:";
	getch();
	show();
}

//////////////////////////////////EXSIT//////////////OPTION FIVE/////////

if(i==6){

cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t\t@@ ________________________________________________________________________ @@\n";
cout<<"\t\t\t\t\t@@|                                           		                   |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                   |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                   |@@\n";
cout<<"\t\t\t\t\t@@|                      THANK YOU FOR USING                      	   |@@\n";
cout<<"\t\t\t\t\t@@|                  HOSPITAL MANAGEMENT SYSTEM                            |@@\n";
cout<<"\t\t\t\t\t@@|                                                                        |@@\n";
cout<<"\t\t\t\t\t@@|                                                                        |@@\n";
cout<<"\t\t\t\t\t@@|________________________________________________________________________|@@\n";
cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
}
    
	
	}
	
///////////////////////////////////SAVING PATIENT INFORMATION/////// 
void getdata(){
	
	if(i==3){
		
	for(int i = 0; i < 1; i++){
		
		cout<<" patient name: "<<name[i]<<endl;
		cout<<" patient's doctor: "<<doctor[i]<<endl;
		cout<<" patient time: "<<time[i]<<endl;
	
	
}
        
	    cout<<" Patient's age: "<<age<<endl;
	    cout<<"Enter The Blood Group ="<<blood;
		//cin>>blood;
		cout<<" paitent's Appointment number: "<<num<<endl;

	cout<<"\n\t\t\t\t\tPress Any Key To Continuous:";
	getch();
	show();
	
	
}
	
}	
	
///////////////////////////////////SAVING INFORMATION ////////////////////	
	void save(){
		if(i==5){
			
			for(int i = 0; i < 1; i++){
		
		cout<<" Staff name: "<<staff<<endl;
		cout<<" Sallary ="<<sal[i]<<endl;
	cout<<" Working Positon ="<<pos[i]<<endl;
	
}
     cout<<" Staff age: "<<age<<endl;
	
		
	cout<<"\n\t\t\t\t\t\tPress Any Key To Continuous:";
	getch();
	show();	
		
		
		}
	}
	
	
	
	
	
};


		


 int   main(){
////first class	
	B obj;
	obj.display();
////second class	
	C  Hiobj;
	Hiobj.choice();
	
	
	C Cobj;
	Cobj.registerAccount();
	
	
	C Sayobj;
	Sayobj.login();
	
////thrid class	
	D Dobj;
	Dobj.show();
	
	Dobj.getdata();
	 Dobj.save();
} 
