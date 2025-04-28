#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int>&a, vector<int>&b){
    int i=0,j=0,k=0;
    vector<int>c(a.size() + b.size());
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            c[k++]=b[j++];
        } else{
            c[k++]=a[i++];
        }}
        // for(;j<b.size();j++){
        //     c[k++]=b[j];
        // }
        // for(;i<a.size();i++){
        //     c[k++]=a[i];
        // }
        if(i==a.size()){
            while(j<b.size()){
                c[k++]=b[j++];
            }
        }
         if(j==b.size()){
            while(i<a.size()){
                c[k++]=a[i++];
            }
        }

    
    return c;
}

int main(){
    vector<int>a;
    vector<int>b;

    a.push_back(1);
    a.push_back(4);
    a.push_back(5);
    a.push_back(8);
   

    b.push_back(2);
    b.push_back(3);
    b.push_back(6);
    b.push_back(7);
    b.push_back(10);
     b.push_back(12);

    vector<int>x=merge(a,b);
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }
}