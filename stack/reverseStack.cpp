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
       print(st);
    //for reverse the stack we need extra space (extra stack)
    stack<int>s;
    while(st.size()>0){
        s.push(st.top());
        st.pop();
    }
    cout<<endl;
    
    print(s);
    
}