
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



int maxINbst(Node*root){ Node*temp=root;
    if(root->right==NULL)return root->val;
   
    else{
        
        while(temp->right!=NULL){temp=temp->right;}
        

    }
    return temp->val;
}
int minINbst(Node*root){ Node*temp=root;
    if(root->left==NULL)return root->val;
   
    else{
        
        while(temp->left!=NULL){temp=temp->left;}
        

    }
    return temp->val;
}










int main(){
    Node*a=new Node(10);
    Node*b=new Node(8);
    Node*c=new Node(12);
    Node*d=new Node(4);
    Node*e=new Node(7);
    Node*f=new Node(11);
     Node*g=new Node(14);
      Node*h=new Node(13);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    g->left=h;
 
 cout<<"max:"<<maxINbst(a)<<endl;
 cout<<"min:"<<minINbst(a);

}