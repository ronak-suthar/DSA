#include<iostream>
#include<vector>

using namespace std;

bool isQueenSafe(vector<vector<bool>>& arr,int row,int col){
    //check in column

    for(int i=row-1,j=col;i>=0;i--){
        if(arr[i][j]==true){
            return false;
        }
    }

    //check diagonal left

    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
        if(arr[i][j]==true){
            return false;
        }
    }

    //check diagonal right

    for(int i=row-1,j=col+1;i>=0 && j<arr[row].size();i--,j++){
        if(arr[i][j]==true){
            return false;
        }
    }

    return true;

}
void placeNQueens(vector<vector<bool>>& arr,int row=0,string output=""){
    if(row==arr.size()){
        cout<<output<<"\n";
        return;
    }

    //cout<<arr[row].size()<<arr.size();
    for(int col=0;col<arr[row].size();col++){
        
        if(isQueenSafe(arr,row,col)==true){
            arr[row][col]=true;

            placeNQueens(arr,row+1,output + "["+to_string(row)+","+to_string(col)+"]");

            arr[row][col]=false;
        }
    }
}
int main(void){
    vector<vector<bool>> arr{{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};

    placeNQueens(arr);

    return 0;
}