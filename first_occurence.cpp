#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={1,2,3,3,4,4,4,5};

    int x=3;

    int l=0;
    int h=v.size()-1;
    int res;
    while(l<=h){
        int m=l+(h-l)/2;
        if(v[m]==x){
            res=m;
            h=m-1;
        }
        
       if(v[m]<x){
        l=m+1;
       }
       if(v[m]>x){
        h=m-1;
       }
        
        
        
        
        
        
        }
        cout<<l;
}
