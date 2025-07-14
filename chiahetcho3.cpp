#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    bool found=false;
    cin>>n;
    for(int i=1;i<=n;i++){
        if (i%3==0){
            cout<<i<<" ";
            found=true;
        }
    }
    if (!found){
        cout<<"-";
    }

}
