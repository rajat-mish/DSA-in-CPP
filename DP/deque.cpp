//AtCoder problem
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll dp[3005][3005];
ll arr[3005];

ll fun(int i,int j){
    if(i==j)return arr[i];
    if(dp[i][j]!=-1)return dp[i][j];
    return dp[i][j]=max(arr[i]-fun(i+1,j),arr[j]-fun(i,j-1));
}

int main(){
    ll n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    memset(dp,-1,sizeof dp);
    cout<<fun(0,n-1)<<endl;
}