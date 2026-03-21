// Program to show concept of copy-constructor.
// Author: Inderpreet
#include <iostream>
using namespace std;
class counter {
	public:
	int count;
	counter() {
		count = 1;
	}
	counter(counter &ob){
		count = ob.count;
	}
	void show(){
		cout<<count<<endl;
	}
};
int main() {
	counter c1;
	counter c2(c1);
	c1.show();
	c2.show();
}