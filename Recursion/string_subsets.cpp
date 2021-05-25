/*                                     abc
                bc - ''                                        bc - a
----------------------------------------------------------------------------------

        c - ''    ,  c - b                              c - a    ,   c - ab
----------------------------------------------------------------------------------

'' - '' , '' - c      '' - b ., '' - bc      '' - a , '' - ac       '' - ab , '' - abc      

----------------------------------------------------------------------------------
*/


#include<iostream>

using namespace std;
void str_subsets(string input,string output=""){
    if(input.length()==0){
        cout<<output<<" ,";
        return;
    }
    str_subsets(input.substr(1),output);
    str_subsets(input.substr(1),output+input[0]);
}
int main(void){
    string data;

    cin>>data;

    str_subsets(data);
    cout<<endl;

    return 0;
}