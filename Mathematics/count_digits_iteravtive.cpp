#include<iostream>

using namespace std;

int count_digits(int num){
    int count=0;

    if(num<=9){
        return 1;
    }
    while(num>0){
        num/=10;
        count++;
    }

    return count;
}
int main(void){

    cout<<count_digits(0)<<endl;
    cout<<count_digits(10)<<endl;
    cout<<count_digits(1)<<endl;
    cout<<count_digits(500)<<endl;


    return 0;
}