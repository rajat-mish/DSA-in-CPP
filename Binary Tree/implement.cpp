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

 void display(Node*root){
    if(root==NULL)return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
    
    
    }

int sumNode(Node*root){
    if(root==NULL)return 0;
    int sum=root->val +sumNode(root->left)+sumNode(root->right);
    return sum;
}

int productNode(Node*root){
    if(root==NULL)return 1;
    int pro=root->val*productNode(root->left)*productNode(root->right);
    return pro;
}

int maxNode(Node*root){
    if(root==NULL)return INT_MIN;
    int mx=max(root->val,max(maxNode(root->left),maxNode(root->right)));
    return mx;
}

int size(Node*root){
    if(root==NULL)return 0;
    return 1+size(root->left)+size(root->right);
}

int levels(Node*root){
    if(root==NULL)return 0;
    return 1+max(levels(root->left),levels(root->right));
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

    
//     display(a);
//     cout<<endl;
//   cout<<  sumNode(a);
//    cout<<endl;
//    cout<<productNode(a);
//     cout<<endl;
//     cout<<maxNode(a);
//      cout<<endl;
//      cout<<size(a);
//     cout<<endl;
//     cout<<levels(a);  
//     cout<<endl;
   
}