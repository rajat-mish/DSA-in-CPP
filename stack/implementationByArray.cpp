#include<iostream>
using namespace std;

class Stack{
   public:
   int arr[5];
   int idx;

   Stack(){
    idx=-1;
   }

   void push(int val){
    if(idx==sizeof(arr)/sizeof(arr[0])){
        cout<<"Stack overflow"<<endl;
        return;
    }
    else{
        idx++;
        arr[idx]=val;
    }
   }
   void pop(){
    if(idx==-1){
        cout<<"Stack Underflow"<<endl;
    }
    else{
    idx--;}
   }

   int top(){
     if(idx==-1){
        cout<<"Stack is empty"<<endl;
     }
     else{
        return arr[idx];
     }
   }
   void display(){
    for(int i=0;i<sizeof(arr)/sizeof(arr[0])-1;i++){
        cout<<arr[i]<<" ";
    }}
};

int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
  st.display();

}