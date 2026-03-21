// Program to show the use of inline function.
// Author: Inderpreet
#include <iostream>
using namespace std;
inline int add(int a, int b) {
	return a+b;
}
int main() {
	int a = 10, b = 20;
	cout<<add(a,b);
}