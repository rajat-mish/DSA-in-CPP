#include<iostream>
using namespace std;

class minheap{
 public:
 int arr[50];
 int idx;

 minheap(){
    idx=1;
 }
 int top(){
    return arr[1];
 }

 void push(int x){
    arr[idx]=x;
 int i=idx;
 idx++;
 while(i!=1){
    int parent=i/2;
    if(arr[i]<arr[parent]){
        swap(arr[i],arr[parent]);
    }
    else{
        break;
    }
    i=parent;
 }
 }

 int size(){
    return idx-1;
 }

 void pop(){
    idx--;
    arr[1]=arr[idx];
    int i=1; // rearrangement
    while(true){
        int left=2*i,right=2*i +1;
        if(left>idx-1)break;
        if(right>idx-1){
            if(arr[i]>arr[left]){
                swap(arr[i],arr[left]);
                i=left;
            }
            break;
        }
        if(arr[left]<arr[right]){
            if(arr[i]>arr[left]){
                swap(arr[i],arr[left]);
                i=left;
            }
            else break;
        }
        else{
            if(arr[i]>arr[right]){
                swap(arr[i],arr[right]);
                i=right;
            }
            else break;
        }
    }
 }
 void display(){
    for(int i=1;i<idx;i++){
        cout<<arr[i]<<" ";
    }
 }

};


int main(){
    minheap pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);
    pq.display();
    pq.pop();
    cout<<endl;
    cout<<"After pop operation"<<endl;
    pq.display();

}