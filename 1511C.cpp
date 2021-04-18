#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);

    for (int i=0; i<n; i++)
        cin >> a[i];

    for (int j=0; j<q; j++) {
        int t;
        cin >> t;
        int i=0;
        while (a[i] != t) i++;
        cout << i+1 << ' ';
        if (i>0) {
            for (int k=i-1; k>=0; k--) {
                a[k+1] = a[k];
            }
        }
        a[0] = t;
    }
}
