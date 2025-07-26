
#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}
void insertAtAnyIndexRecur(stack<int> &st, int idx,int x,int s){
    if(st.size()==s-idx+1){
        st.push(x);
        return;
    }
    int cur=st.top();
    st.pop();
    insertAtAnyIndexRecur(st,idx,x,s);
    st.push(cur);
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
    cout<<"size is: "<<st.size();
    display(st);
    cout<<"enter index"; 
    int idx; cin>>idx;
    cout<<"enter element: ";
    int x; cin>>x;
    int s=st.size();
    insertAtAnyIndexRecur(st,idx,x,s);
    display(st);
    
    return 0;
}