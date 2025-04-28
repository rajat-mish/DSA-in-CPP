#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>&s){
    if(s.size()==0)return;
    int x=s.top();
    s.pop();
    display(s);
    cout<<x<<" ";
    s.push(x);
}
int main(){
    stack<int>st;
    st.push(8);
    st.push(9);
     st.push(10);
    st.push(11);
    display(st);
   
}