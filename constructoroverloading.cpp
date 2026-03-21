// Program to show concept of constructor overloading.
// Author: Inderpreet
#include <iostream>
using namespace std;
class area {
	public:
	area(int x) {
		int area1 = x*x;
		cout<<"Area of square = "<<area1<<endl;
	}
	area(int x, int y) {
		int area1 = x*y;
		cout<<"Area of rectangle = "<<area1<<endl;
	}
	area(double x, int y) {
		float area2 = x*y*y;
		cout<<"Area of circle = "<<area2<<endl;
	}
};
int main() {
	area(7);
	area(5,5);
	area(3.14,2);
}