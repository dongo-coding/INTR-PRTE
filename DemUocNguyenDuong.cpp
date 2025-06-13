#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	long long dem = 0;
	for (long long i = 1;i <= sqrt(n);i++) {
		if (n % i == 0) {
			dem++; //subtask 1
		if (n / i != i) {
				dem++; //subtask 2

			}
		}
	}
	cout << dem;
}