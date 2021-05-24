#include<iostream>
#include<vector>

using namespace std;

void two_odd_occ(const vector<int>& data){
    int exor=0,res1=0,res2=0;

    for(int ele:data){
        exor^=ele;
    }

    int set_bit = exor & ~(exor-1);

    for(int ele:data){
        if((ele & set_bit)==1){
            res1^=ele;
        }
        else{
            res2^=ele;
        }
    }

    cout<<"First Odd Element : "<<res1<<" , Second Odd Element : "<<res2<<endl;
}
int main(void){

    vector<int> data{3,4,3,4,5,4,4,6,7,7};

    two_odd_occ(data);

    /* OUTPUT

    First Odd Element : 5 , Second Odd Element : 6

    */

    return 0;
}