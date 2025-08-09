// equal if length is same and nodes at same position should have same val

#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next=NULL;
    Node(int val){
        this->val=val;
    }
};
class LinkedList{
    public:
    Node* head;
    LinkedList(){
        head=NULL;
    }
    void insert(int val){
        Node* new_node=new Node(val);
        if(head=NULL){
            head=new_node;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
};
bool checkEqual(Node* head1, Node* head2){
        while(head1!=NULL&& head2!=NULL){
            if(head1->val!=head2->val){
                return false;
            }
            head1=head1->next;
            head2=head2->next;
        }
        if(head1==NULL&&head2==NULL){
            return true;
        }
        return false;
    }
int main(){
    LinkedList ll1;
    LinkedList ll2;
    ll1.insert(1);
    ll1.insert(3);
    ll1.insert(5);
    ll1.insert(10);
    ll2.insert(1);
    ll2.insert(3);
    ll2.insert(5);
    ll2.insert(10);
    // int x; cin>>x;
    // while(x!=-1){
    //     ll1.insert(x);
    //     cin>>x;
    // }
    ll1.display();
    // int y; cin>>y;
    // while(y!=-1){
    //     ll2.insert(y);
    //     cin>>y;
    // }
    cout<<checkEqual(ll1.head,ll2.head);

}