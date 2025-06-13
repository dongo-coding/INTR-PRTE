#include <iostream>
#include <cmath>
using namespace std;
void input(double& a);
int sngn(double a);
void output(int kq);
void input(double& a) {
	cin >> a;
}
int sngn(double a) {
	int t = (int)a;
	if ((a == t) || (a < 0)) {
		return t;
	}
	else if (a > 0) {
		t += 1;
	}
	return t;

}
void output(int kq) {
	cout << kq;
}
int main()
{
	double a;
	input(a);
	int kq = sngn(a);
	output(kq);
}