//iterative approach

#include<iostream>
#include<climits>
#include<stack>
using namespace std;

class Node{
 public:
 Node *left;
 Node* right;
 int val;

 Node(int val){
    this->val=val;
    this->left=NULL;
    this->right=NULL;

 }



};


void preorder(Node*root){
    stack<Node*>st;
    if(root)st.push(root);
    while(st.size()>0){
        Node* temp=st.top();
        st.pop();
        cout<<temp->val<<" ";
        if(temp->right)st.push(temp->right);
        if(temp->left)st.push(temp->left);
    }
}

int main(){
    Node*a=new Node(5);
    Node*b=new Node(6);
    Node*c=new Node(7);
    Node*d=new Node(4);
    Node*e=new Node(9);
    Node*f=new Node(10);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    
   preorder(a);
    
    }