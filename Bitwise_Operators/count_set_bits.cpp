#include<iostream>

using namespace std;

int main(void){

	int x=6,count_naive=0,count_bk_algo=0;

	int temp=x;

	while(temp>0){	//O(total bits in x)
		count_naive += (temp & 1);
		temp >>= 1;
	}
	
	temp=x;

	while(temp>0){
		temp &= (temp-1);
		count_bk_algo++;
	}
	
	cout<<"Number of set bits are using naive approach: "<<count_naive<<endl;
	cout<<"Number of set bits are using bk algo: "<<count_bk_algo<<endl;

	return 0;
}

