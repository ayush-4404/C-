#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;        // constant time complexity
    for(int i=0;i<n;i++){    // this loops runs n times
        for(int j=0;j<n;j++){
            cout<<"* ";      // this runs n times in each iteration of i
        }
        cout<<endl;
    }  
    // total operation- n*n=n^2 operations

cout<<endl;
//case 2


          // constant time complexity
    for(int i=0;i<n;i++){    // this loops runs n times
        for(int j=0;j<i;j++){
            cout<<"* ";      // this runs i times in each iteration of i
        }
        cout<<endl;
    }  
    // total operation= 0+1+2+3+......n= n(n-1)/2
    //   =n^2/2-n/2 =n^2

cout<<endl;

//case 3

            // constant time complexity
    for(int i=0;i<n;i++){    // this loops runs n times
        for(int j=0;j<sqrt(i);j++){
            cout<<"* ";      // this runs i times in each iteration of i
        }
        cout<<endl;
    }  

    return 0;
}