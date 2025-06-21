//Sum all elements in 2D-Arr
#include<iostream>

using namespace std;

int main() {
    int a[100][100];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    long long S=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            S+=a[i][j];
        }
    }
    cout<<S;
    return 0;
}


//Sum such that element divisible by 5 in 2D-Arr
#include<iostream>

using namespace std;

int main() {
    int a[1000][1000];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    long long S=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]%5==0){
                S+=a[i][j];
            }
        }
    }
    cout<<S;
    return 0;
}






