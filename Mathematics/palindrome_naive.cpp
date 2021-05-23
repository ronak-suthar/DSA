#include<iostream>

using namespace std;

bool palindrome(int num){
    int rev=0,temp=num;

    while(temp>0){
        rev = rev*10 + temp%10;
        temp/=10;
    }

    if(rev==num){
        return true;
    }
    return false;
}
int main(void){
    cout<<palindrome(1111)<<endl;
    cout<<palindrome(1221)<<endl;
    cout<<palindrome(1523)<<endl;
    cout<<palindrome(2000)<<endl;
    cout<<palindrome(3500)<<endl;
    cout<<palindrome(1587)<<endl;
    return 0;
}