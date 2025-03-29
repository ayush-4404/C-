#include<iostream>
using namespace std;
int main(){
    char ch[5];
    // for(int i=0;i<5;i++){
    //     cin>>ch[i];
    // }
    // for(int i=0;i<5;i++){
    //     cout<<ch[i]<<endl;
    // }
    for(char &ele:ch){
        cin>>ele;
    }
    for(char ele:ch){
        cout<<ele<<endl;
    }
    return 0;
}