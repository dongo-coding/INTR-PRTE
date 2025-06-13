#include <iostream>
#include <cmath>
using namespace std;
void input(double& a);
int lamtron(double a);
void output(int kq);
void input(double& a) {
	cin >> a;
}
int lamtron(double a){
	int t = (int)a;
	double p = a - t;
	if (p >= 0.5 || p <= -0.5) {
		t++;
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
	int kq = lamtron(a);
	output(kq);
}
