// Program to show concept of unary operator overloading.
// Author: Inderpreet
#include <iostream>
using namespace std;
class increment {
	public:
	int value;
	increment() {
		value = 10;
	}
	void operator ++(){
		value++;
	}
	void show() {
	cout<<value;
	}
};
int main() {
	increment i;
	++i;
	i.show();
}