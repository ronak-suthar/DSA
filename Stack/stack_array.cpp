#include<iostream>

using namespace std;

class stack{
    private:

    int* ptr = NULL;
    int top;
    int size;

    public:

    stack(int size_=0){
        size=size_;
        ptr = new int[size_];
        top=-1;
    }

    bool is_empty(void){
        if(top==-1){
            cout<<"Under-Flow\n";
            return true;
        }
        return false;
    }
    bool is_full(void){
        if(top==size){
            cout<<"Over-Flow\n";
            return true;
        }
        return false;
    }
    void push(int num=0){
        if(!is_full()){
            ptr[++top]=num;
        }
    }
    void pop(void){
        if(!is_empty()){
            --top;
        }
    }
    void peek(void){
        if(!is_empty()){
            cout<<"Peeked Item : "<<ptr[top]<<endl;
        }
    }
    void display(void){

        if(is_empty()){
            return;
        }
        int temp=top;

        printf("\nStack looks like :\n");
        printf("---------\n");

        while(temp!=-1){
            printf("|  %d  |\n",ptr[temp--]);
            printf("---------\n");
        }
        printf("\n");

    }
};
int main(void){
    stack data(10);

    cout<<"Pushing 10,20,30,40,50 into stack we get \n";

    data.push(10);
    data.push(20);
    data.push(30);
    data.push(40);
    data.push(50);

    data.display();

    cout<<"Popping one element we get \n";

    data.pop();

    data.display();

    cout<<"Viewing the peek element : ";

    data.peek();

    /* Corresponding Output of Program 

    Pushing 10,20,30,40,50 into stack we get 

    Stack looks like :
    ---------
    |  50  |
    ---------
    |  40  |
    ---------
    |  30  |
    ---------
    |  20  |
    ---------
    |  10  |
    ---------

    Popping one element we get 

    Stack looks like :
    ---------
    |  40  |
    ---------
    |  30  |
    ---------
    |  20  |
    ---------
    |  10  |
    ---------

    Viewing the peek element : Peeked Item : 40
    */

    return 0;
}