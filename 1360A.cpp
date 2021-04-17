#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--) {
        int w, h;
        cin >> w >> h;

        int a, b; // a>=b
        a = w>=h ? w : h;
        b = w<=h ? w : h;

        if (a/b >= 2) {
            cout << a*a << endl;
        } else {
            cout << 4*b*b << endl;
        }
    }
}
