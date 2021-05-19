#include<iostream>
#include<string.h>
#include <sstream>
#include"student.cpp"
using namespace std;
const string studentData[] =
{"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY"};

class Roster{
	private:
		int currentSize;
		int maxSize;
		Student *arrayOfSdudent;
		public:
			Roster(){
				maxSize=10;
				currentSize=0;
				arrayOfSdudent=new Student[maxSize];
			}
			int add(Student);
			int addIndividual();
			void remove(string);
	
			void showAll();
			void showInvalidEmail();
			void printAverageDay(Student *);
			void printAverageDayById(string id);
			Student* getCurrentStudentAddress(){
				return arrayOfSdudent;
			}
			int getcurrentSize(){
				return currentSize;
			}
		void addMyData();		
void addAllFromTable();

};
