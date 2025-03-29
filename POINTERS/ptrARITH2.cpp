#include<iostream>
using namespace std;
int main(){
    /*int x=10;
    int* ptr=&x;
    cout<<ptr<<endl;
    ptr+=1;
    cout<<ptr;
    ptr-=1;
    cout<<endl<<ptr;*/


//-------------------------------------

    int arr[2]={1,23};
    int *ptr=&arr[0];
    cout<<ptr<<" "<<*ptr; cout<<endl;
    //cout<<ptr+1<<" "<<*ptr+1;

    // cout<<*ptr++; cout<<endl;
    // cout<<*ptr;
    // cout<<endl;


    cout<<*++ptr; cout<<endl;
    cout<<*ptr;  
    return 0;
}