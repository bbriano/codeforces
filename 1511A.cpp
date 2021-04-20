#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt=0;
        while (n--) {
            int r;
            cin >> r;
            if (r != 2) {
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
}
