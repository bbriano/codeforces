#include <iostream>
using namespace std;

int main() {
    int t, a, b, c;

    cin >> t;

    while (t--) {
        cin >> a;
        cin >> b;

        if (a < b) {
            c = b - a;
        } else {
            c = a - b;
        }

        cout << (c + 9) / 10 << endl;
    }
}
