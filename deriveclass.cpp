// Program to show concept of deriving a class from base class.
// Author: Inderpreet
#include <iostream>
using namespace std;
class circle {
public:
	double radius;
	void input() {
		cout<<"Enter radius: ";
		cin>>radius;
	}
};
class area : public circle {
public:
	void areaf(){
		double area = 3.14*radius*radius;
		cout<<"Area of circle = "<<area<<endl;
	}
};
class circumference : public circle {
public:
	void circumferencef() {
		double circumference = 2*3.14*radius;
		cout<<"Circumference of circle = "<<circumference<<endl;
	}
};
int main() {
	area c1;
	c1.input();
	c1.areaf();
	circumference c2;
	c2.input();
	c2.circumferencef();
}