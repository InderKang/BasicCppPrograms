// Program to show concept of binary operator overloading.
// Author: Inderpreet
#include <iostream>
using namespace std;
class Distance {
public:
	int feet;
	Distance(int f = 0) {
		feet = f;
	}
	Distance operator +(Distance const &obj) {
		Distance temp;
		temp.feet = feet + obj.feet;
		return temp;
	}
	void show() {
		cout<<"Total Feet: "<<feet<<endl;
	}
};
int main() {
	Distance d1(10);
	Distance d2(30);
	Distance d3;
	d3 = d1 + d2;
	d3.show();
}
	