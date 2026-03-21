// Program to show pass by reference in a function.
// Author: Inderpreet
#include <iostream>
using namespace std;
void add(int& a){
	a += 10;
}
int main() {
	int a = 55;
	cout<<"Before: "<<a;
	add(a);
	cout<<"\nAfter: "<<a;
}