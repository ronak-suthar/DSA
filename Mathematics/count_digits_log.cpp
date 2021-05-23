#include<iostream>
#include<cmath>

using namespace std;

int count_digits(int num){

    return num<=9 ? 1 : floor(log10(num)+1);
}
int main(void){

    cout<<count_digits(0)<<endl;
    cout<<count_digits(10)<<endl;
    cout<<count_digits(1)<<endl;
    cout<<count_digits(500)<<endl;
    return 0;
}