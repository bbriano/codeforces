#include <iostream>
using namespace std;

// start 22:33

int main()
{
    int n,k;
    cin >> n >> k;

    while (k--) {
        if (n % 10 == 0) {
            n /= 10;
        } else {
            n--;
        }
    }
    cout << n;
}
