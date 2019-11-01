#include<iostream>
using namespace std;

long long _mergeSort(long long *arr, long long *temp, int left, int right);
long long merge(long long *arr, long long *temp, int left, int mid, int right);

long long mergeSort(long long *arr, int arr_size ) {
 	long long temp[arr_size];
	return _mergeSort(arr, temp, 0, arr_size-1);
}

long long _mergeSort(long long *arr, long long *temp, int left, int right) {
 	
	int mid;
	long long inv_count = 0;
	if( right > left) {
	 	
		mid = ( right + left) / 2;

		inv_count = _mergeSort(arr, temp, left, mid);
		inv_count += _mergeSort(arr, temp, mid+1, right);
		inv_count += merge(arr, temp, left, mid+1, right);
	}
	return inv_count;
}

long long merge(long long *arr, long long *temp, int left, int mid ,int right){  
	
	int i = left;
	int j = mid;
	long long inv_count = 0;
	int k=left;
	while((i <= mid-1) && ( j<= right)){
	 if(arr[i] < arr[j]) {
	  	temp[k++] = arr[i++];
	 }
	 else {
	  	temp[k++] = arr[j++];

		inv_count = inv_count + (mid-i);
	 }
	}

	while(i <= mid-1) {
	 temp[k++] = arr[i++];
	}

	while(j <= right) {
	 temp[k++] = arr[j++];
	}

	for(int i=left;i<=right;i++) {
	 arr[i] = temp[i];
	}

	return inv_count;

}

int main() {
 	
	int t;
	cin >> t;
	
	cout << endl;
	int size;
	while(t--) {
	 	cin >> size;
	 	long long arr[size];
		for( int i=0;i<size;i++) {
		 	cin >> arr[i];
		}

		cout <<	mergeSort(arr, size) << endl;
		cout << endl;
	}

}
