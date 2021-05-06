#include<iostream>
#include<stack>

using namespace std;

int main(void){
    stack<int> data;

    cout<<"Pushing 10,20,30 onto stack\n";
    data.push(10);
    data.push(20);
    data.push(30);


    cout<<"Size of Stack is : " <<data.size()<<endl;

    cout<<"Element at top is : "<<data.top()<<endl;

    cout<<"Poping the top element \n";
    data.pop();

    cout<<"Current Size of Stack is : "<<data.size()<<endl;

    /*Corresponding Ouput of Program

    Pushing 10,20,30 onto stack
    Size of Stack is : 3
    Element at top is : 30
    Poping the top element 
    Current Size of Stack is : 2
    */

    return 0;
}