#pragma once
int indexOf(char a[],int m, char b[],int n,int size1) {
	if (m == size1) {
		return n - size1 + 1;
	}
	else if (a[m] == b[n]) {
		return indexOf(a, m + 1, b, n + 1, size1);
	}
	else {
		return -1;
	}
}