#include<iostream>
#include<vector>
using namespace std;

void subset(vector<int>v,int arr[],int n,int i){
    if(i==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
        return;
    }
    subset(v,arr,n,i+1);
    v.push_back(arr[i]);
    subset(v,arr,n,i+1);

}

int main(){
    int arr[]={1,2,3,4};
    int n=4;
    vector<int>v;
    subset(v,arr,n,0);
}
