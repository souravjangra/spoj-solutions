#include<iostream>
#define ll long long int
using namespace std;

int main(){

	ll t;
	cin >> t;
	ll k;
	while( t-- ){
					 cin >> k;
					 ll ans = 192;
					 if(k == 1){
									 cout << ans;
					 }
					 else{
									  cout << ans+(k-1)*250;
					 }
					 cout << endl;

	}



}

