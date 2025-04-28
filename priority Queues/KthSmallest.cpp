// find the kth smallest element in array
// we can do this question by several methods but this method is for best time complexity
// for kth smallest use MAX HEAP for kth greater use MIN HEAP

// approach of this problem is: max heap ke top pe pda element kbhi bhi kth smallest nhi ho skta qki usse smaller k elements to already heap me pde hue hain isliye top pe pde element ko pop krdo


//sabse last me jo priority queue ke top pe pda hai vhi kth smallest element hoga
// time complexity O(n*logK)
#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={3,54,-9,4,2,-8,6};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    priority_queue<int>pq;  // max heap
    for(int i=0;i<n;i++){
       pq.push(arr[i]);
       if(pq.size()>k){
        pq.pop();
       }
    }
    cout<<pq.top();
}