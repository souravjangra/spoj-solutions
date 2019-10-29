#include<iostream>
#include<algorithm>
using namespace std;

int main() {
 	
	int t;
	cin >> t;

	int n,k,sum;
	for(int m=1;m<=t;m++){

		sum = 0;
	 	cin >> n >> k;
		int arr[k];
		int count = 0;
		for(int i=0;i<k;i++) {
		 	cin >> arr[i];
		}

		sort(arr,arr+k, greater<int>());

		for(int i=0;i<k;i++) {
		 	if( sum >= n) {
				break;
			}
			sum = sum + arr[i];
			count++;
		}

		if(sum < n) {
		 cout << "Scenario #"<<m<<":"<<endl;
		 cout << "impossible"<<endl;
		 cout << endl;
		}
		else { 
		cout << "Scenario #"<<m<<":"<<endl;
		cout << count << endl;
		cout << endl;
		}
	}

}
