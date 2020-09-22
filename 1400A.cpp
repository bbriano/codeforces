#include <iostream>
#include <string>
using namespace std;

int main() {
    int t, n;
    char s[100], w[51];

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        cin >> s;
        for (int j = 0; j < n; j++) {
            /* for (int k = 0; k < n; k++) { */
            /*     cout << s[j + k]; */
            /* } */
            /* cout << endl; */
            w[j] = s[2*j];
            w[j+1] = '\0';
        }
        cout << w << endl;
    }
}

