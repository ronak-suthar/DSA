#include<iostream>

using namespace std;

int odd_occurance(int* ptr,int size){
	int ele=0;

	for(int i=0;i<size;i++){
		ele ^= ptr[i];
	}

	return ele;
}
int main(void){
	
	int arr[]={4,5,4,3,5,2,1,1,2};

	cout<<"Number of odd occurances are : "<<odd_occurance(arr,sizeof(arr)/sizeof(arr[0]))<<endl;

	return 0;
}
