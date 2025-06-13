#include <iostream>
#include <string>
using namespace std;


char findFirstCharNotDuplicate(const string& s) {
    int freq[256] = { 0 };


    for (char c : s) {
        freq[(unsigned char)c]++;
    }


    for (char c : s) {
        if (freq[(unsigned char)c] == 1) {
            return c;
        }
    }


    return '\0';
}

int main() {
    string s;
    cin >> s;

    char result = findFirstCharNotDuplicate(s);
    if (result != '\0') {
        cout << result << endl;
    }
    else {
        cout << endl;
    }

}
