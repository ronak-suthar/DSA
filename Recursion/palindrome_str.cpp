#include<iostream>
#include<string>
using namespace std;

bool is_pal(string &str,int end,int start=0){
	if(start>=end){
		return true;
	}

	return (str[start]==str[end]) ? is_pal(str,end-1,start+1) : false;
}
int main(void){
	string str;
	cin>>str;
	
	is_pal(str,str.length()-1) ? cout<<"YES\n" : cout<<"NO\n" ;

	return 0;
}
