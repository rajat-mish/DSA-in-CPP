#include<bits/stdc++.h>
using namespace std;
int dp[10005][105];
int fun(vector<int>&v,int target,int i){
    if(target==0)return 1;
    if(i==0)return (v[i]==target);
    if(dp[target][i]!=-1)return dp[target][i];
    int take=0;
    int ntake=fun(v,target,i-1);
    if(target>=v[i]){
        take=fun(v,target-v[i],i-1);
    }
    return dp[target][i]= take + ntake;
}

int main(){
    vector<int>v={1,1,4,5};
    int target=5;
    memset(dp,-1,sizeof dp);
    
   cout<<fun(v,target,3);
}