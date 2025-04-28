#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n=52;
    int m=9;
    vector<int>v;
    while(n!=0){
        int k=n%2;
        v.push_back(k);
        n=n/2;
    }

       vector<int>u;
        while(m!=0){
            int k=m%2;
            v.push_back(k);
            m=m/2;
        }
    //  reverse(v.begin(),v.end());
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    int y=max(v.size(),u.size());
    cout<<y;
}