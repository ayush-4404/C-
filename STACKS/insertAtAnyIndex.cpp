
#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}
void insertAtAnyIndex(stack<int> &st, int idx,int x){
    stack<int> temp;
    int s=st.size();
    for(int i=0;i<s-idx;i++){
        temp.push(st.top());
        st.pop();
    }
    st.push(x);
    for(int i=0;i<s-idx;i++){
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
    cout<<"size is: "<<st.size();
    display(st);
    cout<<"enter index"; 
    int idx; cin>>idx;
    cout<<"enter element: ";
    int x; cin>>x;
    insertAtAnyIndex(st,idx,x);
    display(st);
    
    return 0;
}