#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i += 2) {
        int left = (i - 1 >= 0) ? a[i - 1] : 0;
        int right = (i + 1 < n) ? a[i + 1] : 0;
        a[i] += abs(right - left);               //transforming the 1D-array
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}





#include <iostream>

using namespace std;

void sortArray(int a[1000], int n) {
	for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] < a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main() {
	int n;
	int a[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sortArray(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

	return 0;
}




#include <iostream>

using namespace std;

int sumOfArray(int a[1000], int n) {
    int s=0;
    for(int i=0;i<n;i++){
        s+=a[i];
    }
    return s;
}

int main() {
	int n;
	int a[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << sumOfArray(a, n);
	return 0;
}




#include <iostream>

using namespace std;

int maxOfArray(int a[1000], int n) {
    int maxVal=a[0];
	for(int i=0;i<n;i++){
        if(a[i]>maxVal){
            maxVal=a[i];
        }
    }
    return maxVal;
}

int main() {
	int n1, n2;
	int a1[1000], a2[1000];
	cin >> n1;
	for (int i = 0; i < n1; i++) {
		cin >> a1[i];
	}
	cin >> n2;
	for (int i = 0; i < n2; i++) {
		cin >> a2[i];
	}

	cout << maxOfArray(a1, n1) << " " << maxOfArray(a2, n2);

	return 0;
}


#include <iostream>

using namespace std;

void show(string a[1000], int n) {
	for(int i=0;i<n;i++){
        if(a[i].size()>=3){
            cout<<a[i]<<" ";
        }
    }
}

int main() {
	int n;
	string a[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	show(a, n);
	return 0;
}





