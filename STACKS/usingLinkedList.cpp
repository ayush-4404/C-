#include<iostream>
using namespace std; 
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class Stack{
    private:
    Node* head;
    int capacity;
    int currSize;
    public:
    Stack(int c){
        this->capacity=c;
        this->currSize=0;
        head=NULL;
    }
    bool isEmpty(){
        return this->head==NULL;
    }
    bool isFull(){
        return this->currSize==this->capacity;
    }
    void push(int data){
        if(this->currSize==this->capacity) {
            cout<<"overflow\n";
            return;
        } 
        Node* n=new Node(data);
        n->next=this->head;
        this->head=n;
        this->currSize++;
        
    }
    int pop(){
        if(this->head==0) {
            cout<<"underflow";
            return -1;
        } 
        //Node* new_Head=this->head->next;
        //this->head->next=NULL;
        Node* toBeRem=this->head;
        int result=toBeRem->data;
        this->head=this->head->next;
        delete toBeRem;
        //this->head=new_Head;
        this->currSize--;
        return result;
    }
    int size(){
        return this->currSize;
    }
    int top(){
        if(this->head==NULL){
            //cout<<"underflow";
            return -1;
        }
        return this->head->data;
    }
};
int main(){
    Stack st(5);
    st.push(4);
    st.push(1);
    st.push(2);
    cout<<st.top()<<endl;
    st.push(9);
    st.push(7);
    cout<<st.top()<<endl;
    st.push(56);
    st.pop();
    cout<<st.top()<<endl;
    cout<<"size is:"<<st.size()<<endl;   // why this line running abruptly
    st.pop();
    st.pop();
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    st.pop();
    cout<<st.top()<<endl;

    return 0;
}