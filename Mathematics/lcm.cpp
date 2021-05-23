#include<iostream>

using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int lcm(int a,int b){
    
    return (a*b)/gcd(a,b);
}
int main(void){

    cout<<lcm(10,20)<<endl;
    cout<<lcm(15,12)<<endl;
    cout<<lcm(5,4)<<endl;
    cout<<lcm(2,3)<<endl;
    cout<<lcm(6,9)<<endl;

    return 0;
}