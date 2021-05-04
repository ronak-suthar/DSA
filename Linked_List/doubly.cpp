#include<iostream>
#include<algorithm>
using namespace std;

class node{
    public:

    int data;
    node* next;
    node* previous;

    node(int num=0){
        data=num;
        next=NULL;
        previous=NULL;
    }

};

class DLL : private node{
    private:

    node* pivot=NULL;

    public:

    node* head=NULL;

    void insert(int num){
        if(head==NULL){
            node* new_node = new node(num);
            head = new_node;
            pivot = head;
        }
        else{
            node* new_node = new node(num);
            pivot->next=new_node;
            new_node->previous=pivot;
            pivot=new_node;
        }
    }

    void insert_begin(int num){
        node* new_node = new node(num);
        
        head->previous=new_node;

        new_node->next=head;

        head=new_node;
    }

    void view(void){
        node* temp=head;

        if(temp==NULL){
            cout<<"The DLL is empty !\n";
            return;
        }

        cout<<"The DLL is : ";
        while(temp!=NULL){
            cout<<temp->data<<", ";
            temp=temp->next;
        }
        cout<<endl;
        
        /*
        cout<<"The Rev DLL is :";

        temp=pivot;

        while(pivot!=NULL){
            cout<<pivot->data<<", ";
            pivot=pivot->previous;
        }
        cout<<endl;
        */
        
    }

    void reverse(void){
        node* temp=head;

        if(head==NULL || head->next==NULL){
            return;
        }
        while(temp!=NULL){
            swap(temp->next,temp->previous);
            if(temp->previous!=NULL){
                temp=temp->previous;
            }
            else{
                break;
            }  
        }
        pivot=head;
        head=temp;
    }

    void delete_head(void){

        if(head==NULL){
            return;
        }
        if(head->next==NULL){
            delete head;
        }
        node* temp=head;

        head = head -> next;
        head->previous = NULL;

        delete temp;
    }

    void delete_end(void){
        node* temp=head;

        while(temp->next!=NULL){
            temp=temp->next;
        }

        temp->previous->next=NULL;

        delete temp;
    }


};
int main(void){
    DLL data;

    cout<<"Inserting 10,20,30,40,50,60 into the list\n";

    data.insert(10);
    data.insert(20);
    data.insert(30);
    data.insert(40);
    data.insert(50);
    data.insert(60);

    data.view();//displaying the list

    cout<<"Inserting 25 at the begining of list\n";
    data.insert_begin(25);
    data.view();

    cout<<"Reversing the list\n";
    data.reverse();
    data.view();

    cout<<"Deleteing the head\n";
    data.delete_head();
    data.view();

    cout<<"Deleteing the tail/end\n";
    data.delete_end();
    data.view();

    /* Corresponding Ouput is 
    Inserting 10,20,30,40,50,60 into the list
    The DLL is : 10, 20, 30, 40, 50, 60, 
    Inserting 25 at the begining of list
    The DLL is : 25, 10, 20, 30, 40, 50, 60, 
    Reversing the list
    The DLL is : 60, 50, 40, 30, 20, 10, 25, 
    Deleteing the head
    The DLL is : 50, 40, 30, 20, 10, 25, 
    Deleteing the tail/end
    The DLL is : 50, 40, 30, 20, 10,
    */

    return 0;
}