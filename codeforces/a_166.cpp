

#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n=s.size();
   
    for(int i=0;i<s.size();i++){
        if(i==n-1){
            if(s[n-1]=='a'){
                s+="b";
                break;
            }
            else{
                s+="a";
                break;
            }
        }
        if(s[i]==s[i+1]){
           
           if(s[i]=='a'){
            s=s.substr(0,i+1)+"b"+s.substr(i+1,n-i-1);
            break;
           }
           else{
            s=s.substr(0,i+1)+"a"+s.substr(i+1,n-i-1);
            break;
           }
        }
    }
  
    
    cout<<s<<endl;
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