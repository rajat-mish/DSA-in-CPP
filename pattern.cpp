#include<bits/stdc++.h>
using namespace std;

void solve(){
     int n;
    cin>>n;
    int a[n*2][n*2];
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
          if((i+j)%2==0){
            cout<<"##";
          }
          else{
            cout<<"..";
          }
        }
        cout<<endl;
         for(int j=0;j<n;j++){
          if((i+j)%2==0){
            cout<<"##";
          }
          else{
            cout<<"..";
          }
        }
        cout<<endl;
    }
}


int main(){
   int t;
   cin>>t;
   while(t--){
    solve();
   }
}
