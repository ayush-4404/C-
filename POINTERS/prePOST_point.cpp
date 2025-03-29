#include<iostream>
using namespace std;
int main(){
    int arr[2]={5,4};
    int *ptr=&arr[0];
    cout<<(*ptr)++<<endl;
    cout<<arr[0]<<" "<<arr[1];


    //--------------------------------------------
    //arr is pointer addressing to the 0th element
    cout<<endl<<arr;   
    cout<<endl<<&arr[1];

    cout<<endl<<*&arr[0]<<" "<<*arr;

    cout<<endl<<*(arr+1);
    
    return 0;
}