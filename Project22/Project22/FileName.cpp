#include<iostream>
#include<stdio.h>
using namespace std;
void paixu(double a[]) {
	bool changed = true;
	do
	{
		changed = false;
		int j = 0;
		while (j < 9) {
			if (a[j] > a[j + 1])
			{
				double k;
				k = a[j], a[j] = a[j + 1], a[j + 1] = k;
				changed = true;
			}
			j++;
		}
	} while (changed == true);
}
int main() {
	double list[10];
	int i = 0;
	while (i < 10) {
		scanf_s("%lf", &list[i]);
		i++;
	}
	paixu(list);
	int n = 0;
	while(n < 10) {
		printf("%f", list[n]);
		printf(" ");
		n++;
	}
}