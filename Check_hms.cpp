#include <iostream>
#include <cmath>
using namespace std;
void input(int& h, int& m, int& s);
bool IsValid(int h, int m, int s);
void output(bool kt);
void input(int& h, int& m, int& s) {
	cin >> h >> m >> s;

}
bool IsValid(int h, int m, int s){
	if ((h >= 0) && (h < 24) && (m >= 0) && (m < 60) && (s >= 0) && (s < 60)) {
		return true;
	}
	else return false;
}
void output(bool kt) {
	if (kt == true) {
		cout << "Valid";
	}
	else if (kt == false) {
		cout << "Invalid";
	}

}
int main() {
	int h, m, s;
	input(h, m, s);
	bool kt = IsValid(h, m, s);
	output(kt);
}