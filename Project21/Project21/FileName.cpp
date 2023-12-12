#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	int a[10];
	int i = 0;
	cout << "Enter 10 numbers:";
	while (i < 10) {
		scanf_s("%u", &a[i]);
		i++;
	}
	int j = 0;
	while (j < 10) {
		int n = 0;
		while (n < j) {
			if (a[j] == a[n]) {
				break;
			}
			else {
				n++;
			}
		}
		if (n == j) {
			printf("%u", a[j]);
			printf(" ");
		}
		j++;
	}
}