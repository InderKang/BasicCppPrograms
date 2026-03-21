// Program to show concept of multiple inheritence.
// Author: Inderpreet
#include <iostream>
#include <string.h>
using namespace std;
class details {
public:
	int id;
	char name[50];
	void data() {
		id = 1905;
		strcpy(name,"Inderpreet");
	}
};
class marks {
public:
	int math, english, computer = 99;
	double percentage;
	void marksheet() {
		math = 95;
		english = 100;
		computer = 99;
		percentage = (math + english + computer)/3;
	}
};
class student : public details, public marks {
public:
	void studentdata() {
		cout<<"==== Details ===="<<endl;
		cout<<"RollNo.: "<<id<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"==== Marks ==="<<endl;
		cout<<"Math: "<<math<<"\t";
		cout<<"English: "<<english<<endl;
		cout<<"Computer: "<<computer<<"\t";
		cout<<"Total: "<<percentage<<"%"<<endl;
	}
};
int main() {
	student s1;
	s1.data();
	s1.marksheet();
	s1.studentdata();
}