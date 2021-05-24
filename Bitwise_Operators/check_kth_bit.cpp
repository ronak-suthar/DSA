#include<iostream>
#include<cmath>
using namespace std;

int main(void){
	int x=5,k=3;
	
	(1 << (k-1) & x) ? cout<<"yes\n" : cout<<"no\n" ;

	return 0;
}
