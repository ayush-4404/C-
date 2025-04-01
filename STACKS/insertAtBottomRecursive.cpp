#include<iostream>
#include<stack>  
using namespace std;
void display(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}
void insertAtBottomRecur(stack<int> &st, int x){
    if(st.empty()) {
        st.push(x);
        return;
    }
    int cur=st.top();
    st.pop();
    insertAtBottomRecur(st,x);
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
    display(st);
    cout<<"enter element: ";
    
    int x; cin>>x;
    insertAtBottomRecur(st,x);
    display(st);
    
    return 0;
}