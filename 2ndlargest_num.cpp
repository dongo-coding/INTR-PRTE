#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void findSecondMax(int a[], int n, int i, long long& maxV, long long& secondV) {
    if (i == n) return;
    if (a[i] > maxV) {
        secondV = maxV;
        maxV = a[i];
    }
    else if (a[i] > secondV && a[i] < maxV) {
        secondV = a[i];
    }
    findSecondMax(a, n, i + 1, maxV, secondV);
}

int main()
{
    int n, a[1000];
    cin >> n;
    if (n < 2) return cout << "NOT FOUND", 0;

    for (int i = 0; i < n; i++) cin >> a[i];

    long long maxV = LLONG_MIN, secondV = LLONG_MIN;
    findSecondMax(a, n, 0, maxV, secondV);

    cout << (secondV == LLONG_MIN ? "NOT FOUND" : to_string(secondV)); //find second largest number
    return 0;

}