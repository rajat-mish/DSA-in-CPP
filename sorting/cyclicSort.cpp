#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={5,3,4,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    while(i<n){
        int ci=arr[i]-1; //correct index of any element
        if(i==ci){
            i++;
        }
        else{
            swap(arr[i],arr[ci]);
        }

    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}