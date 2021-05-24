#include<iostream>
#include<cmath>
using namespace std;

void sub_strs(const string& str){
	int len=str.length();
	int powset=pow(2,len);

	for(int i=0;i<powset;i++){
		for(int j=0;j<len;j++){
			if((i & (1 << j))!= 0){
				cout<<str[j];
			}
		}
		cout<<endl;
	}

	return;
}
int main(void){

	string str="abc";

	sub_strs(str);

	/* OUTPUT

	a
	b
	ab
	c
	ac
	bc
	abc

	*/

	return 0;
}
