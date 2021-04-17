#include <iostream>
using namespace std;

// 20:52

int main()
{
    int nonzeros = 0;
    int n, k;
    cin >> n >> k;
    int min_score = 0;
    for (int i=0; i<n; i++) {
        int curr;
        cin >> curr;
        if (curr < min_score)
            break;
        if (curr > 0)
            nonzeros++;
        if (i == k-1)
            min_score = curr;
    }
    cout << nonzeros << endl;
}

// 21:01
