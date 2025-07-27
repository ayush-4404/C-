#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> qu;
    qu.push(20);
    qu.push(35);
    qu.push(49);
    qu.push(87);
    qu.push(12);
    cout<<qu.front()<<endl;
    while(!qu.empty()){
        cout<<qu.front()<<endl;
        qu.pop();
    }
    return 0;
}