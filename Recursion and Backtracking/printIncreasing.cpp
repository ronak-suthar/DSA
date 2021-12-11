#include<iostream>

using namespace std;

void printIncreasing(int num){
    if(num<1){
        return;
    }
    
    printIncreasing(num-1);
    cout<<num<<"\n";
}

int main(void){
    int num = 10;
    printIncreasing(num);
    return 0;
}