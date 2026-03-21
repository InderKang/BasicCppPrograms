// Program to output and input from a filestream.
// Author: Inderpreet
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main() {
	char data[100];
	ofstream fileout("inder.txt");
	fileout<<"Inderpreet \nBCA Sem 4 \nRollNo. 1905";
	fileout.close();
	ifstream filein("inder.txt");
	if (!filein) {
		cout<<"File not opened!";
		return 1;
	}
	cout<<"==== inder.txt ====\n";
	while (filein.getline(data,100)) {
		cout<<data<<endl;
	}
}