#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
{

    if (r * c != mat.size() * mat[0].size())
    {
        return mat;
    }

    vector<vector<int>> result(r, vector<int>(c));

    int newRow = 0, newCol = 0;

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            result[newRow][newCol] = mat[i][j];

            cout << newRow << " " << newCol << "\n";
            newCol += 1;

            if (newCol == c)
            {
                newRow += 1;
                newCol = 0;
            }
        }
    }

    return result;
}
int main(void)
{
    vector<vector<int>> arr{{1, 2}, {3, 4}};

    matrixReshape(arr, 1, 4);

    return 0;
}