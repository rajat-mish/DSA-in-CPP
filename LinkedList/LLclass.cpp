#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class LinkedList{
public:
Node*head;
Node*tail;
int size;

LinkedList(){
    this->head=NULL;
    this->tail=NULL;
    this->size=0;
}

void insertEnd(int val){
    Node*temp=new Node(val);
    if(size==0){
        head=tail=temp;
        size++;
    }
    else{
        tail->next=temp;
        tail=temp;
        size++;
    }
}

void inserBegin(int val){
    Node*temp=new Node(val);
    if(size==0){
        head=tail=temp;
        size++;
    }
    else{
        temp->next=head;
        head=temp;
        size++;
    }
}

void insertIdx(int i,int val){
    if(i<0 || i>size){
        cout<<"Invalid"<<endl;
    }
   else if(i==0){
        inserBegin(val);
    }
   else if (i==size){
    insertEnd(val);
   }

   else{
    Node*t=new Node(val);
    Node*temp=head;

    for(int idx=1;idx<=i-1;idx++){
        temp=temp->next;
    }
    t->next=temp->next;
    temp->next=t;
    size++;
   }
}

int getElement(int n){
    Node*temp=head;
    for(int i=1;i<n;i++){
        temp=temp->next;

    }
    return temp->val;
}

void deleteHead(){
    if(size<=0)cout<<"Invalid deletion"<<endl;
    head=head->next;
    size--;
}

void deleteIndx(int idx){
    if(idx<0 || idx>size){
        cout<<"invalid"<<endl;
        return;
    }
    else if(idx==1){
        deleteHead();
    }
    else if(idx==size)deleteTail();
    else{
        Node*temp=head;
        for(int i=1;i<idx;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        size--;
    }
}

void deleteTail(){
    Node*temp=head;
    while(temp->next!=tail){
        temp=temp->next;
    }
    temp->next=NULL;
    tail=temp;
    size--;
}
void display(){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void reverse(){
     Node*cur=head;
     Node*pre=NULL;
     Node*nex=NULL;
     while(cur){
        nex=cur->next;
        cur->next=pre;
        pre=cur;
        cur=nex;
     }
     head=pre;
}

};

int main(){
    LinkedList ll;
    ll.insertEnd(1);
    ll.insertEnd(0);
    ll.inserBegin(1);
   // ll.insertEnd(89);

    //ll.insertIdx(4,67);
    //   ll.deleteHead();
    //   ll.deleteIndx(2);
    ll.display();
    cout<<endl;
    // int n=ll.getElement(5);
    // cout<<n<<endl;
    // cout<<"size of the linked list is "<<ll.size;

    // ll.reverse();
    // cout<<"reversed ll "<<endl;
    // ll.display();
    
}