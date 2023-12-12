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
	cout << "请输入两个数：";
	cin >> a >> b;
	cout << "\n这是它们的最大公约数：" << max(a, b) << endl;
	cout << "这是它们的最小公倍数：" << min(a, b) << endl;
}
