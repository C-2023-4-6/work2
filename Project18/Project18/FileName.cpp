#include <iostream>
#include <stdio.h>
using namespace std;
bool is_prime(int num) {
    int a;
    for (a = num - 1; num % a != 0 ; a--) {
    }
    if (a == 1) {
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    int su[200];
    int n=2, m=0;
    while (m < 200) {
        if (is_prime(n) == 1) {
            su[m] = n;
            m++;
        }
        n++;
    }
    int i = 0;
    while (i < 200) {
        printf("%u\t", su[i]);
        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
        i++;
    }
}