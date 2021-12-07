#include <iostream>
#include <vector>
using namespace std;

void upperDiagonal_traverse(int n, vector<vector<int>> &arr)
{
    // write your code here

    for(int col = 0 ;col < arr[0].size();col++){

        int j=col,i=0;//j represents column index and i represent row index

        while(j<arr[0].size() && i<arr.size()){
            cout<<arr[i][j]<<"\n";
            i+=1;j+=1;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    
    upperDiagonal_traverse(n, arr);
}