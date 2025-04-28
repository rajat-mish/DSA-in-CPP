#include<iostream>
#include<vector>

using namespace std;

int fun(string s1,string s2,int i,int j,vector<vector<int>>&dp){
    if(i==0 || j==0)return 0;
        
    if(dp[i][j]!=-1)return dp[i][j];
    if(s1[i-1]==s2[j-1]){
      return dp[i][j]= 1+fun(s1,s2,i-1,j-1,dp);
    }
    
        return dp[i][j]=  max(fun(s1,s2,i-1,j,dp),fun(s1,s2,i,j-1,dp));

    
}



int main(){
 string s1="abcf";
 string s2="abcdf";
 int n=s1.size();
 int m=s2.size();
 vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
 cout<<fun(s1,s2,s1.size(),s2.size(),dp);
}