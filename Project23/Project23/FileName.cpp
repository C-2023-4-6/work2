#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	bool guizi[100] = { 0 };
	int i = 1;
	do {
		int j = 0;
		while (j<100) {
			if ((j + 1) % i == 0) {
				guizi[j] = !guizi[j];
			}
			j++;
		}
		i++;
	} while (i < 101);
	int m = 0;
	while (m < 100) {
		if (guizi[m] == 1) {
			printf("%d", m+1);
			printf(" ");
		}
		m++;
	}
}