#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int>& row){
    for(int i=0,j=row.size()-1;i<j;i++,j--){
        swap(row[i],row[j]);
    }
}
void transpose(vector<vector<int>>& arr){
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr[i].size();j++){
            if(i!=j){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }

}
void rotateMatrix(vector<vector<int>> arr){
    transpose(arr);
    
    for(int i=0;i<arr.size();i++){
        reverse(arr[i]);
    }

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout<<"\n";
    }

}

int main(void)
{
    int row, col;

    cin >> row >> col;

    vector<vector<int>> arr(row, vector<int>(col));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    rotateMatrix(arr);

    return 0;
}