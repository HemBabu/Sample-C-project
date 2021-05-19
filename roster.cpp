#include"roster.h"
#include<iostream>
#include<string.h>
#include <sstream>
using namespace std;
int Roster::add(Student s){
		
		if (currentSize == maxSize)
    {
        maxSize = maxSize * 2;
        Student *tempArray = new Student[maxSize];
        for (int i = 0; i < currentSize; i++)
        {
            tempArray[i] = arrayOfSdudent[i];
        }
        tempArray[currentSize] = s;
        currentSize++;
        arrayOfSdudent = tempArray;
        //	cout<<"From maxsize";
        return 1;
    }
    else{
    	//cout<<"From maxsize";
        arrayOfSdudent[currentSize] = s;
          currentSize++;
       
        return 0;
    }
    
}
void Roster::remove(string s){
	int c=0;
	 for (int i = 0; i < currentSize; i++)
    {
        if (arrayOfSdudent[i].getId() == s)
        {
            Student *newArray = new Student[currentSize-1];
            std::copy(arrayOfSdudent, arrayOfSdudent+i, newArray);
            std::copy(arrayOfSdudent+i+1, arrayOfSdudent+currentSize, newArray+i);
            delete[] arrayOfSdudent;
            arrayOfSdudent = newArray;
            --currentSize;
            c++;
}
}
if(c==0){
	cout<<endl<<"The id \""<<s<<"\" is not found in the data structure!!!"<<endl;
}
else{
		cout<<endl<<"The id \""<<s<<"\" is successfully deleted from data structure!!!"<<endl;
}
}
void Roster::showAll(){

        	for (int i = 0; i < currentSize; i++){
        		
        		arrayOfSdudent[i].print();
        
			}	
}
	void Roster::printAverageDay(Student* ref){
		int c=0;
		float sum=0,avg=0;
		int *ptr;
		string id=ref->getId();
		for (int i = 0; i < currentSize; i++){
        		if(	arrayOfSdudent[i].getId()==id){
        			ptr=arrayOfSdudent[i].getCourseComplete();
        			c++;
				}
        		
			}
			
			for(int  j=0;j<3;j++){
				
				sum+=*(ptr+j);
			}
			if(c==0){
				cout<<endl<<endl<<"The Id= "<<id<<" Not Found!! Enter valid Id to find average Day At Course!!\t"<<endl;
			}
			else{
				avg=sum/3.0;
			cout<<endl<<endl<<"The Id= "<<id<<" average Day At Course: \t"<<avg<<endl;
			}
			
	}
	
		void Roster::printAverageDayById(string id){
		float sum=0,avg=0;
		int c=0;
		int *ptr;
	
		for (int i = 0; i < currentSize; i++){
        		if(	arrayOfSdudent[i].getId()==id){
        				ptr=arrayOfSdudent[i].getCourseComplete();
        				c++;
				}
        	
			}
			
			for(int  j=0;j<3;j++){
				
				sum+=*(ptr+j);
			}
				if(c==0){
				cout<<endl<<endl<<"The Id= "<<id<<" Not Found!! Enter valid Id to find average Day At Course!! \t"<<endl;
			}
			else{
				avg=sum/3.0;
			cout<<endl<<endl<<"The Id= "<<id<<" average Day At Course: \t"<<avg<<endl;
			}
	}

bool isInvalidEmail(string s){
	int ca=0,cd=0;
	char c;
	bool result;
	for(int i=0;i<s.length();i++){
		
		c=(char)s[i];
//printf("%c",c);
if(c==' '){
	return true;
	break;
}
else if(c=='@'){
	ca++;
}
else if(c=='.'){
	cd++;
}
	}
	if(ca==1&&cd>=1){
		result=false;
	}
	else{
		result =true;
	}
	//cout<<endl;
	return result;
	
}

void Roster::showInvalidEmail(){
	cout<<endl<<endl<<"INvalid Email!! :-\t"<<endl;
		for (int i = 0; i < currentSize; i++){
        		string s;
        		s=arrayOfSdudent[i].getEmailId();
        if(isInvalidEmail(s)){
        	cout<<s<<endl;
		}
	
			}
}

int Roster::addIndividual(){
	Student s1;
	string names;

	char name[20];
		gets(name);
	cout<<"Enter Your ID to add to data structure"<<endl;
					gets(name);
	names=(string)name;
				s1.setId(names);
				cout<<"Enter your fist name:"<<endl;
					
	gets(name);
	names=(string)name;
				s1.setName(names);
				cout<<"Enter your last Name"<<endl;
				gets(name);
	names=(string)name;
			
				s1.setLastName(names);
				cout<<"Enter your email "<<endl;
			gets(name);
	names=(string)name;
				s1.setEmailId(name);
				cout<<"Enter your age"<<endl;
				int age;
				cin>>age;
				s1.setAge(age);
				cout<<"Enter Number of day at 1 course "<<endl;
				int c1;
				cin>>c1;
				cout<<"Enter Number of day at 2 course "<<endl;
				int c2;
				cin>>c2;
				cout<<"Enter Number of day at 3 course "<<endl;
				int c3;
				cin>>c3;
				int arr[]={c1,c2,c3};
				s1.setCourseComplete(arr);
				cout<<"degree you are pursueing at university choose SOFTWARE OR NETWORK OR SECURITY"<<endl;
				string course;
				cin>>course;
				if(course=="SECURITY"||course=="security"){
					s1.setDegreeProg(SECURITY);
				}
				else if(course=="NETWORK"||course=="network"){
					s1.setDegreeProg(NETWORK);
				}
				else if(course=="SOFTWARE"||course=="software"){
					s1.setDegreeProg(SOFTWARE);
				}
					else{
							s1.setDegreeProg(SOFTWARE);
					}
								
		add(s1);
		return 1;
		//showAll();		
								
}
	void Roster::addMyData(){
				Student s;
	s.setId("A5");
	s.setName("Ashish");
	s.setLastName("Sharma");
	s.setAge(24);
	s.setDegreeProg(SOFTWARE);
	s.setEmailId("sharma_mia@l.com");
	int a[]={38,48,43};
	s.setCourseComplete(a);
	add(s);
	
			}

void Roster::addAllFromTable(){
//	Student s[5];
	//s.setAge(12);
	//string individual[5];
	for(int i=0;i<sizeof(studentData)/sizeof(string);i++){
	//individual[i]=studentData[i];
	
	
	string name=studentData[i];
	
//	addToStudent(name);
	string individual[9];
	
	
			char str[20]={0};
		//	string individual[20];
			int count=0;
			int index=0;
		for(int j=0;j<name.length();j++){
			char c;
				c=name.at(j);
			//	cout<<c;
		if(c==','){
			
				str[index]='\0';
				//cout<<index<<"\t"<<str<<endl;
				individual[count]=str;
				count++;
					index=0;
				str[20]={0};
				//cout<<endl;	
			}
			else{
			
		
			str[index]=c;
				index++;	
			}
			
		
	}
		str[index]='\0';
	individual[count]=str;
	
	int x,y,z,ag;
	stringstream(individual[5]) >> x;
	stringstream(individual[6]) >> y;
	stringstream(individual[7]) >> z;
	stringstream(individual[4]) >> ag;
	int a[3]={x,y,z};
	 DegreeProgram dp;
	//cout<<"XXX"<<individual[8]<<endl;
	
		if(individual[8]=="SECURITY"){
		dp=SECURITY;
	}
	else if(individual[8]=="NETWORK"){
		dp=NETWORK;
	}else{
		dp=SOFTWARE;
	}
	
	//	addStd(individual[0],individual[1],individual[2],individual[3],ag,a,dp);
	Student s;

s.setId(individual[0]);
s.setName(individual[1]);
s.setLastName(individual[2]);
s.setEmailId(individual[3]);
s.setAge(ag);
s.setCourseComplete(a);
s.setDegreeProg(dp);
add(s);
}
}
