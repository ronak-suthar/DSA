#include<iostream>

using namespace std;

int factorial(int num){
    int fact=1;

    while(num!=0){
        fact*=num--;
    }
    
    return fact;
}
int main(void){

    cout<<factorial(5)<<endl;
    cout<<factorial(2)<<endl;
    cout<<factorial(1)<<endl;
    cout<<factorial(6)<<endl;

    return 0;
}