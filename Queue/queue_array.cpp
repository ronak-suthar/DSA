#include<iostream>

using namespace std;

class queue{
    private:

    int front,rear,capacity,size;
    int* ptr;

    public:

    queue(int cap){
        capacity=cap;
        size=0;
        front=rear=-1;
        ptr = new int[capacity];
    }

    bool is_empty(void){
        if(front==-1 && rear==-1){
            cout<<"The Queue is Empty !\n";
            return true;
        }
        return false;
    }

    bool is_full(void){
        if((rear+1)%capacity==front){
            cout<<"The Queue is Full !\n";
            return true;
        }
        return false;
    }

    void enqueue(int num){
        if(is_empty()){
            front=0;
            rear=0;
            ptr[0]=num;
            size++;
        }
        else if(!is_full()){
            rear=(rear+1)%capacity;
            ptr[rear]=num;
            size++;
        }
    }

    void dequeue(void){
        if(is_empty()){
            return;
        }
        else if(front==rear){
            front=-1;
            rear=-1;
            size--;
        }
        else{
            front = (front+1)%capacity;
            size--;
        }
    }

    void view_front(void){
        if(!is_empty()){
            cout<<"Front : "<<ptr[front]<<endl;
        }
    }
    void view_rear(void){
        if(!is_empty()){
            cout<<"Rear : "<<ptr[rear]<<endl;
        }
    }
    void view(void){
        cout<<"\n ! Front <<<<----- |";
        for(int i=front;i!=(rear+1)%capacity && !is_empty();i=(i+1)%capacity){
            printf(" %d |",ptr[i]);
        }
        cout<<" <<<<<-----Rear |\n\n";
    }
};
int main(void){

    queue data(10);

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

    data.view_front();
    data.view_rear();

    /* Corresponding Output

    Enqueueing 10,20,30,40,50,60

    The Queue is Empty !
    Viewing the data stored

    ! Front <<<<----- | 10 | 20 | 30 | 40 | 50 | 60 | <<<<<-----Rear |

    Dequeueing two elements

    ! Front <<<<----- | 30 | 40 | 50 | 60 | <<<<<-----Rear |

    Front : 30
    
    Rear : 60

    */



    return 0;
}