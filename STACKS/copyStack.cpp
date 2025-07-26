#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> st, int count){
    for(int i=0;i<count;i++){
        cout<<st.top()<<endl;
        st.pop();
    }
}
int main(){
    stack<int> st;
    int key;
    cin>>key;
    int count=0;
    while(key!=-1){
        st.push(key);
        cin>>key;
        count++;
    }
    stack<int> n;
    stack<int> rst;
    for(int i=0;i<count;i++){
        n.push(st.top());
        st.pop();
    }
    display(n,count);
    for(int i=0;i<count;i++){
        rst.push(n.top());
        n.pop();
    }
    display(rst,count);
    return 0;
}