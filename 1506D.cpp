#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        map<int,int> cnt;
        for (int i=0; i<n; i++) {
            int a;
            cin >> a;
            cnt[a]++;
        }

        if (cnt.size() == 1) {
            for (pair<int,int> v : cnt) {
                cout << v.second << '\n';
            }
            continue;
        }

        vector<int> h;
        for (pair<int,int> v : cnt) {
            h.push_back(v.second);
        }
        make_heap(h.begin(), h.end());

        while (h.size() >= 2) {
            pop_heap(h.begin(), h.end()); int a = h.back(); h.pop_back();
            pop_heap(h.begin(), h.end()); int b = h.back(); h.pop_back();
            a--; b--;
            if (a > 0)
                h.push_back(a); push_heap(h.begin(), h.end());
            if (b > 0)
                h.push_back(b); push_heap(h.begin(), h.end());
        }

        if (h.size() == 0) {
            cout << 0 << '\n';
        } else {
            cout << h[0] << '\n';
        }
    }
}
