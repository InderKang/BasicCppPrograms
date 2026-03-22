// Program to calculate area and perimeter of triangle using class-objects.
// Author: Inderpreet
#include <iostream>
using namespace std;
class triangle {
	public:
	float base,height,area,perimeter;
	void input(){
		cout<<"Enter Base: ";
		cin>>base;
		cout<<"Enter Height: ";
		cin>>height;
	}
	float findarea(){
		area = 0.5*base*height;
		return area;
	}
	float findperimeter(){
		perimeter = 3*base;
		return perimeter;
	}
};
int main() {
	triangle tri;
	tri.input();
	cout<<"Area of Triangle = "<<tri.findarea();
	cout<<"\nPerimeter of Triangle = "<<tri.findperimeter();
}
