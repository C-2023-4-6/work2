#include<iostream>
using namespace std;
int a, b;
int min(int a, int b)
{
	if (a < b) {
		int t;
		t = a, a = b, b = t;
	}
	int min;
	for (min = a; min % a != 0 || min % b != 0; min++) {

	}
	return min;
}
int max(int a, int b)
{
	if (a < b) {
		int t;
		t = a, a = b, b = t;
	}
	int max;
	for (max = b; a % max != 0 || b % max != 0; max--) {

	}
	return max;
}int main() {
	int a, b;
	cout << "��������������";
	cin >> a >> b;
	cout << "\n�������ǵ����Լ����" << max(a, b) << endl;
	cout << "�������ǵ���С��������" << min(a, b) << endl;
}
