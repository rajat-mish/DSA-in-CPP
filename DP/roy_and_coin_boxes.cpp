#include<bits/stdc++.h>
using namespace std;
// hackerearth problem
int main(){
    int n;
    cin>>n;
    vector<int>f(n+10,0);
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int l,r;
        cin>>l>>r;
        f[l]++;
        f[r+1]--;
    }
    for(int i=1;i<f.size();i++){
        f[i]+=f[i-1];
    }
    vector<int>coins(10000005,0);
    for(int i=0;i<=n;i++){
           coins[f[i]]++;
    }

    for(int i=coins.size()-2;i>=0;i--){
        coins[i]+=coins[i+1];
    }
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<coins[num]<<endl;
    }
}