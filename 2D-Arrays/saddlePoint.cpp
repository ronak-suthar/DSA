#include <iostream>
#include <vector>
using namespace std;

void saddle_point(int n, vector<vector<int>> &arr)
{
    // write your code here

    for(int i=0;i<arr.size();i++){
        int svr = 0; // smallest value in row index of the column

        for(int j=1;j<arr[i].size();j++){
            if(arr[i][j]<arr[i][svr]){
                svr = j;
            }
        }

        int lvc = 0; //largest value in column index of the row

        bool isLargest = true;

        for(int k=0;k<arr.size();k++){
            if(arr[i][svr]<arr[k][svr]){
                isLargest = false;
                break;
            }
        }

        if(isLargest==true){
            cout<<arr[i][svr]<<"\n";
            return;
        }

    }

    cout<<"Invalid input\n";
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    
    saddle_point(n, arr);
}