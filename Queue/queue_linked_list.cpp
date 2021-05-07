#include<iostream>

using namespace std;

class node{
    public :

    int data;
    node* next;

    node(int num=0){
        data=num;
        next=NULL;
    }
};
class queue : private node{
    private:
    node* front=NULL;
    node* rear=NULL;
    node* temp=NULL;

    public:

    bool is_empty(void){
        if(front==NULL && rear==NULL){
            return true;
        }
        return false;
    }
    void enqueue(int num){
        if(is_empty()){
            node* new_node = new node(num);

            front = new_node;

            rear = front;
        }
        else{
            node* new_node = new node(num);
            
            rear->next = new_node;

            rear=new_node;
        }
    }
    void dequeue(void){
		if(is_empty()){
			return;
		}
        else if(front==rear && front!=NULL && rear!=NULL){
            delete front;
			front=NULL;
			rear=NULL;
        }
        else{
            temp=front;

            front=front->next;

            delete temp;
        }   
    }

    void view(void){
        temp=front;

		if(temp==NULL){
			return;
		}

        temp=front;

        cout<<"\n ! Front <<<<----- |";
        while(temp!=NULL){
            printf(" %d |",temp->data);
            temp=temp->next;
        }
        cout<<" <<<<<-----Rear |\n\n";

        
    }

    void view_front(void){
        cout<<"Front : "<<front->data<<endl;
    }
    void view_rear(void){
        cout<<"Rear : "<<rear->data<<endl;
    }
};
int main(void){
    queue data;

    cout<<"Enqueueing 10,20,30,40,50,60\n";

    data.enqueue(10);
    data.enqueue(20);
    data.enqueue(30);
    data.enqueue(40);
    data.enqueue(50);
    data.enqueue(60);

    cout<<"Viewing the data stored\n";
    data.view();

    cout<<"Dequeueing two elements\n";

    data.dequeue();
    data.dequeue();

    data.view();

    cout<<"Viewing front and rear elements \n";

    data.view_front();
    data.view_rear();

    /* Corresponding Output
    Enqueueing 10,20,30,40,50,60
    Viewing the data stored

    ! Front <<<<----- | 10 | 20 | 30 | 40 | 50 | 60 | <<<<<-----Rear |

    Dequeueing two elements

    ! Front <<<<----- | 30 | 40 | 50 | 60 | <<<<<-----Rear |

    Viewing front and rear elements 
    Front : 30
    Rear : 60
    */

    return 0;
}