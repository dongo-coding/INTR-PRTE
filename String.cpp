#include<iostream>

using namespace std;

int main() {
    for(char c='A';c<='Z';c++){
        cout<<c;                   //print alphabet following uppercase string
    }
    return 0;
}




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
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;                     //uppercase string to lowercase string
        }
    }
    cout<<s;
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





#include<iostream>

using namespace std;

int main() {
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            cnt++;                     //counting the uppercase char in string
        }
    }
    cout<<cnt;
    return 0;
}




#include<iostream>

using namespace std;

int main() {
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='3'){
            s[i]='e';               //string s after change from '3' to 'e'
        }
    }
    cout<<s;
    return 0;
}

