#include<iostream>

using namespace std;

int maxOfArray(int *arr,int idx,int size){

    if(idx+1==size){
        return idx;
    }

    int mia = maxOfArray(arr,idx+1,size); //maximum index ahead

    if(arr[mia]<arr[idx]){
        return idx;
    }
    else{
        return mia;
    }
}
int main(void){

    int arr[]={10,2,8,43,52,10,23,50};

    cout<<maxOfArray(arr,0,sizeof(arr)/sizeof(arr[0]))<<"\n";

    return 0;
}