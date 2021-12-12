#include<iostream>

using namespace std;

void permutations(string input,string output=""){
    if(input.size()==0){
        cout<<output<<"\n";
        return;
    }

    for(int i=0;i<input.size();i++){
        permutations(input.substr(0,i)+input.substr(i+1),output+input[i]);
    }
}
int main(void){
    string data;

    cin>>data;

    permutations(data);

    return 0;
}