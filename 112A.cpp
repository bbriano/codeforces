#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    for (int i=0; i<s.length(); i++) {
        char a = s[i];
        char b = t[i];

        if (a > 'Z') {
            a -= 'z'-'Z';
        }
        if (b > 'Z') {
            b -= 'z'-'Z';
        }

        if (a < b) {
            cout << -1 << endl;
            return 0;
        } else if (a > b) {
            cout << 1 << endl;
            return 0;
        }
    }

    cout << 0 << endl;
}
