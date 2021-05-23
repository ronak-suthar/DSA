#include<iostream>
#include<vector>

using namespace std;

void primes(int num){
    vector<bool> are_primes(num+1,true);

    for(int i=2;i<num;i++){
        if(are_primes[i]){
            cout<<i<<" ,";
            for(int j=i*i;j<=num;j+=i){
                are_primes[j]=false;
            }
        }
    }
    /*
    for(int i=2;i<=num;i++){
        if(are_primes[i]){
            cout<<i<<" ,";
        }
    }
    */
    cout<<endl;
}
int main(void){

    primes(20);

    return 0;
}