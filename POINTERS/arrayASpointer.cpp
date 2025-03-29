#include<iostream>
using namespace std;
void process(int *arr, int n){
    //inside this function we have access of same array as main

    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<endl;
    }
    *(arr+1)=33;
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<endl;
    }
}
int main(){
    int arr[4]={1,24,7,34 };
    process(arr, 4);
    return EXIT_SUCCESS;

}