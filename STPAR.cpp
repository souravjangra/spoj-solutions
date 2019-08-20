#include<iostream>
#include<stack>
using namespace std;

int main(){
	
	int n;
	int arr[1111];
	while(cin>>n && n!=0){
		for(int i=0;i<n;i++){
				 cin >> arr[i];
		}
		int x = 1;
		stack<int> s;
		bool result = true;
		for(int i=0;i<n;i++){
				while(!s.empty() && s.top() == x){
						 s.pop();
						 x++;
				}
				 if(arr[i] == x){
						 x++;
				 }
				 else if(!s.empty() && s.top() < arr[i]){
						  result = false;
						  break;
				 }
				 else{
						  s.push(arr[i]);
				 }
		}
		if(result){
				 cout << "yes" << endl;
		}
		else{
				 cout << "no" << endl;
		}
		
	}

}

