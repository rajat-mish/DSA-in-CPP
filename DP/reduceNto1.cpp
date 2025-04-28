#include<bits/stdc++.h>
#define inf INT_MAX
using namespace std;
vector<int>dp;

int fun(int n){   // RECURSIVE SOLUTION
    if(n==1)return 0;
    if(n==2 || n==3)return 1;
   
  

   return  1+min({fun(n-1),(n%2==0)?fun(n/2):inf,(n%3==0)?fun(n/3):inf});
}

int funTOPd(int n){ // TOP DOWN DP  O(N) // traverse only once on every state qki doosri bar k liye to dp me store kar hi rkha h
     if(n==1)return 0;
    if(n==2 || n==3)return 1;
   
    if(dp[n]!=-1)return dp[n];

   return dp[n]= 1+min({funTOPd(n-1),(n%2==0)?funTOPd(n/2):inf,(n%3==0)?funTOPd(n/3):inf});
}

int funBup(int n){ //bOTTOM up approach O(N)
    dp.clear();
    dp.resize(n+1,-1);

    
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;
    for(int i=4;i<=n;i++){
        dp[i]= 1+min({funBup(n-1),(n%2==0)?funBup(n/2):inf,(n%3==0)?funBup(n/3):inf});
    }
return dp[n];

}

int main(){
     dp.clear();
    dp.resize(1005,-1);
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<funBup(n);
}