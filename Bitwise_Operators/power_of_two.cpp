#include<iostream>

using namespace std;

//1,2,4,8,16...........

bool count_set_bits(int temp){
	//int count=0;

	if(temp==0){
		return false;
	}
	
	if( (temp &= (temp-1)) == 0){
		return true;
	}
	
	return false;

	/*

	while(temp>0){//Brian and Kerninghams algo O(number of set bits)
		temp &= (temp-1);
		count++;
	}

	return count;

	*/
}
int main(void){
	int x=32;

	if(count_set_bits(x)==1){
		cout<<"Yes, "<<x<<" is a power of two\n";
	}
	else{
		cout<<"No, "<<x<<" is not a power of two\n";
	}

	return 0;
}
