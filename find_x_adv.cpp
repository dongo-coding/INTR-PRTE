#include <iostream>
using namespace std;
int main()
{
    int a[10], x;
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    cin >> x;

    bool found = false;
    for (int i = 0; i < 10; i++) {
        if (a[i] == x) {
            cout << i + 1 << " ";
            found = true;              // find x in 1D-array but saving (n-1) element, check x whether appear in its?
        }
    }

    if (!found) cout << -1;

}