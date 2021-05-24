#include<iostream>

using namespace std;

int main(void){
	int arr[]={1,5,3,2}; //1 to n+1
	int n=sizeof(arr)/sizeof(arr[0]);

	int ele=0;

	for(int i=0;i<n;i++){
		ele ^= arr[i];
	}
	for(int i=1;i<=n+1;i++){
		ele ^= i;
	}

	cout<<ele<<endl;

	return 0;
}


