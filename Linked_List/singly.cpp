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

class SLL : private node{
    private:
    node* pivot=NULL;

    public:
    node* head=NULL;
    

    SLL(void){
        head=NULL;
    }

    void insert(int num=0){
        if(head==NULL){//SLL is empty
            head = new node;
            head->data=num;
            pivot=head;
        }
        else{//adding nodes
            node* temp = new node;
            temp->data = num;
            pivot->next=temp;
            pivot=temp;
        }
    }

    void view(void){//print whole list
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<", ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void view_rec(node* ptr){//print list using recursion
        if(ptr==NULL){
            cout<<endl;
            return;
        }
        else{
            cout<<ptr->data<<" ,";
            view_rec(ptr->next);
        }
    }

    void insert_begin(int num){
        node* new_node = new node(num);
        new_node->next=head;
        head=new_node;
    }

    void insert_end(int num){
        node* new_node = new node(num);
        pivot->next=new_node;
        pivot=new_node;
    }

    void delete_first(void){
        node* temp=head;

        head=head->next;

        delete temp;
    }

    void delete_end(void){
        node* temp=head;

        while((temp->next)->next!=NULL){
            temp=temp->next;
        }
        delete temp->next;
        pivot=temp;
        pivot->next=NULL;
    }

    void insert_at(int pos,int num){

        if(pos==1){
            insert_begin(num);
        }
        else if(pos>=2){

            pos-=2;

            node* temp=head;

                while(pos-- && pos>-1){

                    if(temp->next!=NULL){
                        temp=temp->next;
                    }
                    else{
                        cout<<"This many elements in SLL Does'nt exists\n";
                        return;
                    }
                }
            
                node* new_node = new node(num);
                new_node->next=temp->next;
                temp->next=new_node;
        }
    }

    int search_iter(int query){
        int result=-1,pos=1;
        node* temp=head;

        while(temp!=NULL){
            if(temp->data==query){
                result=pos;
                break;
            }
            temp=temp->next;
            pos++;
        }
        return result;
    }

    int search_rec(node* ptr,int query,int pos=1){
        if(ptr->data==query){
            return pos;
        }
        if(ptr==NULL){
            return -1;
        }
        return search_rec(ptr->next,query,pos++);
    }
};

int main(void){
    SLL data;

    cout<<"Adding 10,20,30,40 to the list and printing it :\n";

    data.insert(10);
    data.insert(20);
    data.insert(30);
    data.insert(40);

    data.view();

    cout<<"Inserting 50 at 4th position\n";

    data.insert_at(4,50);
    data.view();

    cout<<"Inserting 100 at begining\n";
    data.insert_begin(100);
    data.view();

    cout<<"Inserting 500 at end\n";
    data.insert_end(500);
    data.view();

    cout<<"Deleting the first element\n";
    data.delete_first();
    data.view();

    cout<<"Deleting the end element\n";
    data.delete_end();
    data.view();

    cout<<"Searching for 40 in the List .... "<<endl;
    printf("40 was found at %d position in list\n",data.search_iter(40));

    /* Corresponding Ouput of Program 

    Adding 10,20,30,40 to the list and printing it :
    10, 20, 30, 40, 
    Inserting 50 at 4th position
    10, 20, 30, 50, 40, 
    Inserting 100 at begining
    100, 10, 20, 30, 50, 40, 
    Inserting 500 at end
    100, 10, 20, 30, 50, 40, 500, 
    Deleting the first element
    10, 20, 30, 50, 40, 500, 
    Deleting the end element
    10, 20, 30, 50, 40, 
    Searching for 40 in the List .... 
    40 was found at 5 position in list

    */
   
    return 0;
}