#include<iostream>
#include<string>
using namespace std;

void RevOfStr(const string& str,int len){
    if(len==0){
        cout<<str[0]<<endl;
        return;
    }
    cout<<str[len];
    RevOfStr(str,--len);
}
int main(void){
    string str="Hello Ycce";
    RevOfStr(str,str.length()-1);
    return 0;
}