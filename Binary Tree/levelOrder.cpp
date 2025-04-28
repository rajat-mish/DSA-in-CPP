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

int levels(Node*root){
    if(root==NULL)return 0;
    return 1+max(levels(root->left),levels(root->right));
}
void printNthlev(Node*root,int cur,int n){
    if(root==NULL)return;
    if(cur==n){
        cout<<root->val<<" ";
    }
    printNthlev(root->left,cur+1,n);
    printNthlev(root->right,cur+1,n);
}

void levOrder(Node*root){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        printNthlev(root,1,i);
        cout<<endl;
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
    
    levOrder(a);
    
    }