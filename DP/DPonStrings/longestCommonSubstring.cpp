#include<iostream>
#include<climits>
#include<vector>
using namespace std;

void lcs(string s1,string s2){
    int n=s1.size();
    int m=s2.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));

    for(int j=0;j<=m;j++){
        dp[0][j]=0;
    }

     for(int i=0;i<=n;i++){
        dp[i][0]=0;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=0;
            }
        }
    }
     int mx=INT_MIN;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            mx=max(mx,dp[i][j]);
        }
    }

    cout<<mx<<endl;


}


int main(){
    string s1="abcd";
    string s2="efgh";
    lcs(s1,s2);
}