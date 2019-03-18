#include<bits/stdc++.h>
using namespace std;

bool min_dist(long long arr[],int n,int c,long long distance){

	int count = 1;
	long long last_position = arr[0];
	for(int i=0;i<n;i++){
		if((arr[i]-last_position)>=distance){
			last_position = arr[i];
			count += 1;
		}
		if(count == c){
			return true;
		}

	}
	return false;


}

long long b_search(long long arr[],int n,int c){

	long long start = 0 , end = arr[n-1] - arr[0];
	long long mid = 0;
	long long ans = -1;
	while(start <= end){

		mid = start + (end-start)/2;

		if(min_dist(arr,n,c,mid)){
			ans = mid;
			start = mid + 1;
		}
		else{
			end = mid - 1;
		}

	}
	return ans;
}

int main(){

	int t;
	cin>>t;

	while(t--){

		int n,c;
		cin>>n>>c;

		long long arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);

		int result = b_search(arr,n,c);
		cout<<result<<endl;
	}
}