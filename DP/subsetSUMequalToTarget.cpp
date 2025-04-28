#include<bits/stdc++.h>
using namespace std;
int dp[10005][105];
bool fun(vector<int>&v,int target,int i){
    if(target==0)return true;
    if(i==0)return (v[i]==target);
    if(dp[target][i]!=-1)return dp[target][i];
    bool take=false;
    bool ntake=fun(v,target,i-1);
    if(target>=v[i]){
        take=fun(v,target-v[i],i-1);
    }
    return dp[target][i]= take||ntake;
}

int main(){
    vector<int>v={1,2,3,4};
    int target=5;
    memset(dp,-1,sizeof dp);
    
    if(fun(v,target,v.size()-1)==1)cout<<"true"<<endl;
    else{
        cout<<"false"<<endl;
    }
}