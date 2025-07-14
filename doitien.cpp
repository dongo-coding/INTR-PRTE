#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    cin>>N;
    int c_t1=N/5000;
    N%=5000;
    int c_t2=N/2000;
    N%=2000;
    int c_t3=N/1000;
    N%=1000;
    cout<<c_t1<<" "<<c_t2<<" "<<c_t3;
}
