#include<iostream>
#include<stack>
using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

// };
// class Stack{
//     Node* head;
//     int capacity;
//     int currSize;
//     Stack(int c){
//         this->capacity=c;
//         this->currSize=0;
//         head=NULL;
//     }
// };
int main(){
    stack<int> st;
    cout<<st.empty()<<endl;
    st.push(2);
    st.push(4);
    st.push(5);
    cout<<st.top()<<endl;
    st.push(7);
    st.pop();
    cout<<st.empty()<<endl;
    st.pop();
    cout<<st.top();
    return 0;
}