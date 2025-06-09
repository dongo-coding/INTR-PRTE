#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n, x;
	cin >> n >> x;
	bool search = false;
	vector<int>a(n);
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	for (int i = 0;i < n;i++) {
		if (a[i] == x) {
			search = true;
		}                              //finding x in 1D-array

	}
	if (search) {
		cout << "YES";
	}
	else cout << "NO";
}