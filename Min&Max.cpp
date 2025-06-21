#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
    cout << a << " " << c;
}

**Advanced
#include<iostream>

using namespace std;

int main() {
	int a,b,c;
    cin>>a>>b>>c;
    int max = (a>b && a>c) ? a: (b>c ? b : c); //find max by "toan tu 3 ngoi"
    cout<<max;
}
