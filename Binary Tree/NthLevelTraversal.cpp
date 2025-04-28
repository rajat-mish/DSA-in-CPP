#include<iostream>
#include<climits>
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

void printNthlev(Node*root,int cur,int n){
    if(root==NULL)return;
    if(cur==n){
        cout<<root->val<<" ";
    }
    printNthlev(root->left,cur+1,n);
    printNthlev(root->right,cur+1,n);
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
    
    printNthlev(a,0,2);
    
    }