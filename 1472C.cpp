#include <iostream>

using namespace std;

int main() {
    int t, i, n, *a, *s, m;
    cin >> t;

    while (t--) {
        cin >> n;
        a = (int *) malloc(sizeof(int) * n);
        s = (int *) malloc(sizeof(int) * n);
        for (i=0; i<n; i++)
            cin >> a[i];

        m = a[0];
        for (i=n-1; i>=0; i--) {
            s[i] = a[i];
            s[i] = a[i];
            if (i+a[i] < n)
                s[i] += s[i+a[i]];
            if (s[i] > m) m = s[i];
        }

        cout << m << "\n";
        free(a);
        free(s);
    }
}
