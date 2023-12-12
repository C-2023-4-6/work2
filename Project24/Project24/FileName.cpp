#include <iostream>
#include <stdio.h>
using namespace std;
void paixu(int a[],int size3) {
	bool changed = true;
	do
	{
		changed = false;
		int j = 0;
		while (j < size3-1) {
			if (a[j] > a[j + 1])
			{
				int k;
				k = a[j], a[j] = a[j + 1], a[j + 1] = k;
				changed = true;
			}
			j++;
		}
	} while (changed == true);
}
void merge(const int list1[], int size1,const int list2[], int size2, int list3[]) {
	int i = 0, n = 0, m = 0;
	while (i < size1) {
		list3[m] = list1[i];
		i++, m++;
	}
	m = size1;
	while (n < size2) {
		list3[m] = list2[n];
		n++, m++;
	}
	paixu(list3,size1+size2);
}
int main() {
	int s1, s2,a=0;
	printf("Enter list1,first num is the size of the list:");
	cin >> s1;
	int* one = new int[s1];
	while (a < s1) {
		scanf_s("%d", &one[a]);
		a++;
	}
	cout << '\n';
	a = 0;
	printf("Enter list2,first num is the size of the list:");
	cin >> s2;
	int* two = new int[s2];
	while (a < s2) {
		scanf_s("%d", &two[a]);
		a++;
	}
	cout << '\n';
	int* three = new int[s1 + s2];
	merge(one, s1, two, s2, three);
	delete[] one;
	delete[] two;
	cout << "The merged list is:";
	int b = 0;
	while (b < s1 + s2) {
		printf("%d", three[b]);
		printf(" ");
		b++;
	}
	delete[] three;

}