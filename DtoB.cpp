#include <iostream>
#include <string>
#include <vector>
using namespace std;

pair<string, int> divideBy2(string num) {
    string result = "";
    int carry = 0;
    for (char c : num) {
        int current = carry * 10 + (c - '0');
        result += (current / 2) + '0';
        carry = current % 2;
    }

    result.erase(0, result.find_first_not_of('0'));
    if (result == "") result = "0";
    return { result, carry };
}

string bigDecimalToBinary(string num) {
    if (num == "0") return "0";
    string binary = "";
    while (num != "0") {
        pair<string, int> res = divideBy2(num);
        string quotient = res.first;
        int remainder = res.second;
        binary = char('0' + remainder) + binary;
        num = quotient;
    }
    return binary;
}

int main() {
    int T;
    cin >> T;
    vector<string> numbers(T);

    for (int i = 0; i < T; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < T; i++) {
        cout << bigDecimalToBinary(numbers[i]) << endl;
    }
}
