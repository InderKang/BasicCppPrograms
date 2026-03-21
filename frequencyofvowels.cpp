// Program to count frequency of vowels in a string.
// Author: Inderpreet
#include <iostream>
#include <string.h>
using namespace std;
int main() {
	char text[100];
	cout<<"Enter a string: ";
	cin.getline(text,100);
	strlwr(text);
	int a = strlen(text), vowelcount = 0;
	for (int i = 0; i<=a; i++) {
		if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u')
			vowelcount++;
	}
	cout<<"There are "<<vowelcount<<" Vowels in "<<text;
}
