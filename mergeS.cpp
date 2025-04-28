#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&a,int l,int m,int h){
    int i=l;
    int j=m+1;
    vector<int>b;
     while(i<=m && j<=h){
        if(a[i]>a[j]){
           b.push_back(a[j++]);
        }
        else{
            b.push_back(a[i++]);
        }
     }

     while(i<=m){
        b.push_back(a[i++]);
     }

     while(j<=h){
        b.push_back(a[j++]);
     }

     for(int i=l;i<=h;i++){
        a[i]=b[i-l];
     }
}

void merges(vector<int>&a,int l,int h){
    if (l==h)return ;
    int mid;
    if(l<h){
        mid=(l+h)/2;
        merges(a,l,mid);
        merges(a,mid+1,h);
        merge(a,l,mid,h);
    }
}

int main(){
    vector<int>v={34,23,45,2,1};
    merges(v,0,v.size()-1);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}