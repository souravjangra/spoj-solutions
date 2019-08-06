#include<iostream>
#include<cstdio>
#define ll long long int
using namespace std;

int main(){

	double c,sum = 0;
	while(1){
					 cin >> c;
					 if(c == 0.00){
									  break;
					 }
					 int count = 2;
					 while(sum <= c){
							sum += 1/(float)count;
							if(sum > c){
								sum = 0;
								break;				 
							}
							else
							count++;					 
							 
					 }
					 
					 cout << (count-1) << " card(s)" << endl; 
	}



}

