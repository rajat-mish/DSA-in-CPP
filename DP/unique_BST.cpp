 #include<bits/stdc++.h>
 using namespace std;
 
 vector<long long> dp;
    const long long MOD = 1000000007;
    
    long long fun(int n){
        if(n == 0 || n == 1) return 1;
        if(n == 2) return 2;
       
        if(dp[n] != -1) return dp[n];
        
        long long sum = 0;
        for(int k = 1; k <= n; k++){
            sum = (sum+fun(k - 1) * fun(n - k))%MOD;
        }
        return dp[n] = sum;
    }
    
    int numTrees(int N) 
    {
        if (N == 0) return 1;
        
        dp.clear();
        dp.resize(N + 1, -1);  // Only resize for the required number of elements
        return fun(N);
    }

    int main(){
        int n ;
        cin>>n;
        cout<<"possible number of bst:"<<numTrees(n);

    }