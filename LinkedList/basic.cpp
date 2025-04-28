#include<iostream>
using namespace std;

class Node{
public:
int val;
Node* next;
Node(int v){
val=v;
this->next=NULL;
}
};
void display(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main(){
    Node*a=new Node(1);
    Node*b=new Node(0);
    Node*c=new Node(1);
    // Node*d=new Node(40);
    // Node*e=new Node(50);

    a->next=b;
    b->next=c;
    // c->next=d;
    // d->next=e;

    display(a);
     string s="";
        Node*temp=a;
        while(temp->next!=NULL){
            s.push_back(temp->val);
            temp=temp->next;
        }
cout<<s;

}