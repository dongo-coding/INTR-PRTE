#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>pos,neg;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if (a[i] > 0) pos.push_back(a[i]);
        else if (a[i] < 0) neg.push_back(a[i]);
    }
    cout<<pos.size()<<" "<<neg.size()<<endl;
    
    for (int x : pos) cout<<x<<" ";
    cout<<endl;
    
    for(int x : neg) cout<<x<<" ";
    cout<<endl;
   
}
