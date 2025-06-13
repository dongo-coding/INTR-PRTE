#include <iostream>
using namespace std;
int findmaxG(int a[], int n) {
	int g = 0;
	long long sum = 0;

	for (int i = 0;i < n;i++) {
		sum += a[i];
		if (sum >= (long long)(i + 1) * (i + 1)) {
			g = i + 1;
		}
		else
		{
			break;
		}
	}
	return g;
}

int main()
{
			int a[100];
			int n;
			cin >> n;
			for (int i = 0;i < n;i++) {
				cin >> a[i];
			}
			cout << findmaxG(a, n) << endl;
}