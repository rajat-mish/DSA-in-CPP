#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node*prev;

    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

class DLL{
  public:
  Node*head;
  int size;
  DLL(){
    head=NULL;
    size=0;
  }
  void insertIdx(int val,int idx){
    Node*temp=head;
    Node*a=new Node(val);
    for(int i=1;i<idx;i++){
        temp=temp->next;
    }
    a->next=temp->next;
    temp->next->prev=a;
    a->prev=temp;



  }
};
void deleteidx(Node*head,int idx){
    Node*temp=head;
    for(int i=1;i<idx;i++){
        temp=temp->next;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;

}
int main(int argc, char const *argv[])
{
   
  DLL l;
   
   // deleteidx(a,2);
   l.insertIdx(2,67);
    
    

    return 0;
}
