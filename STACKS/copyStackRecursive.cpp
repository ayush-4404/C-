#include<iostream>
#include<stack>
using namespace std;
void copyStack(stack<int> &st, stack<int> &result){
    if(st.empty()) return;
    int curr=st.top();
    st.pop();
    copyStack(st,result);
    result.push(curr);
}
void display(stack<int> st, int count){

    for(int i=0;i<count;i++){
        cout<<st.top()<<endl;
        st.pop();
    }
}
int main(){
    stack<int> st;
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(4);
    st.push(10);
    stack<int> rst;
    copyStack(st,rst);
    display(rst,6);
    return 0;
}