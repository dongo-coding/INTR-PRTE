#include <iostream>
#include <string>
using namespace std;
void input(char& a);
char cd(char b);
void output(char kq);
void input(char& a) {
	cin >> a;
}
char cd(char b){
	if (b >= 'a' && b <= 'z') {
		b = b - 32;
	}
	else if (b >= 'A' && b <='Z'){
		b = b + 32;
	}
	return b;
}
void output(char kq) {
	cout << kq;
}
int main()
{
	char(a);
	input(a);
	char kq = cd(a);
	output(kq);
}
