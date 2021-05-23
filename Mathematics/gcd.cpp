#include<iostream>

using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }

    return gcd(b,a%b);
}
int main(void){

    cout<<gcd(5,15)<<endl;
    cout<<gcd(12,15)<<endl;
    cout<<gcd(8,56)<<endl;
    cout<<gcd(7,23)<<endl;

    return 0;
}