#include<iostream>

using namespace std;

int power(int num,int expo){
    int result=1;

    while(expo--!=0){
        result*=num;
    }

    return result;
}
int main(void){

    cout<<power(0,3)<<endl;

    return 0;
}