#include <iostream>
using namespace std;
int main()
{
	int a[1000], n;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	int demc = 0, deml = 0;
	for (int i = 0;i < n;i++) {
		if (a[i] % 2 == 0) {
			demc++;
		}
		else {
			deml++;
		}
	}
	cout << "So phan tu chan trong mang la : "<< demc << endl;
	cout << "So phan tu le trong mang la : "<< deml;
}