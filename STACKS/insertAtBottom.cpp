//insert complete stack in a new stack and then push the 
// given element.
// put elements of temp stack back to original stack.
#include<iostream>
#include<stack>  
using namespace std;
void display(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}
void insertAtBottom(stack<int> &st, int x){
    stack<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    temp.push(x);
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    int key;
    cin>>key;
    while(key!=-1){
        st.push(key);
        cin>>key;
    }
    display(st);
    cout<<"enter element: ";
    
    int x; cin>>x;
    insertAtBottom(st,x);
    display(st);
    
    return 0;
}