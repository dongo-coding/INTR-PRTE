#include <iostream>
#include <algorithm>
int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
using namespace std;
int main()
{
	int ts, ms;
	cin >> ts >> ms;
	int ucln = gcd(ts, ms);
	ts /= ucln;
	ms /= ucln;
	if (ms < 0) {
		ts = -ts;
		ms = -ms;
	}
	if (ms == 0) {
		cout << "INVALID";
	}
	else if (ms == 1) {
		cout << ts;
	}
	else cout << ts << " " << ms;  //Simplify the fraction, if the result is an integer print it.

}