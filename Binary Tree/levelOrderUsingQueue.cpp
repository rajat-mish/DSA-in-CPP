#include<iostream>
#include<climits>
#include<queue>
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
void levleO(Node*root){
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left)q.push(temp->left);
        if(temp->right)q.push(temp->right);
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
    
    levleO(a);
    
    }