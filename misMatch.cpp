#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    while(i<n){
        int ci=arr[i]-1; //correct index of any element
        if(i==ci || arr[ci]==arr[i]){
            i++;
        }
        else{
            swap(arr[i],arr[ci]);
        }

    }

    for(int i=0;i<n;i++){
      if(arr[i]!=i+1){
        cout<<arr[i]<<" "<<i+1;
      }
    }

}