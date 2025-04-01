//lifo data structure 
// push,pop,isempty,isfull,size,
#include<iostream>
using namespace std;
class Stack{
    int capacity;
    int* arr;
    int top_idx;
    public:
    Stack(int capacity){
        this->capacity=capacity;
        arr=new int[capacity];
        this->top_idx=-1;
    }
    void push(int data){
        if(this->top_idx==this->capacity-1) {
            cout<<"overflow\n";
            return;
        }
        this->top_idx++;   // increment , then add
        this->arr[this->top_idx]=data;
    }

    void pop(){
        if(this->top_idx==-1){
            cout<<"underflow\n";
            return;
        }
        this->top_idx--;
        
    }
    int top(){
        if(this->top_idx==-1){
            cout<<"underflow\n";
            return INT_MIN;
        }
        return this->arr[this->top_idx];
    }
    bool isEmpty(){
        return this->top_idx==-1 ; // == operator will return boolean expression
    }
    int size(){
        return this->top_idx+1;
    }
    bool isFull(){
        return this->top_idx==this->capacity-1;
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