#include<iostream>
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
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }

    int len=dp[n][m];
    string ans="";
    for(int i=0;i<len;i++){
        ans+='$';
    }
    int idx=len-1;
    int i=n,j=m;
    while(i>0 && j>0){
        if(s1[i-1]==s2[j-1]){
            ans[idx]=s1[i-1];
            idx--;
            i--,j--;
        }
        else if(dp[i-1][j]>dp[i][j-1]){
            i--;
        }
        else j--;
    }
    cout<<ans<<endl;
}

int main(){
    string s1="abcde";
    string s2="bdgek";
    lcs(s1,s2);
}