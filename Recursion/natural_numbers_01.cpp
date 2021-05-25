#include<iostream>

using namespace std;

int sum_nat_num(int num,int k=0){
	if(num==0){
		return k;
	}
	return sum_nat_num(num-1,k+num);
}
int main(void){
	int n; cin>>n;	
	cout<<"Sum upto "<<n<<" is : "<<sum_nat_num(n)<<endl;
	return 0;
}
