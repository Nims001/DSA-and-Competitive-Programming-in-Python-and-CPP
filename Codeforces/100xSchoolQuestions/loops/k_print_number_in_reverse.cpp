#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    int zeroCount = 0;
    while (n % 10 == 0) {
        zeroCount++;
        n /= 10;
    }

    long long num = 0;
    while (n != 0) {
        long long d = n % 10;
        num = num * 10 + d;
        n /= 10;
    }

    for (int i = 0; i < zeroCount; i++) {
        cout << '0';
    }
    cout << num;

    return 0;
}
