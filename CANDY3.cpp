#include<iostream>
#define ll long long int
using namespace std;

int main(){

		ll t;
		cin >> t;
		ll candy;
		while(t--){
				cout << "\n";
				cin >> candy;
				ll x,sum = 0;
				for(int i=0;i<candy;i++){
						cin >> x;
						sum = (sum+x)%candy;
				}


				if((sum%candy) == 0){
						cout << "YES";
				}
				else{
						cout << "NO";
				}

		}

}

