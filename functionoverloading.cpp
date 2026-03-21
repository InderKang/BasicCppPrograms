// Program to show concept of function overloading.
// Author: Inderpreet
#include <iostream>
using namespace std;
int add(int x, int y){
	int sum = x+y;
	return sum;
}
float add(float x, float y){
	float sum = x+y;
	return sum;
}
int main() {
	int a = 20, b = 60;
	cout<<"\nInteger Output: "<<add(a,b);
	float c = 40.5, d = 50.8;
	cout<<"\nFloat Output: "<<add(c,d);
}