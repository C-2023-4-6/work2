#pragma warning( disable : 4996)
#include<iostream>
#include<string>
#include<cstring>
#include"FileName.h"
using namespace std;
int main() {
	string str1;
	int counts1[26] = { 0 };
	char* char1 = new char[1000];
	cout << "Enter a string:";
	getline(cin, str1);
	strcpy(char1, str1.c_str());
	count(char1, counts1);
	int c = 0;
	while (c < 26) {
		if (counts1[c] == 0) {
			c++;
			continue;
		}
		else {
			cout << static_cast<char>(c+97) << ":" << counts1[c] << " times." << endl;
			c++;
		}
	}
}