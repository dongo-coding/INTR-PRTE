#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string t;
    int s=0;
    cin>>t;
    for (int i=0;i<t.size();i++){
        if (isdigit(t[i])){
            s+=t[i]-'0';
        }
    }
    int nut=s%10;
    if (s%10==9){
        cout<<nut<<endl;
        cout<<"may man";
    }
    else if (s%10!=9) {
        cout<<nut<<endl;
        cout<<"chua may man";
    }
}
