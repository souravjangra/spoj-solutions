#include<iostream>
#define ll long long int
using namespace std;

int modExp(ll a,ll b,ll c){
		
		if(a == 0){
			return 0;
		}
		if(b == 0){
			return 1;
				}
				long ans;
		if((b%2) == 0){
				long smallAns = modExp(a,b/2,c);
				ans = (smallAns*smallAns)%c;

				}
		else{
				long smallAns = modExp(a,b-1,c);
				ans = (a%c);
				ans = (ans*smallAns)%c;
				
				}
				return int((ans+c)%c);

		}

int main(){
		
		int t;
		cin >> t;
		while(t--){
				
		ll a,b,c;
		cin >> a >> b;
		int ans = modExp(a,b,10);
		cout<<ans<<endl;

				}

		
		}
