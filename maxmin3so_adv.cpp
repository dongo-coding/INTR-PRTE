#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a>b) swap(a,b);
    if (a>c) swap (a,c);
    if (b>c) swap (b,c);
    if (a==b && b==c) {
        cout <<"=";
    }
    else cout<<c;
}
