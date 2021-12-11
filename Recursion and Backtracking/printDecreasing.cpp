#include<iostream>

using namespace std;

void printDecreasing(int num){
    if(num<1){
        return;
    }

    cout<<num<<"\n";
    printDecreasing(num-1);
}

int main(void){
    int num = 10;
    printDecreasing(num);
    return 0;
}