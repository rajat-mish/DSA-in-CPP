#include<bits/stdc++.h>
using namespace std;

int fun(vector<int>&v,int target,int n){
    vector<int>ans;
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
     int mn=INT_MAX;
    for(int i=0;i<=target/2;i++){
        if(dp[n-1][i]==true){
            mn=min(mn,abs(target-2*i));
        }
    }
   
       return mn;
}

int main(){
    int n,k=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<v.size();i++){
        k+=v[i];
    }
    cout<<fun(v,k,n);
}