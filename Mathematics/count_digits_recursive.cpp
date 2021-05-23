#include<iostream>

using namespace std;

int count_digits(int num){
    if(num<=9){
        return 1;
    }
    return 1 + count_digits(num/10);
}
int main(void){

    cout<<count_digits(0)<<endl;
    cout<<count_digits(10)<<endl;
    cout<<count_digits(1)<<endl;
    cout<<count_digits(500)<<endl;
    
    return 0;
}