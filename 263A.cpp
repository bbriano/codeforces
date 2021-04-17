#include <iostream>
using namespace std;

int main()
{
    int n;
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            cin >> n;
            if (n == 1) {
                int x = i-2>=0 ? i-2 : 2-i;
                int y = j-2>=0 ? j-2 : 2-j;
                cout << x+y << endl;
                return 0;
            }
        }
    }
}
