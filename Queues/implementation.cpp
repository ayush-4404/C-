#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next=NULL;
    Node(int val){
        this->val=val;
    }
};
class Queue{
    Node* head;
    Node* tail;
    int size=0;
public: 
    Queue(){
        this->head=NULL;
        this->tail=NULL;
    }
    void enqueue(int data){
        Node* new_node=new Node(data);
        if(head==NULL){
            this->head=this->tail=new_node;
        }
        else{
            this->tail->next=new_node;
            this->tail=new_node;
        }
        this->size++;
    }
    void dequeue(){
        if(this->head==NULL){
            cout<<"underflow";
            return;
        }
        Node* old_head=this->head;
        Node* new_head=this->head->next;
        this->head=new_head;
        if(this->head==NULL) this->tail=NULL;
        old_head->next=NULL;
        delete old_head;
        this->size--;
        
    }
    int getSize(){
        return this->size;
    }
    bool isEmpty(){
        return (this->head==NULL);
    }
    int peek(){
        return this->head->val;
    }


};
int main(){
    Queue qu;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30); 
    qu.dequeue();
    cout<<qu.peek();
    qu.dequeue();
    qu.dequeue();
    cout<<qu.peek();
    
    return 0;
}