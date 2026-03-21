// Program to find greatest among three numbers.
// Author: Inderpreet
#include <iostream>
using namespace std;
int main()
{
	int a,b,c,greatest;
	cout<<"Enter First Number"<<"\n";
	cin>>a;
	cout<<"Enter Second Number"<<"\n";
	cin>>b;
	cout<<"Enter Third Number"<<"\n";
	cin>>c;
	greatest = a;
	if (b>greatest){
		greatest = b;
	}
	if (c>greatest){
		greatest = c;
	}
	cout<<greatest<<" is Greatest";
}