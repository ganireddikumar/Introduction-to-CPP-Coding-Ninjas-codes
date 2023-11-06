#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n >= 2) {
        cout << '2' << endl;
    }
    for (int i = 3; i <= n; i++) {
        bool isPrime = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << endl;
        }
    }
}
