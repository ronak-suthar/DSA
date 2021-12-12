#include <iostream>
#include <string>
using namespace std;

char encode(string num)
{
    int charNum = stoi(num);

    if(charNum>26){
        return '!';
    }

    return (char)('a'+charNum-1);
}

void printEncoding(string str, string output="")
{

    if (str.size() == 0)
    {
        cout << output << "\n";
        return;
    }
    if (str[0] == '0')
    {
        return;
    }

    // First Call for single digit to be encoded
    char code1 = encode(str.substr(0,1));
    string restofQuery = str.substr(1);

    printEncoding(restofQuery, output + code1);

    // Second call for two digits to be encoded
    if (str.size() > 1 && encode(str.substr(0,2))!='!')
    {   
        string restofQuery = str.substr(2);
        printEncoding(restofQuery, output + encode(str.substr(0,2)));
    }
}

int main()
{
    string str;
    cin >> str;

    printEncoding(str);

    return 0;
}