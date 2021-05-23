#include<iostream>

using namespace std;

int is_prime(int num){
    if(num<=1){
        return false;
    }
    if(num==2 || num==3){
        return true;
    }
    if(num%2==0 || num%3==0){
        return false;
    }

    for(int i=5;i*i<=num;i+=6){
        if(num%i==0 || num%(i+2)==0){
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