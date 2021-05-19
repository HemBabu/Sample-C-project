#include"student.h"
	void Student::print(){
			cout<<"Id: "<<id;
			cout<<"\tFirst Name: "<<name;
			cout<<"\tLast Name: "<<lastName;
			cout<<"\tAge: "<<age;
			cout<<"\t Course Complete: {";
			for(int i=0;i<3;i++){
				cout<<courseComplete[i];
				if(i<2){
					cout<<", ";
				}
			}
			cout<<"}";
			if(degreeProg==0){
				cout<<"\tCourse: "<<"SECURITY";
			}
		else	if(degreeProg==1){
				cout<<"\tCourse: "<<"NETWORK";
			}
		else	if(degreeProg==2){
				cout<<"\tCourse: "<<"SOFTWARE";
			}
			else{
			cout<<"\tCourse: "<<"Invalid";	
			}
			cout<<"\tEmail Address: "<<emailId<<endl;
			
		}
