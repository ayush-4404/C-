#include<iostream>
using namespace std;
void comp(string t,char ch,int* a,int *b){
    for(int i=0;t[i]!='\0';i++){
        if(t[i]==ch){
            *a=i;
            break;
        }
    }
    for(int i=t.size()-1;i>=0;i--){
        if(t[i]==ch){
            *b=i;
            break;
        }
    }
}
int main(){ 
    string s="cbaaabac";
    char ch='c';
    int first=-1;
    int last=-1;
    comp(s,ch,&first,&last);
    cout<<first<<endl<<last;
    
    return 0;
}