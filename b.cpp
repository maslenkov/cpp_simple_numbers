#include <iostream>

using namespace std;

const int SZ = 100000;
const int MAX = 10000000;

int main() {
    int n, numbers[SZ], number;
    int i, j, k, tmp = 0;
    bool is_simple;
    cout << "Hello, World!!!" << endl;
    cin >> n;
    if (n > 1) {
        numbers[1] = 3;
    }
    if (n > 2) {
        number = 5;
        is_simple = true;
        for (i = 2; i < n; i++) {
            while (true) {
                for (j = 1; j < i; j++ ) {
                    if (number % numbers[j] == 0) {
                        is_simple = false;
                        break;
                    }
                }
                number += 2;
                if (is_simple) {
                    numbers[i] = number - 2;
                    break;
                } else {
                    is_simple = true;
                }
                if (number > MAX) {
                    i = i - 1;
                    cout << "max number is: " << numbers[i] << endl;
                    cout << "max index is: " << i << endl;
                    return 0;
                }
            }
        }
    }
    numbers[0] = 2;
    for (i = (n > 9 ? n - 10 : 0); i < n; i++) {
        cout << numbers[i] << ' ';
    }
    cout << endl;
    cin >> i;
    return 0;
}

