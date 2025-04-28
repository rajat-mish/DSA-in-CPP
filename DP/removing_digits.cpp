#include<bits/stdc++.h>
using namespace std;
vector<int>dp;
int fun(int n){
    if(n==0)return 0;
    if(n<10){
        return 1;
    }
    if(dp[n]!=-1)return dp[n];
   int num=n;
     vector<long long>v;
    while(num>0){
        int a=num%10;
     if(a!=0){
          v.push_back(a);
     }
       
       
        num=num/10;
        
    }
    int res=INT_MAX;
    for(int i=0;i<v.size();i++){
        res= min(res,fun((n-v[i])));
    }
    return dp[n]= 1+res;
 
}

int main(){
    int n;
    cin>>n;
    dp.clear();
    dp.resize(n+5,-1);
    cout<<fun(n);

}