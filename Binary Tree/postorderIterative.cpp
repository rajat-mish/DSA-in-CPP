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


void preorder(Node*root,stack<int>&s){
    stack<Node*>st;
    if(root)st.push(root);
    while(st.size()>0){
        Node* temp=st.top();
        st.pop();
        s.push(temp->val);
        if(temp->left)st.push(temp->left);
        if(temp->right)st.push(temp->right);
        
    }
}

int main(){
    Node*a=new Node(10);
    Node*b=new Node(8);
    Node*c=new Node(12);
    Node*d=new Node(4);
    Node*e=new Node(7);
    Node*f=new Node(11);
     Node*g=new Node(14);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=e;
    stack<int>s;
   preorder(a,s);
   while(s.size()>0){
    cout<<s.top()<<" ";
    s.pop();
   }
    
    }