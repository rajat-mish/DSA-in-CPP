#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>st;
    st.push(8);
    st.push(9);
    cout<<st.size()<<endl;
    cout<<st.top();
}