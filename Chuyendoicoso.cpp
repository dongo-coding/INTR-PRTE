#include <iostream>
#include <string>
using namespace std;
std::string np( long long n) {
	if (n == 0) return "0";
	string result = "";
	while (n > 0) {
		result += (n % 2 == 0 ? "0" : "1");
		n = n / 2;
	}
	reverse(result.begin(), result.end());
	return result;
}

int main ()
{
	unsigned long long n;
	cin >> n;
	cout << np(n);

}