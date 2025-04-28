#include<iostream>
#include<vector>
using namespace std;
void skipD(vector<int>&a,int arr[],int n,int i){
    if(i==n){
        for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
        }
        return;

    }

    int f=arr[i];
    if(arr[i]==4){
        skipD(a,arr,n,i+1);
    }
    else{a.push_back(f);
        skipD(a,arr,n,i+1);
    }
}

int main(){
vector<int>v;
int arr[]={3,4,5,6,7,4,4,4};
int n=8;
skipD(v,arr,n,0);

}