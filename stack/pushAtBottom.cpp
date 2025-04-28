#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>y){
    while(y.size()>0){
        cout<<y.top()<<" ";
        y.pop();
    }
    
}
int main(){
    stack<int>st;
    st.push(8);
    st.push(9);
     st.push(10);
    st.push(11);
    cout<<"Before :";
       print(st);
    
    stack<int>s;
    while(st.size()>0){
        s.push(st.top());
        st.pop();
    }
    //suppose we want to push 67 at the bottom of the stack 
    st.push(67);
    while(s.size()>0){
        st.push(s.top());
        s.pop();
    }
    cout<<endl;
        cout<<"After :";
    print(st);
    
}