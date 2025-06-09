#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    int max_val = a[0];
    for (int i = 0;i < n;i++) {
        if (a[i] > max_val) {
            max_val = a[i];                 //find the element got maximum value in 1D-array
        }
    }
    cout << max_val;
}