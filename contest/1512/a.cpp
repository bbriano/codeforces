#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int curr, prev, pprev;
        cin >> pprev;
        cin >> prev;

        if (pprev != prev) {
            cin >> curr;
            if (curr == prev) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }
            for (int i=3; i<n; i++)
                cin >> curr;
        } else {
            for (int i=2; i<n; i++) {
                cin >> curr;
                if (curr != prev) {
                    cout << i+1 << endl;
                }
            }
        }
    }
}
