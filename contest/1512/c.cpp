#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        bool isPalindrome = true;

        for (int i=0; i<s.length()/2; i++) {
            int l = i;
            int r = s.length() - 1 - i;
            if (s[l] == '?' && s[r] == '?') {
            } else if (s[l] == '?') {
                if (s[r] == '0') {
                    s[l] = '0';
                    a--;
                    a--;
                } else {
                    s[l] = '1';
                    b--;
                    b--;
                }
            } else if (s[r] == '?') {
                if (s[l] == '0') {
                    s[r] = '0';
                    a--;
                    a--;
                } else {
                    s[r] = '1';
                    b--;
                    b--;
                }
            } else {
                if (s[l] == s[r]) {
                    if (s[l] == '0') {
                        a--;
                        a--;
                    } else {
                        b--;
                        b--;
                    }
                } else {
                    isPalindrome = false;
                }
            }
        }

        if (s.length()%2 == 1) {
            if (s[s.length()/2] == '0') {
                a--;
            } else if (s[s.length()/2] == '1') {
                b--;
            }
        }

        /* cout << s << endl; */
        /* cout << a << "," << b << endl; */

        for (int i=0; i<s.length()/2; i++) {
            int l = i;
            int r = s.length() - 1 - i;
            if (s[l] == '?') {
                if (a > 0) {
                    s[l] = '0';
                    s[r] = '0';
                    a--;
                    a--;
                } else if (b > 0) {
                    s[l] = '1';
                    s[r] = '1';
                    b--;
                    b--;
                } else {
                    isPalindrome = false;
                }
            }
        }

        if (s[s.length()/2] == '?') {
            if (a > 0) {
                s[s.length()/2] = '0';
                a--;
            } else if (b > 0) {
                s[s.length()/2] = '1';
                b--;
            } else {
                isPalindrome = false;
            }
        }

        /* cout << s << endl; */
        /* cout << a << "," << b << endl; */

        if (a != 0 || b != 0) {
            isPalindrome = false;
        }

        if (isPalindrome) {
            cout << s << endl;
        } else {
            cout << -1 << endl;
        }
    }
}
