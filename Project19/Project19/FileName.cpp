#include <iostream>
#include "mytriangle.h"
using namespace std;
int main() {
	double a, b, c, C;
	cout << "�����������ε������ߣ�" << endl;
	cin >> a >> b >> c;
	if (is_valid(a, b, c) == 1) {
		cout << "�������ε����Ϊ��" << area(a, b, c) << endl;
	}
	else {
		cout << "�ⲻ��һ�������Σ�" << endl;
		return 0;
	}
}