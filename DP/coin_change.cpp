#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>dp;
 vector<int>v;
int fun(int x){
    if(x==0)return 0;
   
    if(dp[x]!=-1)return dp[x];
    
    if(dp[x]==INT_MAX){
        
    }
 
     
 
    int res=INT_MAX;
    for(int i=0;i<v.size();i++){
        if((x-v[i])<0)continue;
        res= min(res,fun((x-v[i])));
    }
    
    if(res==INT_MAX)return dp[x]=INT_MAX;  // res not updated means we are unable to make pattern
    return dp[x]= 1+res;
 
}

int main(){
   
    cin>>n;
    int x;
    cin>>x;
   
    for(int i=0;i<n;i++){
       int num;
       cin>>num;
       v.push_back(num);
    }
    dp.clear();
    dp.resize(1000006,-1);
  int ans=fun(x);
  if(ans==INT_MAX)cout<<"-1"<<endl;
 else cout<<ans<<endl;

}