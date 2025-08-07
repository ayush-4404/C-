#include<iostream>
#include<queue>
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
    void createTree(){
        Node *p,*t;
        int x;
        queue<Node*> q;
        cout<<"enter root value: "<<endl;
        cin>>x;
        root=new Node(x);
        q.push(root);
        while(!q.empty()){
            p=q.front();
            cout<<"enter the value of left child of "<<p->data<<":\n";
            cin>>x;
            if(x!=-1){
                t=new Node(x);
                p->lchild=t;
                q.push(t);
            }
            cout<<"enter the value of right child of "<<p->data<<":\n";
            cin>>x;
            if(x!=-1){
                t=new Node(x);
                p->rchild=t;
                q.push(t);
            }
            q.pop();
        }
    }
    void preorder(Node* p){
        if(p){
            cout<<p->data<<" ";
            preorder(p->lchild);
            preorder(p->rchild);
        }
    }
    void postorder(Node* p){
        if(p){
            postorder(p->lchild);
            postorder(p->rchild);
            cout<<p->data<<"  ";
        }
    };
    void inorder(Node* p){
        if(p){
            inorder(p->lchild);
            cout<<p->data<<" ";
            inorder(p->rchild);
        }
    }
    void levelorder(Node* p){
        queue<Node*> qu;
        cout<<p->data<<" ";
        qu.push(p);
        while(!qu.empty()){
            p=qu.front();
            if(p->lchild){
                cout<<p->lchild->data<<" ";
                qu.push(p->lchild);
            }
            if(p->rchild){
                cout<<p->rchild->data<<" ";
                qu.push(p->rchild); 
            }
            qu.pop();
        }
    }
    int height(Node* p){
        int a=0,b=0;
        if(p==0) return 0;
        a=height(p->lchild);
        b=height(p->rchild);
        if(a>b)
            return a+1;
        else
            return b+1;
    }
    int count(Node* p){
        int a,b;
        if(p){
            a=count(p->lchild);
            b=count(p->rchild);
            return a+b+1;
        }
        return 0;
    }

};

int main(){
    Tree t;
    t.createTree();
    t.preorder(t.root);
    cout<<endl;
    t.postorder(t.root);
    cout<<endl;
    t.inorder(t.root);
    cout<<endl;
    t.levelorder(t.root);
    cout<<endl;
    cout<<t.height(t.root);
    cout<<endl;
    cout<<t.count(t.root);

    return 0;
}
