// #include<iostream>
// #include<vector>
// using namespace std;

// void permutation(int  ans[],vector<int>original,int n){
//     if(original.size()==0){
//         cout<<ans<<endl;
//         return ;
//     }

//     for(int i=0;i<original.size();i++){
       
//     }
    
// }

// int main(){
//     vector<int>original={1,2,3};
//     int n=3;
//     int ans[3];
//     permutation(ans,original,n);
// }




#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int count=0,c2=0;
    for(int i=0;i<n;i++){
        if(v[i]==0)count++;
        if(n>=3 && i>0 && i<n-1){
            if((v[i]==0 && v[i-1]!=0 && v[i+1]!=0)){
                cout<<2<<endl;
                return;
            }
            else if((v[i]==0 && v[i-1]==0 && v[i+1]!=0)||((v[i]==0 && v[i-1]!=0 && v[i+1]==0))){
                c2++;
            }
        }
    }
    if(c2>1){
        cout<<2<<endl;
        return;
    }
    if(count==n)cout<<0<<endl;
    else cout<<1<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}