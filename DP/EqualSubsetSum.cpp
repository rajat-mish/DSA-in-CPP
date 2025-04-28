#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp;
bool fun(vector<int>&v,int target,int i){
    if(i==0)return(v[i]==target);
    if(target==0)return true;
    if(dp[i][target]!=-1)return dp[i][target];

    bool take=false;
    bool ntake=fun(v,target,i-1);
    if(v[i]<=target){
        take=fun(v,target-v[i],i-1);
    }
     return dp[i][target]= take||ntake;
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
         cin>>v[i];
    }
    int sum=0;
    for(auto ele:v){
        sum+=ele;
    }

    if(sum%2!=0)return false;
    dp.assign(n,vector<int>(sum+1,-1));
    cout<<fun(v,sum/2,n-1);
}