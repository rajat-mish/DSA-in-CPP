#include<bits/stdc++.h>
using namespace std;

class Solution {

  public:
 
  int fun(int i,vector<int>&coins,int sum,vector<vector<int>>&dp){
      if(i==0){
          if(sum%coins[i]==0){
              return  sum/coins[i];
          }
          return 1e9;
      }
      if(dp[i][sum]!=-1)return dp[i][sum];
      int nt=0+fun(i-1,coins,sum,dp);
      int t=INT_MAX;
      if(coins[i]<=sum){
          t=1+fun(i,coins,sum-coins[i],dp);
      }
      return dp[i][sum]= min(t,nt);
  }
    int minCoins(vector<int> &coins, int sum) {
        vector<vector<int>>dp(coins.size(),vector<int>(sum+1,-1));
        // Your code goes here
        int ans= fun(coins.size()-1,coins,sum,dp);
        if(ans>=1e9)return -1;
        return ans;
    }

  
};

  int main(){
       
        vector<int>coins={25,10,5};
        int sum=30;
        Solution sol;
        cout<<sol.minCoins(coins,sum);
    }