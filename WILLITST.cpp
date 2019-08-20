#include<iostream>
#define ll long long int
using namespace std;

int main(){

	ll n;
	cin >> n;
	ll result = n&(n-1);
	if( result == 0){
					 cout << "TAK";
	}
	else{
					 cout << "NIE";
	}



}

