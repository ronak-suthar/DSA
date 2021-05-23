#include<iostream>

using namespace std;

int zeros(int num){
    int count=0;

    for(int i=5;i<=num;i*=5){
        count+=num/i;
    }

    return count;
}
int main(void){

    cout<<zeros(1)<<endl;
    cout<<zeros(5)<<endl;
    cout<<zeros(10)<<endl;
    cout<<zeros(15)<<endl;
    cout<<zeros(100)<<endl;

    return 0;
}