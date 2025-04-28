#include<iostream>
#include<vector>
using namespace std;

void subArray(vector<int>v,int arr[],int n,int i){
    if(i==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i];
         
        }
        cout<<endl;
        return;
    }
    subArray(v,arr,n,i+1);
    if(v.size()==0){
 v.push_back(arr[i]);
    subArray(v,arr,n,i+1);

    }
    else if(arr[i-1]==v[v.size()-1]){
         v.push_back(arr[i]);
    subArray(v,arr,n,i+1);

    }
   
}

int main(){
    int arr[]={0,0,0,0,0};
    int n=3;
    vector<int>v;
    subArray(v,arr,n,0);
    cout<<endl;
 
}
