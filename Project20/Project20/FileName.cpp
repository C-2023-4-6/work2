#include<iostream>
using namespace std;
int peach(int tao, int day) {
	if (day == 1) {
		return tao;
	}
    return peach(tao * 2 + 2, day - 1);
}
int main() {
	cout << peach(1, 10);
}