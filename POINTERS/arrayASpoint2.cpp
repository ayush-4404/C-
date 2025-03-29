#include<iostream>
using namespace std;

int main(){
    /*int arr[4]={1,24,7,34};
    int *ptr=(arr+2);
    cout<<*ptr<<endl;
    *ptr++;
    cout<<*ptr; */

    //____________________________________________________________


    int a[4]={2, 6,8,198};
    int (*p)[4]=&a;
    cout<<p<<" "<<a<<" "<<*p<<" "<<*a;

    return EXIT_SUCCESS;

}