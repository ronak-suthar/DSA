//Print all the numbers form 1 to n
#include<iostream>

using namespace std;

void print(int n){//Non-Tail Recursion
	if(n==0){
		return;
	}
	print(n-1);
	cout<<n<<" ";
}
void print_new(int n,int k=1){//Using Tail Recursion & Default Parameters
        if(n==0){
                return;
        }
        cout<<k<<" ";
        print_new(--n,++k);
}


int main(void){
	
	print(10);
	cout<<endl;

	print_new(10);
	cout<<endl;

	return 0;
}
