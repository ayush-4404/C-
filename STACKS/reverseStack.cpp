// 2 temp use kr ke v kr skte
//1 temp use kr ke v kr skte using insertAtBottom
// is me iterations n^2 times ho jaaegi
// recursive of the same:
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
    if(st.empty()){
        st.push(x);
        return;
    }
    int temp=st.top();
    st.pop();
    insertAtBottom(st,x);
    st.push(temp);
    return;
}
void reverseStack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int cur=st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st,cur);
    return;
}
int main(){
    stack<int> st;
    int key;
    cin>>key;
    while(key!=-1){
        st.push(key);
        cin>>key;
    }
    cout<<"size is: "<<st.size()<<endl;
    display(st);
    cout<<"reverse stack is: \n";
    reverseStack(st);
    display(st);
    
    return 0;
}