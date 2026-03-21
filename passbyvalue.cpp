// Program to show pass by value in a function.
// Author: Inderpreet
#include <iostream>
using namespace std;
void temp(int a){
	a+=10;
	cout<<"\nTemp Value: "<<a;
}
int main() {
	int a = 10;
	cout<<"Original Value: "<<a;
	temp(a);
}