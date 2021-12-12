#include<iostream>
#include<vector>
using namespace std;

vector<string> getStairPaths(int height){
    if(height==0){
        vector<string> baseResult{""};
        return baseResult;
    }
    else if(height<=0){
        vector<string> baseResult;
        return baseResult;
    }

    vector<string> path1 = getStairPaths(height-1);
    vector<string> path2 = getStairPaths(height-2);
    vector<string> path3 = getStairPaths(height-3);

    vector<string> result;

    for(string ele:path1){
        result.push_back("1"+ele);
    }
    for(string ele:path2){
        result.push_back("2"+ele);
    }
    for(string ele:path3){
        result.push_back("3"+ele);
    }

    return result;
}

void printStairPaths(int height,string output=""){
    if(height==0){
        cout<<output<<"\n";
        return;
    }
    else if(height<0){
        return;
    }

    printStairPaths(height-1,"1"+output);
    printStairPaths(height-2,"2"+output);
    printStairPaths(height-3,"3"+output);
}
int main(void){
    int height;

    cin>>height;

    // vector<string> result = getStairPaths(height);

    // for(string ele:result){
    //     cout<<ele<<", ";
    // }

    // cout<<"\n";

    printStairPaths(height);

    return 0;
}