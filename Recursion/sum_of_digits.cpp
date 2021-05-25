#include<iostream>

using namespace std;

int sum_of_digits(int num){
	if(num<=9){
		return num;
	}
	return num%10 + sum_of_digits(num/10);
}
int main(void){
	int num; cin>>num;
	
	cout<<"Sum of digits in "<<num<<"  is : "<<sum_of_digits(num)<<endl;
	
	return 0;
}

