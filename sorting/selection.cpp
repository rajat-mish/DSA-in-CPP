#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,3,-2,1,1};
    int n=6,k;
    for(int i=0;i<n-1;i++){
        for(int j=k=i;j<n;j++){
            if(arr[j]<arr[k]){
                k=j;
            }
        }
        swap(arr[i],arr[k]);
    }
    for(int ele:arr){
        cout<<ele<<" ";
    }
}