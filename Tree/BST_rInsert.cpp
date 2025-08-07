#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* lchild=NULL;
    Node* rchild=NULL;
    Node(int data){
        this->data=data;
    }
};
class Tree{
    public:
    Node* root;
    Node* rInsert(Node* p, int key){
        if(p==NULL){
            Node* new_node=new Node(key);
            return new_node;
        }
        if(key<p->data){
            p->lchild=rInsert(p->lchild,key);
        } 
        else if(key>p->data){
            p->rchild=rInsert(p->rchild,key);
        }
        return p;
    }
};

int main(){
    Tree t;
    int x;cin>>x;
    t.root=t.rInsert(t.root,x);
    for(int i=0;i<10;i++){
        cin>>x;
        t.rInsert(t.root,x);
    }
    // t.inorder(t.root);
    return 0;
}