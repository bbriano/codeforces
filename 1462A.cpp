#include <iostream>

using namespace std;

int main() {
    int t;
    int n;
    int *a;

    cin >> t;

    while (t--) {
        cin >> n;
        a = (int *) malloc(n*sizeof(int));
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }

        for (int i=0; i<n/2; i++) {
            cout << a[i] << " ";
            cout << a[n-1-i] << " ";
        }
        if (n%2 == 1) {
            cout << a[n/2];
        }
        free(a);

        cout << endl;
    }
}
