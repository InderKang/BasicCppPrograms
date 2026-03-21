// Program to calculate sum of digits of a number.
// Author: Inderpreet
#include <iostream>
using namespace std;
int main() {
	int digit,sum=0,number,num;
	cout<<"Enter any positive number: ";
	cin>>number;
	num=number;
	if (number<0){
		cout<<"Invalid Number";
		return 1;
	}
	while (number>0){
		digit=number%10;
		sum+=digit;
		number/=10;
	}
	cout<<"Sum of digits of "<<num<<": "<<sum;
}