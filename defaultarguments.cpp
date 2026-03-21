// Program to show the use of default arguments.
// Author: Inderpreet
#include <iostream>
using namespace std;
int add(int a = 10, int b = 10) {
	return a+b;
}
int main() {
	cout<<add();
}