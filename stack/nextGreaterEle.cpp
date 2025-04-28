#include<iostream>
#include<stack>
using namespace std;

int main(){
    int arr[]={3,5,2,6,4,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans[n];
    stack<int>st;
    ans[n-1]=-1;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
       // Approach:- pop,ans,push and reverse traverse in array
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        if(st.size()==0) ans[i]=-1;
        else{
            ans[i]=st.top();
            st.push(arr[i]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}