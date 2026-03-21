// Program to sort a list of strings in alphabetical order.
// Author: Inderpreet
#include <iostream>
#include <string.h>
using namespace std;
int main() {
	char names[5][50];
	char temp[50];
	for (int i = 0; i < 5; i++){
		cout<<"Name "<<i+1<<": ";
		cin.getline(names[i], 50);
	}
	for (int i = 0; i < 4; i++){
		for (int j = i + 1; j < 5; j++){
			if (strcmp(names[i], names[j]) > 0) {
				strcpy(temp, names[i]);
				strcpy(names[i], names[j]);
				strcpy(names[j], temp);
			}
		}
	}
	for (int i = 0; i < 5; i++){
		cout<<names[i]<<"\n";
	}
}
				