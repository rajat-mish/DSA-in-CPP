#include<iostream>
using namespace std;

class Node{
   public:
   int val;
   Node*next;

   Node(int val){
    this->val=val;
    this->next=NULL;
   }
};

class Stack{
  public:
  Node*head;
  int size;
  Stack(){
    head=NULL;
    size=0;
  }

  void push(int val){
    Node*temp=new Node(val);
    temp->next=head;
    head=temp;
    size++;
  }

  void pop(){
    if(head==NULL){
        cout<<"Underflow"<<endl;
        return ;
    }
    else{
        head=head->next;
    }
  }

  int top(){
    if(head==NULL){
        cout<<"Empty"<<endl;
        return -1;
    }
   else{
    return head->val;
   }
  }

  void display(){
    Node*temp=head;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
  }
};

int main(){
    Stack st;
   st.push(1);
    st.push(2);
     st.push(3);
      st.push(4);

      st.display();

}