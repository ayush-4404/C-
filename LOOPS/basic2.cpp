#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<10;i++){
        if(i==8) break;
        if(i==3) continue;
        cout<<i<<endl;

    }
    // int i=1;
    // for( ;i<10;i+=2){
    //     cout<<i;
    // }

    // for(int j=1; ; j++){
    //     cout<<10;
    //     j<10;
    // }
    return 0;
}