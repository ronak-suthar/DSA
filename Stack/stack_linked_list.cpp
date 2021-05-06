#include<iostream>

using namespace std;

class node{
    public:

    int data;
    node* next;

    node(int num=0){
        data=num;
        next=NULL;
    }
};

class stack : private node{
    private:

    public:

    node* head=NULL;

    void push(int num=0){
        if(head==NULL){
            node* new_node = new node(num);
            head = new_node;
        }
        else{
            node* new_node = new node(num);
            new_node->next=head;
            head=new_node;
        }
    }

    void pop(void){
        if(head==NULL){
            cout<<"!!! Under-Flow !!!\n";
        }
        else{
            node* temp=head;
            head=head->next;
            delete temp;
        }
    }

    void peek(void){
        cout<<head->data<<endl;
    }

    void view(void){
        node* temp = head;

        printf("The Stack looks like : \n");
        printf("-------\n");

        while(temp!=NULL){
            printf("| %d |\n",temp->data);
            printf("-------\n");
            temp=temp->next;
        }
        printf("\n");
    }
};
int main(void){
    stack data;

    cout<<"Pushing 10,20,30,40,50 into stack we get \n";

    data.push(10);
    data.push(20);
    data.push(30);
    data.push(40);
    data.push(50);

    data.view();

    cout<<"Popping one element we get \n";

    data.pop();

    data.view();

    cout<<"Viewing the peek element : ";

    data.peek();

    /* Corresponding Ouput of Program

    Pushing 10,20,30,40,50 into stack we get 
    The Stack looks like : 
    -------
    | 50 |
    -------
    | 40 |
    -------
    | 30 |
    -------
    | 20 |
    -------
    | 10 |
    -------

    Popping one element we get 
    The Stack looks like : 
    -------
    | 40 |
    -------
    | 30 |
    -------
    | 20 |
    -------
    | 10 |
    -------

    Viewing the peek element : 40
    */

    return 0;
}