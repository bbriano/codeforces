#include <iostream>
#include <string>

using namespace std;

int gcd(int, int);

int main() {
    int turn; /* 0->a, 1->b */
    int a, b, n;

    cin >> a;
    cin >> b;
    cin >> n;

    turn = 0;
    while (n >= 0) {
        if (turn) {
            n -= gcd(n, b);
        } else {
            n -= gcd(n, a);
        }
        turn = !turn;
    }
    cout << turn << endl;
}

int gcd(int a, int b) {
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }
    /* a >= b */
    if (b == 0) return a;
    return gcd(b, a % b);
}

