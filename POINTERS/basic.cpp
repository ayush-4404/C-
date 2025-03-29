#include<iostream>
using namespace std;
int main(){
    int x=10,y=0;
    cout<<&x<<" "<<&y;
    cout<<endl;
    int *ptr1=&x;
    int*ptr;
    float*ptr2;
    cout<<*ptr1<<endl<<ptr<<endl<<ptr2;

    //--------------------
    x=23;
    cout<<"\n"<<*ptr1<<endl;

    //---------------------
    *ptr=20;
    int a=*ptr;
    cout<<endl<<a<<endl;
    cout<<*ptr<<endl;
    return EXIT_SUCCESS;
}