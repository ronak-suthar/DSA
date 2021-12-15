#include<iostream>
#include<vector>

using namespace std;

void display(vector<vector<int>>& arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void knightsTour(vector<vector<int>>& arr,int row,int col,int count){
    if(row<0 || col<0 || row>=arr.size() || col>=arr[row].size() || arr[row][col]>0){
        return;
    }

    if(count == arr.size()*arr[col].size()){
        arr[row][col]=count;
        display(arr);
        arr[row][col]=0;
        cout<<"---------------\n";
        return;
    }

    arr[row][col]=count;
    knightsTour(arr,row-2,col+1,count+1);
    knightsTour(arr,row-1,col+2,count+1);
    knightsTour(arr,row+1,col+2,count+1);
    knightsTour(arr,row+2,col+1,count+1);
    knightsTour(arr,row+2,col-1,count+1);
    knightsTour(arr,row+1,col-2,count+1);
    knightsTour(arr,row-1,col-2,count+1);
    knightsTour(arr,row-2,col-1,count+1);
    arr[row][col]=0;
}
int main(void){
    vector<vector<int>> arr{{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};

    knightsTour(arr,2,0,1);

    return 0;
}