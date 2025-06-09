#include <iostream>
#include <iomanip>
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
    int cnt = 0;
    double S = 0, avg = 0;
    for (int i = 0;i < n;i++) {
        if (a[i] % 2 != 0) {
            cnt++;
            S += a[i];
            avg = S / cnt;          //calculate the average value where values are odd in 1D-array
        }
    }
    cout << fixed << setprecision(4) << avg;

}