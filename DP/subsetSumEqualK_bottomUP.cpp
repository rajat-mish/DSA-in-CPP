#include<bits/stdc++.h>
using namespace std;

bool fun(vector<int>&v,int target,int n){
    vector<vector<bool>>dp(n+1,vector<bool>(target+1,0));
    for(int i=0;i<n;i++){
        dp[i][0]=true;
    }
    dp[0][v[0]]=true;
    for(int ind=1;ind<n;ind++){
        for(int k=1;k<=target;k++){
            bool ntake=dp[ind-1][k];
            bool take=false;
            if(v[ind]<=k){
                take=dp[ind-1][k-v[ind]];
                
            }
            dp[ind][k]=take|ntake;
        }
    }
    return dp[n-1][target];
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<fun(v,k,n);
}