#pragma once
#include<cstring>
void count(char s[], int counts[]) {
	int a = 0;
	while (a < strlen(s)) {
		int b = 0;
		while (b < 26) {
			if (static_cast<int>(s[a]) == b + 65 || static_cast<int>(s[a]) == b + 97) {
				counts[b]++;
			}
			b++;
		}
		a++;
	}
}