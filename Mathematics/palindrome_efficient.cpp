#include<iostream>
#include<cmath>

using namespace std;

bool palindrome(int num){
    
    if(num<=9){
        return true;
    }

    int divisor = 1;
    while (num / divisor >= 10)
        divisor *= 10;
    
    while(num!=0){
        int lead = num/divisor;
        int trail = num%10;

        if(lead!=trail){
            return false;
        }

        num = (num%divisor) / 10;

        divisor/=100; 
    }

    return true;

    return false;
}
int main(void){

    cout<<palindrome(1111)<<endl;
    cout<<palindrome(1000)<<endl;
    cout<<palindrome(121)<<endl;
    cout<<palindrome(1)<<endl;


    return 0;
}