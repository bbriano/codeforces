#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int l=0, r=n-1;
        while (s[l] != '*') l++;
        while (s[r] != '*') r--;

        if (l==r) {
            cout << 1 << '\n';
            continue;
        }

        int i=l;
        int count = 2;
        while (i+k < r) {
            for (int u=i+k; u>=1; u--) {
                if (s[u] == '*') {
                    i = u;
                    count++;
                    break;
                }
            }
        }

        cout << count << '\n';
    }
}
