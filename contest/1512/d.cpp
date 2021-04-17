#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> b;
        for (int i=0; i<n+2; i++) {
            int x;
            cin >> x;
            b.push_back(x);
        }

        sort(b.begin(), b.end());

        int sum_n = 0;
        for (int i=0; i<n; i++) {
            sum_n += b[i];
        }

        if (sum_n == b[n]) {
            for (int i=0; i<n; i++) {
                cout << b[i] << " ";
            }
            cout << endl;
        } else {
            int target = sum_n + b[n] - b[n+1];
            auto it = find(b.begin(), b.end(), target);
            if (it != b.end()) {
                int index = it - b.begin();
                for (int i=0; i<n+1; i++) {
                    if (i != index) {
                        cout << b[i] << " ";
                    }
                }
                cout << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }
}
