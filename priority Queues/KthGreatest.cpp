// find the kth greatest element in array
// we can do this question by several methods but this method is for best time complexity
// for kth smallest use MAX HEAP for kth greater use MIN HEAP

// approach of this problem is: min heap ke top pe pda element kbhi bhi kth greatest nhi ho skta qki usse bde k elements to already heap me pde hue hain isliye top pe pde element ko pop krdo


//sabse last me jo priority queue ke top pe pda hai vhi kth greatest element hoga
// time complexity O(n*logK)
#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={3,54,-9,4,2,-8,6};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    priority_queue<int,vector<int>,greater<int>>pq;  // min heap
    for(int i=0;i<n;i++){
       pq.push(arr[i]);
       if(pq.size()>k){
        pq.pop();
       }
    }
    cout<<pq.top();
}