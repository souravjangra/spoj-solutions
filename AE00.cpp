#include<iostream>
#include<cmath>
using namespace std;

int sum_rect(int n){
	
	int count = 1;
	int sr = sqrt(n);
	for(int i=2;i<=sr;i++){
		if(n%i == 0){
			count++;	
			}
	}
	
	return count;
	}
int main(){

	int n;
	cin >> n;
	
	int sum = 0;
	for(int i=1;i<=n;i++){
		sum += sum_rect(i);
		
		}
		cout<<sum<<endl;
}
