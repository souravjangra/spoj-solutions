#include<bits/stdc++.h>
using namespace std;

int main(){
 	int t;
	cin >> t;

	while(t--){
	 	string str;
		getline(cin, str);
		while(str.length() == 0){
		 	getline(cin, str);
		}

		int i = str.find(" + ");
		string s1 = str.substr(0,i);
		int j = str.find(" = ");
		string s2 = str.substr(i+3,j-i-3);
		string s3 = str.substr(j+3,str.length()-j+i+3);
		
		int index = 0;
		for(int k=0;str[k] != 'm';k++){
		 	index = k;
		}
		index++;
		int x=0,y=0,z=0;
		if(index >= 0 && index < i){
		 		y = stoi(s2);
				z = stoi(s3);
				x = (y>z) ? y-z : z-y;
				cout << x << " + " << y << " = " << z << endl;
		}
		else if(index > i+2 && index < j){
		 		x = stoi(s1);
				z = stoi(s3);
				y = (x>z) ? x-z : z-x;
				cout << x << " + " << y << " = " << z << endl;
		}
		else if(index > j+2 && index < str.length()){
		 		x = stoi(s1);
				y = stoi(s2);
				z = x+y;
				cout << x << " + " << y << " = " << z << endl;
		}
	}
}
