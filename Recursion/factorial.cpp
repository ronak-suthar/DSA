#include<iostream>

using namespace std;
long long fact(int num){
    if(num==0 || num==1){
        return 1;
    }
    if(num==2){
        return 2;
    }
    return num*fact(--num);
}
int main(void){
    int num=5;
    cout<<fact(num)<<endl;
    return 0;
}