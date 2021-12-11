#include<iostream>
#include<vector>
using namespace std;

vector<int> allOccurences(int *arr,int size,int idx,int query,int count){
    if(idx==size){
        return vector<int>(count);
    }

    if(arr[idx]==query){
        vector<int> result = allOccurences(arr,size,idx+1,query,count+1);
        result[count]=idx;
        return result;
    }
    else{
        vector<int> result = allOccurences(arr,size,idx+1,query,count);
        return result;
    }
}
int main(void){
    int arr[] = {10,25,64,85,20,85,68,85,10,56,85};
    vector<int> result = allOccurences(arr,sizeof(arr)/sizeof(arr[0]),0,85,0);

    for(int ele:result){
        cout<<ele<<" ";
    }
    cout<<"\n";
    
    return 0;
}