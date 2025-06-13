#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n < 2) {
        return 0;
    }

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    long long s = LLONG_MAX;
    for (int i = 1; i < n; i++) {
        s = min(s, a[i] - a[i - 1]);
    }

    cout << s << endl;
}
