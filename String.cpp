#include<iostream>

using namespace std;

int main() {
    string s;
    char c;
    cin>>s>>c;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==c){
            cnt++;      //counting char c such that appeared in string s
        }
    }
    cout<<cnt;
    return 0;
}



#include<iostream>

using namespace std;

int main() {
    string s;
    char c;
    cin >> s >> c;
    int index=-1;
    for(int i=0;i<s.size();i++){
        if(s[i]==c){
            index=i;  //find first pos such that char c appear in string s
            break;
        }
    }
    cout<<index;
    return 0;
}



#include<iostream>

using namespace std;

int main() {
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){   
            s[i]-=32;                    //lowercase string to uppercase string
        }
    }
    cout<<s;
    return 0;
}
