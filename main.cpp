#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include"roster.cpp"
void homescreen();
using namespace std;
void space(int);
int main(){
	homescreen();
	Roster r;
	//r.addData();
	r.addAllFromTable();
	r.addMyData();
	r.showAll();
	//r.remove("A3");
	//cout<<"After Removing A3 student from data structure";
//	r.showAll();
	r.showInvalidEmail();
	r.printAverageDay(r.getCurrentStudentAddress());
	cout<<endl<<"press any key to continue your system!!";
	getch();
	system("cls");
	
	while(1){
		cout<<endl<<"\t\t\tEner  A option"<<endl;
		cout<<"1-->Enter 1 for add your information"<<endl;
		cout<<"2-->Enter 2 for show All Student in The data structure"<<endl;
		cout<<"3-->Enter 3 for remove data of particular ID"<<endl;
		cout<<"4--> Enter 4 for show Invalid Emails in the student list"<<endl;
		cout<<"5-->Enter 5 for print average Dady at Course for recent user "<<endl;
		cout<<"6-->Enter 6 for print average day at Course for User Id "<<endl;
		cout<<"7--> Exit from the system!"<<endl;
		int choice;
		cin>>choice;
		switch(choice){
			case 1:{
			//	r.addData();
		//	r.test();
				r.addIndividual();
				cout<<"Press any key to continue";
				getch();
				break;
			}
			case 2:{
				r.showAll();
				break;
			}
			case 3:{
				cout<<"Enter id to remove from data base!"<<endl;
				string id;
				cin>>id;
				r.remove(id);
				break;
			}
			case 4:{
					r.showInvalidEmail();
				break;
			}
			case 5:{
					r.printAverageDay(r.getCurrentStudentAddress());
				break;
			}
			case 6:{
				cout<<"Enter id to find the average day at course "<<endl;
				string id;
				cin>>id;
				r.printAverageDayById(id);
				break;
			}
			case 7:{
				exit(1);
				break;
			}
			default:{
				cout<<"Enter a valid option THanks "<<endl;
				break;
			}
		}
		cout<<"Press any key to continue!!"<<endl;
		getch();
		system("cls");
	}
	
}

void homescreen(){
	cout<<endl;
	space(10);
	for(int i=0;i<40;i++){
	cout<<"*";	
	}
	cout<<endl;
	space(10);
	cout<<"Course Title: Student Management System"<<endl;
	space(10);
	for(int i=0;i<40;i++){
	cout<<"*";	
	}
	cout<<endl;
	space(15);
	cout<<"Programming Language used= C++"<<endl;
	space(15);
	cout<<"WGU Student ID=12345"<<endl;
	space(15);
	cout<<"Full Name: Ashish Sharma ;) "<<endl;
	
	cout<<endl;
	space(15);
	for(int i=0;i<40;i++){
	cout<<"*";	
	}
	cout<<endl;
	space(15);
	cout<<"Press any key to continue!!"<<endl;
	space(15);
	for(int i=0;i<40;i++){
	cout<<"*";	
	}
	cout<<endl<<endl;
	space(15);
	getch();
	system("cls");
	
}
void space(int a){
	for(int i=0;i<a;i++){
	cout<<" ";	
	}
}

