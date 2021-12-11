#include <iostream>
#include <vector>

using namespace std;

vector<string> keypad(string input, const vector<string> &keys)
{
    if (input.size() == 1)
    {
        vector<string> baseResult(keys[stoi(input)].size());

        // for (char letter : keys[stoi(input)])
        // {
        //     string temp;
        //     baseResult.push_back(temp + letter);
        // }
        
        for(int i=0;i<baseResult.size();i++){
            baseResult[i]=keys[stoi(input)][i];
        }

        return baseResult;
    }

    string currKeyChars = keys[(int)(input[0] - '0')];
    vector<string> rrok = keypad(input.substr(1), keys);
    vector<string> result;

    for (int i = 0; i < currKeyChars.size(); i++)
    {
        for (string ele : rrok)
        {
            result.push_back(currKeyChars[i]+ele);
        }
    }

    return result;
}

int main(void)
{
    vector<string> keys{",;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

    vector<string> result = keypad("573", keys);

    for(string ele:result){
        cout<<ele<<" ,";
    }
    cout<<"\n";

    return 0;
}