#include<iostream>
#include<boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;

int main(){

				int1024_t total;
				int1024_t greater;

				int t=10;
				while(t--){

								cin >> total;
								cin >> greater;

								int1024_t x = (total+greater)/2;
								int1024_t y = (total-greater)/2;

								cout << x << "\n" << y << "\n";


				}


}

