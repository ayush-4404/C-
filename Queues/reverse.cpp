#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverse(queue<int> &qu){
    stack<int> st;
    while(!qu.empty()){
        st.push(qu.front());
        qu.pop();
    }
    while(!st.empty()){
        qu.push(st.top());
        st.pop();
    }
}
void display(queue<int> qu){
    while(!qu.empty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }
    cout<<endl;
}
int main(){
    queue<int> qu;
    qu.push(20);
    qu.push(35);
    qu.push(49);
    qu.push(87);
    qu.push(12);
    display(qu);
    reverse(qu);
    display(qu);
    
    
    return 0;
}