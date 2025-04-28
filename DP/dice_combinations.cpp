
#include <bits/stdc++.h>
using namespace std;

  int a=1000000007;

  vector<int> dp;
int fun(int x){
    if(x==0)return 1;
  
    if(dp[x]!=-1)return dp[x];
     int count=0;
   
    for(int i=1;i<=6;i++){
        if(x-i<0)break;
       
       count=(count%a + fun(x-i)%a )%a;
      
    }
    dp[x]=count;
    
    return count;

}

  


int main()
{
    int n;
    cin>>n;
  
    
      dp.clear();
         dp.resize(n + 1,-1); 
    
        cout<< fun(n)%a<<endl;
    
   

    return 0;
}