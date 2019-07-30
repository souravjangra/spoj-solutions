#include<bits/stdc++.h>
using namespace std;

int main(){

				string s;
				long long dp[5001];
				int len = 0;

				while(1) {

								cin >> s;
								if(s[0] == '0')
												break;
								len = s.size();
								for(int i=0;i<5001;i++){
												dp[i] = 0;
								}
								dp[0] = 1;
								dp[1] = 1;

								for(int i=2;i<=len;i++){

									char c1 = s[i-2]-'0',c2=s[i-1]-'0';
												if(c2 != 0){
																dp[i] = dp[i-1];
												}
												if(c1 == 1 || (c1 == 2 && c2 <=6))
																dp[i] += dp[i-2];

								}
								cout << dp[len] << endl;	

				}

}

