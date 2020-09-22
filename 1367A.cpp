#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        string b, a;
        cin >> b;

        int len = b.length();
        for (int i=0; i<len-1; i++) {
            if(i == 0) {
                a += b[i];
            }
            if (b[i] == b[i - 1]) {
                a += b[i];
                i++;
            }
        }
        a += b[len - 1];
        cout << a << endl;
    }
}
