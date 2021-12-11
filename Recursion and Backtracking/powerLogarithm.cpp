#include<iostream>

using namespace std;

int power(int base,int expo){
    if(expo==0){
        return 1;
    }

    int basepowexpob2 = power(base,expo/2); // base power expo by 2

    int basepowexpo = basepowexpob2*basepowexpob2;

    if(expo%2==1){
        basepowexpo = basepowexpo*base;
    }

    return basepowexpo;
}
int main(void){
    cout<<power(2,4)<<"\n";
    return 0;
}