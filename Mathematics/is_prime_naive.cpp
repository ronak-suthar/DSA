#include<iostream>

using namespace std;

bool is_prime(int num){
    if(num<=1){
        return false;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
        }
    }

    return true;
}
int main(void){

    cout<<is_prime(5)<<endl;
    cout<<is_prime(20)<<endl;
    cout<<is_prime(3)<<endl;
    cout<<is_prime(7)<<endl;
    cout<<is_prime(13)<<endl;

    return 0;
}