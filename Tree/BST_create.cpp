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
    void insert(int key){
        Node* t=root;
        Node* r,*p;
        if(root==NULL){
            p=new Node(key);
            root=p;
            return;
        }
        while(t!=NULL){
            r=t;
            if(key<t->data){
                t=t->lchild;
            }
            else if(key>t->data) t=t->rchild;
            else return;
        }
        p=new Node(key);
        if(key<r->data){
            r->lchild=p;
        }
        else r->rchild=p;
    }
    void inorder(Node* p){
        if(p){
            inorder(p->lchild);
            cout<<p->data<<" ";
            inorder(p->rchild);
        }
    }
    void deleteN(int key){
        // inorder predecessor or inorder successor will take it's place after deletion
        
    }
};

int main(){
    Tree t;
    for(int i=0;i<10;i++){
        int x;cin>>x;
        t.insert(x);
    }
    t.inorder(t.root);
    return 0;
}