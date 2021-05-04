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

class SCLL : private node {//Singly-Circular-Linked-List
    private:
    node* pivot=NULL;

    public:
    node* head=NULL;

    void insert(int num=0){
        if(head==NULL){
            node* new_node = new node(num);
            head=new_node;
            head->next=head;
            pivot=head;
        }
        else{
            node* new_node = new node(num);
            pivot->next=new_node;
            pivot=new_node;
            pivot->next=head;
        }
        return;
    }
    
    void insert_begin(int num=0){
        node* new_node = new node(num);
        new_node->next=head;
        head=new_node;
        pivot->next=head;
        return;
    }
    void insert_end(int num=0){
        node* new_node = new node(num);
        new_node->next=head;
        pivot->next=new_node;
        pivot=new_node;
        return;
    }

    void delete_head(void){
        if(head==NULL){
            cout<<"The List is already empty !\n";
            return;
        }
        else if(head->next==head){
            delete head;
        }
        else{
            node* temp=head;

            pivot->next=head->next;
            head=head->next;

            delete temp;
        }
        return;
        
    }
    void delete_kth(int pos){
        if(head==NULL){
            cout<<"The List is already empty! \n";
            return;
        }
        else if(pos==1){
            delete_head();
        }
        else{
            pos-=2;
            node* temp=head;
            node* remove=NULL;

            while(pos--){
                temp=temp->next;
            }

            if(temp->next->next==head){
                remove=temp->next;
                temp->next=head;
                pivot=temp;
                delete remove;
                return;
            }
            else{
                remove=temp->next;
                temp->next=temp->next->next;
                delete remove;
            }   
        }
        return;

    }
    void view(void){
        if(head==NULL){
            cout<<"Empty list !\n";
            return;
        }
        else if(head->next==head){
            cout<<head->data<<" ;\n";
        }
        else{
            node* temp=head;

            while(temp->next!=head){
                cout<<temp->data<<", ";
                temp=temp->next;
            }
            cout<<temp->data<<", ";
            cout<<endl;
        }
        return;
    }
};

int main(void){
    SCLL data;

    cout<<"Inserting elements into the circular linked list as : 10,20,30,40,50,60\n";

    data.insert(10);
    data.insert(20);
    data.insert(30);
    data.insert(40);
    data.insert(50);
    data.insert(60);

    cout<<"Viewing the list : ";
    data.view();

    cout<<"Inserting element 100 at begning of the list\n";
    data.insert_begin(100);
    data.view();

    cout<<"Inserting element 200 at end of the list\n";
    data.insert_end(200);
    data.view();

    cout<<"Deleting the head element we get the list as\n";
    data.delete_head();
    data.view();


    cout<<"Deleting the 4th position element from the list we get the list as\n";
    data.delete_kth(4);
    data.view();

    /* Corresponding Ouput of Program

    Inserting elements into the circular linked list as : 10,20,30,40,50,60
    Viewing the list : 10, 20, 30, 40, 50, 60, 
    Inserting element 100 at begning of the list
    100, 10, 20, 30, 40, 50, 60, 
    Inserting element 200 at end of the list
    100, 10, 20, 30, 40, 50, 60, 200, 
    Deleting the head element we get the list as
    10, 20, 30, 40, 50, 60, 200, 
    Deleting the 4th position element from the list we get the list as
    10, 20, 30, 50, 60, 200,

    */

    return 0;
}