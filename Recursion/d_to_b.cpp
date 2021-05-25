#include<iostream>
//Decimal to binary conversion using recursion
using namespace std;

unsigned int dtob(int num/*unsigned int k=0*/){
    if(num==0){
        return 0;
    }
    return (num%2 + 10*dtob(num/2));
    
}
int main(void){
    int decimal=8;
    unsigned int binary=dtob(decimal);
    cout<<binary<<endl;
    return 0;
}