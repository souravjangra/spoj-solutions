#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll arr[1000001];

ll f(ll n){
	if( n < 1000000 && arr[n]!=-1){
		return arr[n];
	}
	else if( n < 12)
	{
		arr[n] = n;
		return arr[n];
	}
	else if( n < 1000000)
	{
		arr[n] = f(n/2)+f(n/3)+f(n/4);
		return arr[n];
	}
	else{
		return (f(n/2)+f(n/3)+f(n/4));


	}
}
int main(){

	memset(arr,-1,sizeof(arr));
	while(1){

		ll n;
		if(cin>>n){


			ll ans = f(n);
			cout<<ans<<endl;}
		else break;

	}

	return 0;
}
