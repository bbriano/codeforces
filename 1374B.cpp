#include <iostream>
using namespace std;

int main() {
    int t, n;
    int m;

    cin >> t;
    while (t--) {
        cin >> n;

        m = 0;
        while (n != 1) {
            if (n % 6 == 0) {
                n /= 6;
                m++;
            } else if (n % 3 == 0) {
                n /= 3;
                m+=2;
            } else {
                n = 1;
                m = -1;
                break;
            }
        }
        cout << m << endl;
    }
}
