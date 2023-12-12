#include <iostream>
#include "mytriangle.h"
using namespace std;
int main() {
	double a, b, c, C;
	cout << "请输入三角形的三条边：" << endl;
	cin >> a >> b >> c;
	if (is_valid(a, b, c) == 1) {
		cout << "该三角形的面积为：" << area(a, b, c) << endl;
	}
	else {
		cout << "这不是一个三角形！" << endl;
		return 0;
	}
}