// Program to calculate division of student according to marks obtained in subject.
// Author: Inderpreet
#include <iostream>
using namespace std;
int main(){
	int maths,english,science,total,studentid;
	cout<<"Enter Student ID: ";
	cin>>studentid;
	cout<<"Enter Maths Marks: ";
	cin>>maths;
	cout<<"Enter English Marks: ";
	cin>>english;
	cout<<"Enter Science Marks: ";
	cin>>science;
	if (maths>100 || english>100 || science>100){
		cout<<"Value must be less than or equal to 100!";
		return 1;
	}
	total = maths+english+science;
	float result = total/3;
	cout<<"RESULT OF "<<studentid<<"\n";
	if (result > 80){
		cout<<"Pass!, Division A";
	}
	else if (result > 60){
		cout<<"Pass!, Division B";
	}
	else if (result >= 35){
		cout<<"Pass!, Division C";
	}
	else if (result < 35){
		cout<<"Fail!";
	}
}
