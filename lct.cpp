#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n, x;
	cin >> n >> x;
	int cnt = 0;
	vector<int>a(n);
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	for (int i = 0;i < n;i++) {
		if (a[i] == x) {
			cnt++;        //counting the times where x appear in 1D-array
		}

	}
	cout << cnt;
}