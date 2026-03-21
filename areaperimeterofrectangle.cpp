// Program to calculate area and perimeter of rectangle using class-objects.
// Author: Inderpreet
#include <iostream>
using namespace std;
class rectangle {
	public:
	float length,breadth,area,perimeter;
	void input(){
		cout<<"Enter Length: ";
		cin>>length;
		cout<<"Enter Breadth: ";
		cin>>breadth;
	}
	float findarea(){
		area = length*breadth;
		return area;
	}
	float findperimeter(){
		perimeter = 2*(length+breadth);
		return perimeter;
	}
};
int main() {
	rectangle rect;
	rect.input();
	cout<<"Area of Rectangle = "<<rect.findarea();
	cout<<"\nPerimeter of Rectangle = "<<rect.findperimeter();
}