#include<iostream>
#include<vector>
using namespace std;
int index(vector<int>&v,int c,int n){
    if(c==v.size()){
        return -1;
    }
   if(v[c]==n){
return c;
   }
   return index(v,c+1,n);
   
}
int main(){
vector<int>v={12,4,5,3,5};
int n=12;
cout<<index(v,0,n);
}