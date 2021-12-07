#include <iostream>
#include <vector>

using namespace std;

void exitPoint(vector<vector<int>> arr)
{
    int dir = 0; // east = 0,south = 1,west = 2, north = 3
    int row = 0, col = 0;

    while (true)
    {
        dir = (dir + arr[row][col]) % 4;

        if (dir == 0)
        {
            col++;
        }
        else if (dir == 1)
        {
            row++;
        }
        else if (dir == 2)
        {
            col--;
        }
        else if (dir == 3)
        {
            row--;
        }

        if(row<0){
            cout<<row+1<<" "<<col<<"\n";
            break;
        }
        else if(col<0){
            cout<<row<<" "<<col+1<<"\n";
            break;
        }
        else if(row == arr.size()){
            cout<<row-1<<" "<<col<<"\n";
            break;
        }
        else if(col == arr[0].size()){
            cout<<row<<" "<<col-1<<"\n";
            break;
        }
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

    exitPoint(arr);

    return 0;
}