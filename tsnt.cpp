#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool checkPrime(int a) {
	if (a < 2) return false;
	if (a == 2 || a == 3) return true;
	if (a % 2 == 0 || a % 3 == 0) return false;
	for (int i = 5;i <= sqrt(a);i += 6) {
		if (a % i == 0 || a % (i + 2) == 0) {
			return false;
		}
	}
	return true;

}
int main()
{
	int n;
	cin >> n;
	vector<int>a(n);
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for (int i = 0;i < n;i++) {
		if (checkPrime(a[i])) {
			if (a[i] != a[i - 1]) {
				cout << a[i] << " "; //find Prime number in 1D-Array, if appear 2 times print only one
			}
		}
	}

}