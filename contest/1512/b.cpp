#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> grid;

        for (int i=0; i<n; i++) {
            string s;
            cin >> s;
            grid.push_back(s);
        }

        vector<int> xs;
        vector<int> ys;

        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (grid[i][j] == '*') {
                    xs.push_back(j);
                    ys.push_back(i);
                }
            }
        }

        if (xs[0] == xs[1]) {
            if (xs[0] == 0) {
                xs.push_back(1);
                xs.push_back(1);
            } else {
                xs.push_back(xs[0]-1);
                xs.push_back(xs[0]-1);
            }
            ys.push_back(ys[0]);
            ys.push_back(ys[1]);
        } else if (ys[0] == ys[1]) {
            if (ys[0] == 0) {
                ys.push_back(1);
                ys.push_back(1);
            } else {
                ys.push_back(ys[0]-1);
                ys.push_back(ys[0]-1);
            }
            xs.push_back(xs[0]);
            xs.push_back(xs[1]);
        } else {
            xs.push_back(xs[0]);
            ys.push_back(ys[1]);
            xs.push_back(xs[1]);
            ys.push_back(ys[0]);
        }

        /* cout << ys[0] << "," << xs[0] << endl; */
        /* cout << ys[1] << "," << xs[1] << endl; */
        /* cout << ys[2] << "," << xs[2] << endl; */
        /* cout << ys[3] << "," << xs[3] << endl; */
        /* cout << endl; */

        for (int i=0; i<4; i++) {
            grid[ys[i]][xs[i]] = '*';
        }

        for (int i=0; i<n; i++) {
            cout << grid[i] << endl;
        }
    }
}
