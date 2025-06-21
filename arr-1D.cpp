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



