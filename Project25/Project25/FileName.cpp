#pragma warning( disable : 4996)
#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include"FileName.h"
using namespace std;
int main() {
    //输入部分
	string s1, s2;
	printf("Enter the first string:");
	getline(cin, s1);
	char* str1 = new char[1000];
	strcpy(str1, s1.c_str());
	printf("Enter the second string:");
	fflush(stdout);
	rewind(stdin);
	getline(cin, s2);
	char* str2 = new char[1000];
	strcpy(str2,s2.c_str());
	fflush(stdout);
	//运算部分
	int a = s1.size(), b = s2.size();
	int j = 0;
	do {
		if (indexOf(str1, 0, str2, j, a) != -1) {
			break;
		}
		j++;
	}
	while (a < b - j);
	if (indexOf(str1, 0, str2, j, a) == -1) {
		cout << "indexOf(\22" << s1 << "\22,\22" << s2 << ")is:" << -1;
	}
	else {
		cout << "indexOf(\22" << s1 << "\22,\22" << s2 << ")is:" << indexOf(str1, 0, str2, j, a);
	}
	delete[]str1;
	delete[]str2;
}