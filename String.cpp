#include<iostream>

using namespace std;

int main() {
    string s;
    char c;
    cin>>s>>c;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==c){
            cnt++;      //counting char c such that appeared in string s;
        }
    }
    cout<<cnt;
    return 0;
}
