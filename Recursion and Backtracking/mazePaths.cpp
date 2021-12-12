#include <iostream>
#include <vector>

using namespace std;

vector<string> getMazePaths(pair<int, int> src, const pair<int, int> &dest)
{

    if (src == dest)
    {
        return vector<string>{"[" + to_string(dest.first) + "," + to_string(dest.second) + "] !\n"};
    }

    vector<string> waysVertical;
    vector<string> waysHorizontal;

    if (src.first < dest.first)
    {
        waysVertical = getMazePaths({src.first + 1, src.second}, dest);
    }
    if (src.second < dest.second)
    {
        waysHorizontal = getMazePaths({src.first, src.second + 1}, dest);
    }

    vector<string> result;

    for (string way : waysHorizontal)
    {
        result.push_back("[" + to_string(src.first) + "," + to_string(src.second) + "] -> " + way);
    }
    for (string way : waysVertical)
    {
        result.push_back("[" + to_string(src.first) + "," + to_string(src.second) + "] -> " + way);
    }

    return result;
}
vector<string> getMazePathsJumps(pair<int, int> src, const pair<int, int> &dest)
{
    if (src == dest)
    {
        return vector<string>{"[" + to_string(dest.first) + "," + to_string(dest.second) + "] !\n"};
    }

    vector<string> result;

    // Horizontal Manuvre
    for (int hmove = 1; hmove <= dest.second - src.second; hmove++)
    {
        vector<string> waysHorizontal = getMazePathsJumps({src.first, src.second + hmove}, dest);

        for (string way : waysHorizontal)
        {
            result.push_back("[" + to_string(src.first) + "," + to_string(src.second) + "]" + to_string(hmove) + "H" + " -> " + way);
        }
    }

    // Vertical Manuvre
    for (int vmove = 1; vmove <= dest.first - src.first; vmove++)
    {
        vector<string> waysVertical = getMazePathsJumps({src.first + vmove, src.second}, dest);

        for (string way : waysVertical)
        {
            result.push_back("[" + to_string(src.first) + "," + to_string(src.second) + "]" + to_string(vmove) + "V" + " -> " + way);
        }
    }

    // Diagonal Manuvre
    for (int dmove = 1; dmove <= (dest.first - src.first) && dmove <= (dest.second - src.second); dmove++)
    {
        vector<string> waysDiagonal = getMazePathsJumps({src.first + dmove, src.second + dmove}, dest);

        for (string way : waysDiagonal)
        {
            result.push_back("[" + to_string(src.first) + "," + to_string(src.second) + "]" + to_string(dmove) + "D" + " -> " + way);
        }
    }

    return result;
}

int main(void)
{
    vector<string> result = getMazePathsJumps({1, 1}, {3, 3});

    for (string way : result)
    {
        cout << way;
    }
    cout << "\n";

    return 0;
}