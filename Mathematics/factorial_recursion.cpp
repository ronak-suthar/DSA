#include<iostream>

using namespace std;

int factorial(int num){
    if(num<1){
        return 1;
    }
    return num*factorial(num-1);
}
int main(void){

    cout<<factorial(5)<<endl;
    cout<<factorial(2)<<endl;
    cout<<factorial(1)<<endl;
    cout<<factorial(6)<<endl;

    return 0;
}