#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        int i=0;
        while (i<n) {
            if (s[i] != 'a') {
                break;
            }
            i++;
        }
        if (i == n) {
            cout << "NO\n";
        } else {
            int j;
            if (i < n/2) {
                j = n-i;
            } else {
                j = n-i-1;
            }
            cout << "YES\n" << s.substr(0, j) << 'a' << s.substr(j, n-j) << '\n';
        }
    }
}
