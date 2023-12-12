#include <iostream>
#include <string.h>
using namespace std;
int parseHex(char hexString[]) {
	char a[103] = { "0x" };
	strcat_s(a,hexString);
	cout <<strtol(a, NULL, 16);
	return 0;
}
int main() {
	char b[100] = { 0 };
	printf("请输入需要转换的16进制数：");
	scanf_s("%s", b,sizeof(b));
	cout << "结果是：";
	parseHex(b);
}