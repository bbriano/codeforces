#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        if (n < 2*k + 1) {
            cout << -1 << '\n';
            continue;
        }

        vector<int> a(n);
        for (int i=0; i<n; i++)
            a[i] = i+1;

        for (int i=0; i<k; i++) {
            reverse(a.begin() + 2*i + 1, a.end());
            reverse(a.begin() + 2*i + 2, a.end());
        }

        reverse(a.begin() + 2*k, a.end());

        for (int i=0; i<n; i++)
            cout << a[i] << ' ';
        cout << '\n';
    }
}
