#include<iostream>
#include<vector>
using namespace std;

vector<string> subSequences(string str){
    if(str.size()==0){
        return vector<string>{""};
    }

    char curr = str[0];//current char at index 0
    string ros = str.substr(1);//rest of string from index 1 onward
    vector<string> resros = subSequences(ros);//result for rest of string by recrusion with faith
    vector<string> rescurr;//to store result of this recursive call

    for(string ele:resros){
        rescurr.push_back(""+ele);
    }
    for(string ele:resros){
        rescurr.push_back(curr+ele);
    }

    return rescurr;
}

void printSubSequences(string input,string output=""){
    if(input.size()==0){
        cout<<output<<"\n";
        return;
    }

    printSubSequences(input.substr(1),output+input[0]);
    printSubSequences(input.substr(1),output);
}

int main(void){
    // vector<string> data=subSequences("abcdefgh");

    // for(string ele:data){
    //     cout<<ele<<"\n";
    // }

    printSubSequences("abc");

    return 0;
}