#include<iostream>
#include<vector>

using namespace std;

void waveDisplay(vector<vector<int>> arr){
    
    for(int col=0;col<arr[0].size();col++){
        if(col%2==0){
            for(int row = 0;row<arr.size();row++){
                cout<<arr[row][col]<<" ";
            }
        }
        else{
            for(int row = arr.size()-1;row>=0;row--){
                cout<<arr[row][col]<<" ";
            }
        }
        cout<<"\n";
    }
}

int main(void){
    int row,col;

    cin>>row>>col;

    vector<vector<int>> arr(row,vector<int>(col));

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    waveDisplay(arr);
    
    return 0;
}