#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    if (s.size() == 3) {
        string part1 = s.substr(0, 2);
        string part2 = s.substr(1, 2);
        cout << part1 << " " << part2 << endl;
    }

    return 0;
}
