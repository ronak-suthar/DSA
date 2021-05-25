#include<iostream>
//fibonacci series : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
//fibonacci series : f0, f1, f2,f3,f4.f5.f6.f7.f8.f9 .......
//Compute the f(n)th term
using namespace std;

int fibo(int num){
    if(num<=1){
        return num;
    }
    return fibo(num-2)+fibo(num-1);
}
int main(void){
    int num=9;
    cout<<fibo(num)<<endl;
    return 0;
}