#include <iostream>
using namespace std;
int main()
{
	int h, m, s;
	cin >> h >> m >> s;
	if (h >= 0 && h <= 23) {
		if (m >= 0 && m <= 59) {
			if (s >= 0 && s <= 59) {
				s += 1;
				if (s == 60) {
					s = 0;
					m += 1;
				}
				if (m == 60) {
					m = 0;
					h += 1;
				}
				if (h == 24) {
					h = 0;
				}
			}
		}
	}
	cout << h << " " << m << " " << s;
}