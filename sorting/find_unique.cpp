#include<iostream>
using namespace std;
int main(){
    int arr[]={2,2,3,3,4,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=0;
    for(int i=0;i<n;i++){
    
             x=x^arr[i];  // same numbers ka xor 0 hota hai and N ka xor 0 k saath N deta hai
        
    }
    cout<<x;
}