#include <iostream>
#include <vector>

using namespace std;

void spiralDisplay(vector<vector<int>> arr)
{
    int minRow = 0, minCol = 0, maxRow = arr.size() - 1, maxCol = arr[0].size() - 1;
    int totalElements = (maxRow + 1) * (maxCol + 1);
    int countElements = 0;

    while (countElements < totalElements)
    {
        // left wall

        for (int i = minRow; i <= maxRow && countElements < totalElements; i++)
        {
            cout << arr[i][minCol] << " ";
            countElements++;
        }
        cout<<"\n";
        minCol++;

        // bottom wall

        for (int j = minCol; j <= maxCol && countElements < totalElements; j++)
        {
            cout << arr[maxRow][j] << " ";
            countElements++;
        }
        cout<<"\n";
        maxRow--;

        // right wall

        for (int k = maxRow; k >= minRow && countElements < totalElements; k--)
        {
            cout << arr[k][maxCol]<<" ";
            countElements++;
        }
        cout<<"\n";
        maxCol--;

        // top wall

        for (int l = maxCol; l >= minCol && countElements < totalElements; l--)
        {
            cout << arr[minRow][l]<<" ";
            countElements++;
        }
        cout<<"\n";
        minRow++;
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

    spiralDisplay(arr);

    return 0;
}